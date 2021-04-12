/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)localizableLanguageSpecificKeys;
-(unsigned long long)desiredFieldOptions;
-(id)initWithContentDatabase:(id)arg1 contentDirectory:(id)arg2 desiredTagRecordFieldOptions:(unsigned long long)arg3 ;
-(id)saveTagRecords:(id)arg1 ;
-(void)setDesiredFieldOptions:(unsigned long long)arg1 ;
@end

