/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/

#import <AppSupportUI/NUIContainerStackView.h>

@protocol SearchUIFeedbackDelegate;
@class UIView, SearchUICardSectionRowModel, UIViewController, SFCardSection;

@interface SearchUICardSectionView : NUIContainerStackView {

	UIView* _contentView;
	SearchUICardSectionRowModel* _rowModel;
	UIViewController* _embeddedViewController;
	id<SearchUIFeedbackDelegate> _feedbackDelegate;
	UIView* _chevronView;

}

@property (nonatomic,retain) SearchUICardSectionRowModel * rowModel;                            //@synthesize rowModel=_rowModel - In the implementation block
@property (nonatomic,retain) UIView * contentView;                                              //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) UIView * chevronView;                                              //@synthesize chevronView=_chevronView - In the implementation block
@property (nonatomic,readonly) SFCardSection * section; 
@property (readonly) UIViewController * embeddedViewController;                                 //@synthesize embeddedViewController=_embeddedViewController - In the implementation block
@property (assign,nonatomic,__weak) id<SearchUIFeedbackDelegate> feedbackDelegate;              //@synthesize feedbackDelegate=_feedbackDelegate - In the implementation block
+(Class)layerClass;
+(BOOL)supportsRecyclingForCardSection:(id)arg1 ;
+(id)dragTitleForCardSection:(id)arg1 ;
+(int)separatorStyleForCardSection:(id)arg1 ;
+(id)dragSubtitleForCardSection:(id)arg1 ;
+(double)separatorInsetForLeadingImageForSection:(id)arg1 ;
-(id)description;
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(SFCardSection *)section;
-(void)didMoveToWindow;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)presentViewController:(id)arg1 ;
-(UIView *)chevronView;
-(void)setChevronView:(UIView *)arg1 ;
-(UIViewController *)embeddedViewController;
-(id)setupContentView;
-(void)tlk_updateForAppearance:(id)arg1 ;
-(id)initWithRowModel:(id)arg1 feedbackDelegate:(id)arg2 ;
-(void)updateChevronVisible:(BOOL)arg1 leaveSpaceForChevron:(BOOL)arg2 ;
-(id<SearchUIFeedbackDelegate>)feedbackDelegate;
-(id)sendFeedbackForPunchout:(id)arg1 triggerEvent:(unsigned long long)arg2 ;
-(SearchUICardSectionRowModel *)rowModel;
-(void)updateWithRowModel:(id)arg1 ;
-(void)setRowModel:(SearchUICardSectionRowModel *)arg1 ;
-(void)setFeedbackDelegate:(id<SearchUIFeedbackDelegate>)arg1 ;
-(void)requestRemovalFromEnclosingView;
-(void)didInvalidateSizeAnimate:(BOOL)arg1 ;
-(void)openPunchout:(id)arg1 triggerEvent:(unsigned long long)arg2 ;
@end

