/*
* Generated on Thursday, January 14, 2021 at 2:27:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BridgePreferences.framework/BridgePreferences
*/

#import <libobjc.A.dylib/BPSBuddyController.h>

@protocol BPSBuddyControllerDelegate;
@class NSString;

@interface BPSSetupMiniFlowController : NSObject <BPSBuddyController> {

	BOOL _isDisplayingInSkippedMiniFlow;
	id<BPSBuddyControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<BPSBuddyControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL isDisplayingInSkippedMiniFlow;                          //@synthesize isDisplayingInSkippedMiniFlow=_isDisplayingInSkippedMiniFlow - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<BPSBuddyControllerDelegate>)delegate;
-(void)setDelegate:(id<BPSBuddyControllerDelegate>)arg1 ;
-(id)viewController;
-(id)navigationController;
-(BOOL)isDisplayingInSkippedMiniFlow;
-(void)setIsDisplayingInSkippedMiniFlow:(BOOL)arg1 ;
-(void)pushController:(id)arg1 animated:(BOOL)arg2 ;
@end

