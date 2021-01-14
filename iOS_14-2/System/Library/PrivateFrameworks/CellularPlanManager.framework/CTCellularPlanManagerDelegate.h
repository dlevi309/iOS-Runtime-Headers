/*
* Generated on Thursday, January 14, 2021 at 2:27:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CellularPlanManager.framework/CellularPlanManager
*/

#import <libobjc.A.dylib/CTCellularPlanClientDelegate.h>

@class NSString;

@interface CTCellularPlanManagerDelegate : NSObject <CTCellularPlanClientDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)remoteProvisioningDidBecomeAvailable;
-(void)pendingTransferPlanInfoDidUpdate;
-(void)localPlanInfoDidUpdate:(id)arg1 ;
-(void)planInfoDidUpdate;
-(void)carrierInfoDidUpdate;
@end

