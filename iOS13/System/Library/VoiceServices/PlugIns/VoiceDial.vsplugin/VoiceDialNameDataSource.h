/*
* Generated on Monday, March 1, 2021 at 2:35:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VoiceServices/PlugIns/VoiceDial.vsplugin/VoiceDial
*/


@interface VoiceDialNameDataSource : NSObject {

	unsigned long long _nameTypeMask;
	BOOL _compositeNamesOnly;

}
+(id)nameDataSourceForLanguageIdentifier:(id)arg1 ;
+(id)_nameDataSourceByLanguageMap;
-(unsigned long long)nameTypes;
-(int)matchingNameType:(id)arg1 fromTypes:(unsigned long long)arg2 forPerson:(void*)arg3 ;
-(unsigned long long)indexOfMainNameOfType:(int)arg1 ;
-(unsigned long long)personNameCount;
-(BOOL)getNth:(unsigned long long)arg1 name:(id*)arg2 phoneticName:(id*)arg3 ofType:(int)arg4 nameIndex:(unsigned long long*)arg5 forPerson:(void*)arg6 ;
-(BOOL)getName:(id*)arg1 phoneticName:(id*)arg2 atIndex:(unsigned long long)arg3 forPerson:(void*)arg4 ;
-(int)typeOfNameAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)countOfNamesOfType:(int)arg1 ;
-(BOOL)useCompositeNamesOnly;
-(id)copyPronunciationPropertyForPerson:(void*)arg1 withNameType:(int)arg2 ;
-(void)setUseCompositeNamesOnly:(BOOL)arg1 ;
@end
