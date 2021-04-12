/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVAsynchronousKeyValueLoading.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class AVMetadataItemInternal, NSString, NSNumber, NSDate, NSData, NSLocale, NSDictionary;

@interface AVMetadataItem : NSObject <AVAsynchronousKeyValueLoading, NSCopying, NSMutableCopying> {

	AVMetadataItemInternal* _priv;

}

@property (nonatomic,readonly) NSString * stringValue; 
@property (nonatomic,readonly) NSNumber * numberValue; 
@property (nonatomic,readonly) NSDate * dateValue; 
@property (nonatomic,readonly) NSData * dataValue; 
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,copy,readonly) NSString * extendedLanguageTag; 
@property (nonatomic,copy,readonly) NSLocale * locale; 
@property (nonatomic,readonly) SCD_Struct_AV7 time; 
@property (nonatomic,readonly) SCD_Struct_AV7 duration; 
@property (nonatomic,copy,readonly) NSString * dataType; 
@property (nonatomic,copy,readonly) id<NSObject><NSCopying> value; 
@property (nonatomic,copy,readonly) NSDictionary * extraAttributes; 
+(void)initialize;
+(id)metadataItemsFromArray:(id)arg1 withKey:(id)arg2 keySpace:(id)arg3 ;
+(id)metadataItemsFromArray:(id)arg1 filteredAndSortedAccordingToPreferredLanguages:(id)arg2 ;
+(id)identifierForKey:(id)arg1 keySpace:(id)arg2 ;
+(id)keySpaceForIdentifier:(id)arg1 ;
+(id)keyForIdentifier:(id)arg1 ;
+(id)_metadataItemWithFigMetadataDictionary:(id)arg1 containerURL:(id)arg2 securityOptions:(unsigned)arg3 ;
+(BOOL)_clientExpectsISOUserDataKeysInQuickTimeUserDataKeySpace;
+(id)_isoUserDataKeysRequiringKeySpaceConversion;
+(id)_replaceQuickTimeUserDataKeySpaceWithISOUserDataKeySpaceIfRequired:(id)arg1 ;
+(id)dataTypeForValue:(id)arg1 ;
+(id)metadataItemsFromArray:(id)arg1 withLocale:(id)arg2 ;
+(id)metadataItemsFromArray:(id)arg1 filteredByIdentifier:(id)arg2 ;
+(id)metadataItemsFromArray:(id)arg1 withStringValue:(id)arg2 ;
+(id)metadataItemsFromArray:(id)arg1 filteredByMetadataItemFilter:(id)arg2 ;
+(id)_metadataItemWithFigMetadataDictionary:(id)arg1 ;
+(id)_figMetadataPropertyFromMetadataItems:(id)arg1 ;
+(id)metadataItemWithPropertiesOfMetadataItem:(id)arg1 valueLoadingHandler:(/*^block*/id)arg2 ;
+(id)metadataItemsFromArray:(id)arg1 filteredByIdentifiers:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)key;
-(NSString *)stringValue;
-(NSLocale *)locale;
-(id)languageCode;
-(NSString *)identifier;
-(id<NSObject><NSCopying>)value;
-(id)startDate;
-(SCD_Struct_AV7)duration;
-(SCD_Struct_AV7)time;
-(NSString *)dataType;
-(NSDate *)dateValue;
-(NSData *)dataValue;
-(void)_updateIdentifier;
-(void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSNumber *)numberValue;
-(NSString *)extendedLanguageTag;
-(void)cancelLoading;
-(long long)statusOfValueForKey:(id)arg1 error:(id*)arg2 ;
-(id)keySpace;
-(NSDictionary *)extraAttributes;
-(id)commonKey;
-(id)discoveryTimestamp;
-(void)_extractPropertiesFromDictionary:(id)arg1 ;
-(id)_valueFromCFType:(void*)arg1 ;
-(void)_updateCommonKey;
-(void)_makeValueReady;
-(void)_makePropertiesReady;
-(void)_updateLanguageInformationFromLocale:(id)arg1 ;
-(void)_updateLanguageInformationFromExtendedLanguageTag:(id)arg1 ;
-(id)_keyAsString;
-(CGImageRef)imageValue;
-(id)unicodeLanguageIdentifier;
-(id)unicodeLanguageCode;
-(id)_initWithFigMetadataDictionary:(id)arg1 ;
-(id)_figMetadataDictionary;
-(id)intrinsicAttributesOfExtraAttributes:(id)arg1 ;
-(BOOL)_areExtraAttributesOf:(id)arg1 comparableToExtraAttributesOf:(id)arg2 ;
-(void*)_copyValueAsCFTypeWithFormatDescription:(opaqueCMFormatDescriptionRef)arg1 error:(id*)arg2 ;
-(id)_figMetadataDictionaryWithValue:(BOOL)arg1 diviningValueDataType:(BOOL)arg2 ;
-(id)_serializationDataType;
-(id)_conformingDataTypes;
-(id)_createJSONEncodedDataFromValue:(id)arg1 error:(id*)arg2 ;
-(id)_figMetadataFormat;
-(id)_initWithReader:(OpaqueFigMetadataReaderRef)arg1 itemIndex:(long long)arg2 ;
-(id)_figMetadataSpecificationReturningError:(id*)arg1 ;
@end

