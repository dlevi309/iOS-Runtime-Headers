/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCRecordSource.h>
#import <libobjc.A.dylib/FCJSONRecordSourceType.h>

@class FCJSONRecordSourceSchema, NSISO8601DateFormatter;

@interface FCJSONRecordSource : FCRecordSource <FCJSONRecordSourceType> {

	FCJSONRecordSourceSchema* _schema;
	NSISO8601DateFormatter* _dateFormatter;

}

@property (nonatomic,copy) FCJSONRecordSourceSchema * schema;                   //@synthesize schema=_schema - In the implementation block
@property (nonatomic,copy) NSISO8601DateFormatter * dateFormatter;              //@synthesize dateFormatter=_dateFormatter - In the implementation block
-(FCJSONRecordSourceSchema *)schema;
-(NSISO8601DateFormatter *)dateFormatter;
-(void)setDateFormatter:(NSISO8601DateFormatter *)arg1 ;
-(id)recordType;
-(id)storeFilename;
-(void)setSchema:(FCJSONRecordSourceSchema *)arg1 ;
-(int)pbRecordType;
-(id)nonLocalizableKeys;
-(id)localizableKeys;
-(id)alwaysLocalizedKeys;
-(unsigned long long)storeVersion;
-(unsigned long long)lowThresholdDataSizeLimit;
-(unsigned long long)highThresholdDataSizeLimit;
-(id)recordIDPrefix;
-(id)recordFromCKRecord:(id)arg1 base:(id)arg2 ;
-(id)keyValueRepresentationOfRecord:(id)arg1 ;
-(void)fetchRecordsWithIDs:(id)arg1 cachePolicy:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithSchema:(id)arg1 contentDatabase:(id)arg2 contentDirectory:(id)arg3 experimentationSuffix:(id)arg4 activeTreatmentID:(id)arg5 ;
-(void)fetchRecordsWithIDs:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

