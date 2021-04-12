/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
*/


@class AKAuthorizationPaneViewController, UIStackView, NSMutableArray;

@interface AKAuthorizationPaneContext : NSObject {

	AKAuthorizationPaneViewController* _paneViewController;
	UIStackView* _stackView;
	NSMutableArray* _internalMutableConstraints;

}

@property (nonatomic,retain) NSMutableArray * internalMutableConstraints;                           //@synthesize internalMutableConstraints=_internalMutableConstraints - In the implementation block
@property (nonatomic,readonly) AKAuthorizationPaneViewController * paneViewController;              //@synthesize paneViewController=_paneViewController - In the implementation block
@property (nonatomic,readonly) UIStackView * stackView;                                             //@synthesize stackView=_stackView - In the implementation block
@property (nonatomic,readonly) NSMutableArray * mutableConstraints; 
-(UIStackView *)stackView;
-(id)initWithPaneViewController:(id)arg1 stackView:(id)arg2 ;
-(NSMutableArray *)mutableConstraints;
-(void)addSubPane:(id)arg1 ;
-(AKAuthorizationPaneViewController *)paneViewController;
-(NSMutableArray *)internalMutableConstraints;
-(id)initWithPaneViewController:(id)arg1 stackView:(id)arg2 mutableConstraints:(id)arg3 ;
-(void)setInternalMutableConstraints:(NSMutableArray *)arg1 ;
@end

