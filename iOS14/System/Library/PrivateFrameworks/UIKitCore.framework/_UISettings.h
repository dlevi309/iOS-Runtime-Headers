/*
* Generated on Thursday, January 14, 2021 at 2:20:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <PrototypeTools/PTSettings.h>

@interface _UISettings : PTSettings
+(id)settingsFromArchiveFile:(id)arg1 error:(id*)arg2 ;
+(id)_dictionaryForColor:(id)arg1 ;
+(id)_dictionaryForFont:(id)arg1 ;
+(id)_colorFromDictionary:(id)arg1 ;
+(id)_fontFromDictionary:(id)arg1 ;
+(BOOL)_supportsArchivingCustomClass:(Class)arg1 ;
+(BOOL)_supportsArchivingStructType:(id)arg1 ;
+(id)_archiveDictionaryForObject:(id)arg1 ofCustomClass:(Class)arg2 ;
+(id)_archiveDictionaryForValue:(id)arg1 ofStructType:(id)arg2 ;
+(id)_objectOfCustomClass:(Class)arg1 fromArchiveDictionary:(id)arg2 ;
+(id)_valueOfStructType:(id)arg1 fromArchiveDictionary:(id)arg2 ;
-(BOOL)archiveToFile:(id)arg1 error:(id*)arg2 ;
-(BOOL)restoreFromArchiveFile:(id)arg1 error:(id*)arg2 ;
-(void)setValuesFromModel:(id)arg1 ;
-(id)initWithDefaultValues;
@end
