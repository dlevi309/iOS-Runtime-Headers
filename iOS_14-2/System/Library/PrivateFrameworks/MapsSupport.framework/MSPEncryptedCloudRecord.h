/*
* Generated on Thursday, January 14, 2021 at 2:24:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

#import <libobjc.A.dylib/MSPCloudRecord.h>

@class NSString, NSDate, CKRecord;

@interface MSPEncryptedCloudRecord : NSObject <MSPCloudRecord> {

	BOOL _compressNewData;
	CKRecord* _record;

}

@property (nonatomic,readonly) CKRecord * record;                                 //@synthesize record=_record - In the implementation block
@property (nonatomic,readonly) NSString * cloudRecordName; 
@property (nonatomic,readonly) NSDate * cloudRecordModificationDate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)arrayOfCKRecordsFromArray:(id)arg1 ;
+(id)arrayOfEncryptedRecordsFromArray:(id)arg1 ;
-(CKRecord *)record;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(NSString *)description;
-(id)initWithCKRecord:(id)arg1 isNewlyCreatedRecord:(BOOL)arg2 ;
-(NSString *)cloudRecordName;
-(NSDate *)cloudRecordModificationDate;
@end

