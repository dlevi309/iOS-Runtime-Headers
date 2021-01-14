/*
* Generated on Thursday, January 14, 2021 at 2:26:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/


@class NSMapTable;

@interface CKDPowerAssertionObserver : NSObject {

	NSMapTable* _operationsHoldingPowerAssertionsByID;

}

@property (nonatomic,retain) NSMapTable * operationsHoldingPowerAssertionsByID;              //@synthesize operationsHoldingPowerAssertionsByID=_operationsHoldingPowerAssertionsByID - In the implementation block
+(id)sharedObserver;
-(id)init;
-(void)setOperationsHoldingPowerAssertionsByID:(NSMapTable *)arg1 ;
-(id)_init;
-(void)operationDidReleasePowerAssertion:(id)arg1 ;
-(NSMapTable *)operationsHoldingPowerAssertionsByID;
-(id)CKStatusReportArray;
-(void)operationDidAcquirePowerAssertion:(id)arg1 ;
@end

