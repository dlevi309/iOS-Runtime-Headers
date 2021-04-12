/*
* Generated on Thursday, January 14, 2021 at 2:21:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCRecordSource.h>

@class NSArray;

@interface FCArticleRecordSource : FCRecordSource {

	NSArray* _nonLocalizableKeys;
	NSArray* _localizableKeys;
	NSArray* _alwaysLocalizedKeys;
	NSArray* _engagementRecordKeys;
	NSArray* _conversionRecordKeys;

}

@property (nonatomic,readonly) NSArray * engagementRecordKeys;              //@synthesize engagementRecordKeys=_engagementRecordKeys - In the implementation block
@property (nonatomic,readonly) NSArray * conversionRecordKeys;              //@synthesize conversionRecordKeys=_conversionRecordKeys - In the implementation block
+(BOOL)useTaggedImages;
+(id)changeTagFromCKRecord:(id)arg1 ;
+(id)canaryRecordName;
+(id)identifierFromCKRecord:(id)arg1 ;
+(id)modificationDateFromCKRecord:(id)arg1 ;
+(BOOL)supportsDeletions;
-(unsigned long long)storeVersion;
-(id)experimentalizableKeys;
-(id)recordFromCKRecord:(id)arg1 base:(id)arg2 ;
-(id)initWithContentDatabase:(id)arg1 contentDirectory:(id)arg2 desiredArticleRecordFieldOptions:(unsigned long long)arg3 experimentalizableFieldsPostfix:(id)arg4 engagementCohortsExpField:(id)arg5 conversionCohortsExpField:(id)arg6 activeTreatmentID:(id)arg7 ;
-(unsigned long long)lowThresholdDataSizeLimit;
-(id)recordType;
-(id)storeFilename;
-(id)alwaysLocalizedKeys;
-(id)localizableExperimentalizableKeys;
-(id)saveArticleRecords:(id)arg1 ;
-(id)urlStringForThumbnailKey:(id)arg1 inRecord:(id)arg2 ;
-(NSArray *)engagementRecordKeys;
-(id)conversionDataFromCKRecord:(id)arg1 ;
-(id)recordIDPrefix;
-(id)engagementDataFromCKRecord:(id)arg1 ;
-(int)pbRecordType;
-(NSArray *)conversionRecordKeys;
-(id)localizableKeys;
-(id)initWithContentDatabase:(id)arg1 contentDirectory:(id)arg2 experimentalizableFieldsPostfix:(id)arg3 activeTreatmentID:(id)arg4 ;
-(unsigned long long)highThresholdDataSizeLimit;
-(id)saveFeedItemAndArticleRecords:(id)arg1 ;
-(id)nonLocalizableKeys;
@end

