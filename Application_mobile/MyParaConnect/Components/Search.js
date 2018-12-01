import React from 'react'
import { StyleSheet, View, Button, TextInput, FlatList, Text } from 'react-native'

class Search extends React.Component {
  render() {
    return (
      <View style={styles.mainContainer}>
      <Text style={styles.textinput}>Position GPS du Parasol</Text>
      <Button style={styles.Buttonstyle} title="Calculer" color='#1e35ff' onPress={() => {}}/>
      </View>
    )
  }
}

const styles = StyleSheet.create({
  Buttonstyle: {
    marginLeft: 5,
    marginRight: 5,
    height: 50,
    borderColor: '#1e35ff',
    borderWidth: 1,
    paddingLeft: 5
  },

  mainContainer: {
    marginTop: 20,
    flex: 1
  },
  textinput: {
    marginLeft: 5,
    marginRight: 5,
    height: 50,
    borderColor: '#1e35ff',
    borderWidth: 1,
    paddingLeft: 5,
    backgroundColor: '#1e35ff'
  }
})

export default Search
