/*
* Generated on Monday, March 1, 2021 at 2:32:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
*/

#import <OnBoardingKit/OBSplashController.h>
#import <libobjc.A.dylib/BFFFlowItem.h>

@protocol BFFFlowItemDelegate;
@class NSArray, NSString;

@interface BuddyChoiceController : OBSplashController <BFFFlowItem> {

	id<BFFFlowItemDelegate> _delegate;
	NSArray* _choices;

}

@property (assign,nonatomic,__weak) id<BFFFlowItemDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSArray * choices;                                      //@synthesize choices=_choices - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)cloudConfigSkipKey;
-(id<BFFFlowItemDelegate>)delegate;
-(void)setDelegate:(id<BFFFlowItemDelegate>)arg1 ;
-(NSArray *)choices;
-(void)setChoices:(NSArray *)arg1 ;
-(void)_tappedChoice:(id)arg1 ;
-(void)didSelectChoice:(id)arg1 ;
@end

