/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCRecordSource.h>

@class NSArray;

@interface FCArticleRecordSource : FCRecordSource {

	NSArray* _nonLocalizableKeys;
	NSArray* _localizableKeys;
	NSArray* _alwaysLocalizedKeys;

}
+(id)identifierFromCKRecord:(id)arg1 ;
+(BOOL)supportsDeletions;
+(id)canaryRecordName;
+(id)changeTagFromCKRecord:(id)arg1 ;
+(id)modificationDateFromCKRecord:(id)arg1 ;
+(BOOL)useTaggedImages;
-(id)recordType;
-(id)storeFilename;
-(int)pbRecordType;
-(id)nonLocalizableKeys;
-(id)localizableKeys;
-(id)alwaysLocalizedKeys;
-(unsigned long long)storeVersion;
-(unsigned long long)lowThresholdDataSizeLimit;
-(unsigned long long)highThresholdDataSizeLimit;
-(id)recordIDPrefix;
-(id)recordFromCKRecord:(id)arg1 base:(id)arg2 ;
-(id)initWithContentDatabase:(id)arg1 contentDirectory:(id)arg2 experimentalizableFieldsPostfix:(id)arg3 activeTreatmentID:(id)arg4 ;
-(id)experimentalizableKeys;
-(id)localizableExperimentalizableKeys;
-(id)urlStringForThumbnailKey:(id)arg1 inRecord:(id)arg2 ;
-(id)saveArticleRecords:(id)arg1 ;
-(id)initWithContentDatabase:(id)arg1 contentDirectory:(id)arg2 desiredArticleRecordFieldOptions:(unsigned long long)arg3 experimentalizableFieldsPostfix:(id)arg4 activeTreatmentID:(id)arg5 ;
-(id)saveFeedItemAndArticleRecords:(id)arg1 ;
@end

