/*
* Generated on Monday, March 1, 2021 at 2:33:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/


@class NSMapTable;

@interface CKDPowerAssertionObserver : NSObject {

	NSMapTable* _operationsHoldingPowerAssertionsByID;

}

@property (nonatomic,retain) NSMapTable * operationsHoldingPowerAssertionsByID;              //@synthesize operationsHoldingPowerAssertionsByID=_operationsHoldingPowerAssertionsByID - In the implementation block
+(id)sharedObserver;
-(id)init;
-(id)_init;
-(id)CKStatusReportArray;
-(void)operationDidReleasePowerAssertion:(id)arg1 ;
-(void)operationDidAcquirePowerAssertion:(id)arg1 ;
-(NSMapTable *)operationsHoldingPowerAssertionsByID;
-(void)setOperationsHoldingPowerAssertionsByID:(NSMapTable *)arg1 ;
@end

