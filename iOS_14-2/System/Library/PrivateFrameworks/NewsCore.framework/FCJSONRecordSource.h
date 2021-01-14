/*
* Generated on Thursday, January 14, 2021 at 2:21:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setSchema:(FCJSONRecordSourceSchema *)arg1 ;
-(FCJSONRecordSourceSchema *)schema;
-(unsigned long long)storeVersion;
-(id)recordFromCKRecord:(id)arg1 base:(id)arg2 ;
-(unsigned long long)lowThresholdDataSizeLimit;
-(id)recordType;
-(id)storeFilename;
-(NSISO8601DateFormatter *)dateFormatter;
-(id)alwaysLocalizedKeys;
-(id)keyValueRepresentationOfRecord:(id)arg1 ;
-(id)recordIDPrefix;
-(void)fetchRecordsWithIDs:(id)arg1 cachePolicy:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithSchema:(id)arg1 contentDatabase:(id)arg2 contentDirectory:(id)arg3 experimentationSuffix:(id)arg4 activeTreatmentID:(id)arg5 ;
-(void)fetchRecordsWithIDs:(id)arg1 completion:(/*^block*/id)arg2 ;
-(int)pbRecordType;
-(id)localizableKeys;
-(void)setDateFormatter:(NSISO8601DateFormatter *)arg1 ;
-(unsigned long long)highThresholdDataSizeLimit;
-(id)nonLocalizableKeys;
@end

