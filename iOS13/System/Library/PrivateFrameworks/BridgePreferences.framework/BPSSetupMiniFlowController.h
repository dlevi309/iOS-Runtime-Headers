/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BridgePreferences.framework/BridgePreferences
*/

#import <libobjc.A.dylib/BPSBuddyController.h>

@protocol BPSBuddyControllerDelegate;
@class NSString;

@interface BPSSetupMiniFlowController : NSObject <BPSBuddyController> {

	id<BPSBuddyControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<BPSBuddyControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<BPSBuddyControllerDelegate>)delegate;
-(void)setDelegate:(id<BPSBuddyControllerDelegate>)arg1 ;
-(id)viewController;
-(id)navigationController;
-(void)pushController:(id)arg1 animated:(BOOL)arg2 ;
@end

