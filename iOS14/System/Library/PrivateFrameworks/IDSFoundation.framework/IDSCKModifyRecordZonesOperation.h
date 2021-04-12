/*
* Generated on Thursday, January 14, 2021 at 2:21:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/

#import <IDSFoundation/IDSCKDatabaseOperation.h>

@class NSArray;

@interface IDSCKModifyRecordZonesOperation : IDSCKDatabaseOperation {

	NSArray* _recordZonesToSave;
	NSArray* _recordZoneIDsToDelete;
	/*^block*/id _modifyRecordZonesCompletionBlock;
	long long _qualityOfService;

}

@property (nonatomic,copy) NSArray * recordZonesToSave;                      //@synthesize recordZonesToSave=_recordZonesToSave - In the implementation block
@property (nonatomic,copy) NSArray * recordZoneIDsToDelete;                  //@synthesize recordZoneIDsToDelete=_recordZoneIDsToDelete - In the implementation block
@property (nonatomic,copy) id modifyRecordZonesCompletionBlock;              //@synthesize modifyRecordZonesCompletionBlock=_modifyRecordZonesCompletionBlock - In the implementation block
@property (assign) long long qualityOfService;                               //@synthesize qualityOfService=_qualityOfService - In the implementation block
+(id)alloc;
+(Class)__class;
-(NSArray *)recordZoneIDsToDelete;
-(void)setRecordZoneIDsToDelete:(NSArray *)arg1 ;
-(void)setRecordZonesToSave:(NSArray *)arg1 ;
-(void)setQualityOfService:(long long)arg1 ;
-(void)setModifyRecordZonesCompletionBlock:(id)arg1 ;
-(NSArray *)recordZonesToSave;
-(id)modifyRecordZonesCompletionBlock;
-(long long)qualityOfService;
@end

