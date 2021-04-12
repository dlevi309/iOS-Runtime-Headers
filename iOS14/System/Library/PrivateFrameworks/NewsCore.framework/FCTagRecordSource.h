/*
* Generated on Thursday, January 14, 2021 at 2:21:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCRecordSource.h>

@class NSArray;

@interface FCTagRecordSource : FCRecordSource {

	NSArray* _nonLocalizableKeys;
	unsigned long long _desiredFieldOptions;

}

@property (assign,nonatomic) unsigned long long desiredFieldOptions;              //@synthesize desiredFieldOptions=_desiredFieldOptions - In the implementation block
+(id)defaultCachePolicy;
-(unsigned long long)storeVersion;
-(id)experimentalizableKeys;
-(id)recordFromCKRecord:(id)arg1 base:(id)arg2 ;
-(unsigned long long)lowThresholdDataSizeLimit;
-(id)recordType;
-(id)storeFilename;
-(id)alwaysLocalizedKeys;
-(id)initWithContentDatabase:(id)arg1 contentDirectory:(id)arg2 desiredTagRecordFieldOptions:(unsigned long long)arg3 ;
-(unsigned long long)desiredFieldOptions;
-(id)recordIDPrefix;
-(int)pbRecordType;
-(void)setDesiredFieldOptions:(unsigned long long)arg1 ;
-(id)localizableKeys;
-(id)initWithContentDatabase:(id)arg1 contentDirectory:(id)arg2 experimentalizableFieldsPostfix:(id)arg3 activeTreatmentID:(id)arg4 ;
-(id)localizableLanguageSpecificKeys;
-(id)saveTagRecords:(id)arg1 ;
-(unsigned long long)highThresholdDataSizeLimit;
-(id)nonLocalizableKeys;
@end

