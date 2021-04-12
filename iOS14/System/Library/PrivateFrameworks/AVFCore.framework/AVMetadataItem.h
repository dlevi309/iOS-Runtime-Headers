/*
* Generated on Thursday, January 14, 2021 at 2:21:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVAsynchronousKeyValueLoading.h>
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
@property (nonatomic,readonly) SCD_Struct_AV6 time; 
@property (nonatomic,readonly) SCD_Struct_AV6 duration; 
@property (nonatomic,copy,readonly) NSString * dataType; 
@property (nonatomic,copy,readonly) id<NSObject><NSCopying> value; 
@property (nonatomic,copy,readonly) NSDictionary * extraAttributes; 
+(void)initialize;
+(id)_isoUserDataKeysRequiringKeySpaceConversion;
+(id)metadataItemsFromArray:(id)arg1 filteredByIdentifier:(id)arg2 ;
+(id)_metadataItemWithFigMetadataDictionary:(id)arg1 ;
+(id)metadataItemsFromArray:(id)arg1 filteredByMetadataItemFilter:(id)arg2 ;
+(id)keyForIdentifier:(id)arg1 ;
+(id)dataTypeForValue:(id)arg1 ;
+(id)metadataItemsFromArray:(id)arg1 withStringValue:(id)arg2 ;
+(id)metadataItemsFromArray:(id)arg1 filteredByIdentifiers:(id)arg2 ;
+(id)_figMetadataPropertyFromMetadataItems:(id)arg1 ;
+(id)identifierForKey:(id)arg1 keySpace:(id)arg2 ;
+(id)metadataItemsFromArray:(id)arg1 filteredAndSortedAccordingToPreferredLanguages:(id)arg2 ;
+(id)metadataItemsFromArray:(id)arg1 withLocale:(id)arg2 ;
+(id)_metadataItemWithFigMetadataDictionary:(id)arg1 containerURL:(id)arg2 securityOptions:(unsigned)arg3 ;
+(BOOL)_clientExpectsISOUserDataKeysInQuickTimeUserDataKeySpace;
+(id)_replaceQuickTimeUserDataKeySpaceWithISOUserDataKeySpaceIfRequired:(id)arg1 ;
+(id)keySpaceForIdentifier:(id)arg1 ;
+(id)metadataItemWithPropertiesOfMetadataItem:(id)arg1 valueLoadingHandler:(/*^block*/id)arg2 ;
+(id)metadataItemsFromArray:(id)arg1 withKey:(id)arg2 keySpace:(id)arg3 ;
-(NSString *)dataType;
-(NSDate *)dateValue;
-(NSNumber *)numberValue;
-(void)cancelLoading;
-(SCD_Struct_AV6)time;
-(NSData *)dataValue;
-(NSLocale *)locale;
-(id)keySpace;
-(id)init;
-(id)startDate;
-(long long)statusOfValueForKey:(id)arg1 error:(id*)arg2 ;
-(id)languageCode;
-(NSString *)stringValue;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSString *)extendedLanguageTag;
-(id)commonKey;
-(void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(CGImageRef)imageValue;
-(id)_keyAsString;
-(id)discoveryTimestamp;
-(void)_extractPropertiesFromDictionary:(id)arg1 ;
-(id)_valueFromCFType:(void*)arg1 ;
-(void)_updateCommonKey;
-(void)_makeValueReady;
-(void)_makePropertiesReady;
-(void)_updateLanguageInformationFromLocale:(id)arg1 ;
-(void)_updateLanguageInformationFromExtendedLanguageTag:(id)arg1 ;
-(id)unicodeLanguageIdentifier;
-(id)unicodeLanguageCode;
-(id)_initWithFigMetadataDictionary:(id)arg1 ;
-(id)_figMetadataDictionary;
-(id)intrinsicAttributesOfExtraAttributes:(id)arg1 ;
-(id)_serializationDataType;
-(BOOL)_areExtraAttributesOf:(id)arg1 comparableToExtraAttributesOf:(id)arg2 ;
-(void*)_copyValueAsCFTypeWithFormatDescription:(opaqueCMFormatDescriptionRef)arg1 error:(id*)arg2 ;
-(id)_figMetadataDictionaryWithValue:(BOOL)arg1 diviningValueDataType:(BOOL)arg2 ;
-(id)_conformingDataTypes;
-(id)_figMetadataFormat;
-(id)_createJSONEncodedDataFromValue:(id)arg1 error:(id*)arg2 ;
-(id)_initWithReader:(OpaqueFigMetadataReaderRef)arg1 itemIndex:(long long)arg2 ;
-(id)_figMetadataSpecificationReturningError:(id*)arg1 ;
-(id)key;
-(unsigned long long)hash;
-(void)_updateIdentifier;
-(NSString *)identifier;
-(SCD_Struct_AV6)duration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)extraAttributes;
-(id<NSObject><NSCopying>)value;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

