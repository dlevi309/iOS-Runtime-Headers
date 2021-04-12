/*
* Generated on Monday, March 1, 2021 at 2:36:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBStarkBannerSource.h>
#import <libobjc.A.dylib/SBAlertItemsControllerObserver.h>

@class NSString;

@interface SBStarkAlertItemBannerSource : SBStarkBannerSource <SBAlertItemsControllerObserver>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)alertItemsController:(id)arg1 willActivateAlertItem:(id)arg2 ;
-(void)alertItemsController:(id)arg1 didActivateAlertItem:(id)arg2 ;
-(void)alertItemsController:(id)arg1 didDeactivateAlertItem:(id)arg2 forReason:(int)arg3 ;
-(id)initWithConfiguration:(id)arg1 allowedTargetIdentifier:(void*)arg2 ;
@end

