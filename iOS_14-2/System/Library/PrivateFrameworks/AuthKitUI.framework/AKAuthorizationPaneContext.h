/*
* Generated on Thursday, January 14, 2021 at 2:27:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(AKAuthorizationPaneViewController *)paneViewController;
-(void)addEmptyViewWithSpacing:(double)arg1 ;
-(void)addSubPane:(id)arg1 ;
-(NSMutableArray *)internalMutableConstraints;
-(id)initWithPaneViewController:(id)arg1 stackView:(id)arg2 mutableConstraints:(id)arg3 ;
-(void)setInternalMutableConstraints:(NSMutableArray *)arg1 ;
@end

