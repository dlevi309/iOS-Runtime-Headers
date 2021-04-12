/*
* Generated on Thursday, January 14, 2021 at 2:28:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
*/

#import <OnBoardingKit/OBSetupAssistantSpinnerController.h>
#import <libobjc.A.dylib/BFFFlowItem.h>

@protocol BFFFlowItemDelegate;
@class NSString;

@interface BFFSpinnerController : OBSetupAssistantSpinnerController <BFFFlowItem> {

	id<BFFFlowItemDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<BFFFlowItemDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)cloudConfigSkipKey;
-(id<BFFFlowItemDelegate>)delegate;
-(BOOL)isEphemeral;
-(void)setDelegate:(id<BFFFlowItemDelegate>)arg1 ;
-(BOOL)shouldSuppressExtendedInitializationActivityIndicator;
-(BOOL)shouldAllowStartOver;
@end

