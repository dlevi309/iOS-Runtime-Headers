/*
* Generated on Thursday, January 14, 2021 at 2:21:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CKDatabaseOperation.h>
#import <libobjc.A.dylib/CKRepairZonePCSOperationCallbacks.h>

@class NSArray, CKRepairZonePCSOperationInfo;

@interface CKRepairZonePCSOperation : CKDatabaseOperation <CKRepairZonePCSOperationCallbacks> {

	/*^block*/id _zoneRepairedBlock;
	NSArray* _zoneIDs;

}

@property (nonatomic,readonly) id<CKRepairZonePCSOperationCallbacks> clientOperationCallbackProxy; 
@property (nonatomic,readonly) CKRepairZonePCSOperationInfo * operationInfo; 
@property (nonatomic,retain) NSArray * zoneIDs;                                                                 //@synthesize zoneIDs=_zoneIDs - In the implementation block
@property (nonatomic,copy) id zoneRepairedBlock;                                                                //@synthesize zoneRepairedBlock=_zoneRepairedBlock - In the implementation block
+(void)applyDaemonCallbackInterfaceTweaks:(id)arg1 ;
-(void)fillFromOperationInfo:(id)arg1 ;
-(BOOL)hasCKOperationCallbacksSet;
-(id)activityCreate;
-(NSArray *)zoneIDs;
-(void)performCKOperation;
-(void)fillOutOperationInfo:(id)arg1 ;
-(void)setZoneIDs:(NSArray *)arg1 ;
-(id)zoneRepairedBlock;
-(id)initWithZoneIDsToRepair:(id)arg1 ;
-(void)handleZonePCSRepairForID:(id)arg1 pcsInfo:(id)arg2 error:(id)arg3 ;
-(void)setZoneRepairedBlock:(id)arg1 ;
@end

