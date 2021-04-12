/*
* Generated on Monday, March 1, 2021 at 2:32:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

#import <libobjc.A.dylib/MSPCloudRecord.h>

@class NSString, NSDate, CKRecord;

@interface MSPEncryptedCloudRecord : NSObject <MSPCloudRecord> {

	BOOL _compressNewData;
	CKRecord* _record;

}

@property (nonatomic,readonly) CKRecord * record;                                 //@synthesize record=_record - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * cloudRecordName; 
@property (nonatomic,readonly) NSDate * cloudRecordModificationDate; 
+(id)arrayOfCKRecordsFromArray:(id)arg1 ;
+(id)arrayOfEncryptedRecordsFromArray:(id)arg1 ;
-(NSString *)description;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(CKRecord *)record;
-(id)initWithCKRecord:(id)arg1 isNewlyCreatedRecord:(BOOL)arg2 ;
-(NSString *)cloudRecordName;
-(NSDate *)cloudRecordModificationDate;
@end

