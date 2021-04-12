/*
* Generated on Thursday, January 14, 2021 at 2:27:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CellularPlanManager.framework/CellularPlanManager
*/


@protocol CTCellularPlanClientDelegate <NSObject>
@required
-(void)remoteProvisioningDidBecomeAvailable;
-(void)pendingTransferPlanInfoDidUpdate;
-(void)localPlanInfoDidUpdate:(id)arg1;
-(void)planInfoDidUpdate;
-(void)carrierInfoDidUpdate;

@end

