/*
* Generated on Thursday, January 14, 2021 at 2:24:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/

#import <SearchUI/SearchUI-Structs.h>
#import <AppSupportUI/NUIContainerStackView.h>
#import <libobjc.A.dylib/NUIContainerViewDelegate.h>

@protocol SearchUIFeedbackDelegate;
@class UIView, SearchUICardSectionRowModel, UIViewController, SFCardSection, NSString;

@interface SearchUICardSectionView : NUIContainerStackView <NUIContainerViewDelegate> {

	BOOL _isCompactWidth;
	UIView* _contentView;
	SearchUICardSectionRowModel* _rowModel;
	UIViewController* _embeddedViewController;
	id<SearchUIFeedbackDelegate> _feedbackDelegate;
	UIView* _leadingView;
	UIView* _leadingTextView;
	UIView* _chevronView;

}

@property (nonatomic,retain) SearchUICardSectionRowModel * rowModel;                            //@synthesize rowModel=_rowModel - In the implementation block
@property (nonatomic,retain) UIView * contentView;                                              //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) UIView * chevronView;                                              //@synthesize chevronView=_chevronView - In the implementation block
@property (assign) BOOL isCompactWidth;                                                         //@synthesize isCompactWidth=_isCompactWidth - In the implementation block
@property (nonatomic,readonly) SFCardSection * section; 
@property (readonly) UIViewController * embeddedViewController;                                 //@synthesize embeddedViewController=_embeddedViewController - In the implementation block
@property (assign,nonatomic,__weak) id<SearchUIFeedbackDelegate> feedbackDelegate;              //@synthesize feedbackDelegate=_feedbackDelegate - In the implementation block
@property (nonatomic,readonly) UIView * leadingView;                                            //@synthesize leadingView=_leadingView - In the implementation block
@property (nonatomic,readonly) UIView * leadingTextView;                                        //@synthesize leadingTextView=_leadingTextView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(UIEdgeInsets)separatorInsetsForStyle:(int)arg1 cellView:(id)arg2 leadingView:(id)arg3 leadingTextView:(id)arg4 ;
+(BOOL)supportsRecyclingForCardSection:(id)arg1 ;
+(id)dragTitleForCardSection:(id)arg1 ;
+(int)defaultSeparatorStyleForCardSection:(id)arg1 ;
+(BOOL)fillsBackgroundWithContentForCardSection:(id)arg1 ;
+(Class)layerClass;
+(id)dragSubtitleForCardSection:(id)arg1 ;
+(BOOL)hasLeadingImageForCardSection:(id)arg1 ;
+(BOOL)supportsCustomUserReportRequestAfforance;
+(BOOL)prefersNoSeparatorAboveCardSection:(id)arg1 ;
-(void)updateWithRowModel:(id)arg1 ;
-(void)setIsCompactWidth:(BOOL)arg1 ;
-(void)presentViewController:(id)arg1 ;
-(void)_dynamicUserInterfaceTraitDidChange;
-(SearchUICardSectionRowModel *)rowModel;
-(SFCardSection *)section;
-(void)tlk_updateForAppearance:(id)arg1 ;
-(void)tabKeyPressed;
-(UIView *)chevronView;
-(void)setChevronView:(UIView *)arg1 ;
-(NSString *)description;
-(void)containerView:(id)arg1 willMeasureArrangedSubviewsFittingSize:(CGSize)arg2 forReason:(long long)arg3 ;
-(void)didMoveToWindow;
-(UIView *)leadingView;
-(void)setRowModel:(SearchUICardSectionRowModel *)arg1 ;
-(void)setContentView:(UIView *)arg1 ;
-(void)setFeedbackDelegate:(id<SearchUIFeedbackDelegate>)arg1 ;
-(void)didInvalidateSizeAnimate:(BOOL)arg1 ;
-(void)requestRemovalFromEnclosingView;
-(id)initWithRowModel:(id)arg1 feedbackDelegate:(id)arg2 ;
-(UIViewController *)embeddedViewController;
-(void)updateChevronVisible:(BOOL)arg1 leaveSpaceForChevron:(BOOL)arg2 ;
-(id<SearchUIFeedbackDelegate>)feedbackDelegate;
-(id)sendFeedbackForPunchout:(id)arg1 triggerEvent:(unsigned long long)arg2 ;
-(id)setupContentView;
-(UIView *)contentView;
-(BOOL)isCompactWidth;
-(UIView *)leadingTextView;
-(void)openPunchout:(id)arg1 triggerEvent:(unsigned long long)arg2 ;
-(void)presentUserReportRequestViewController;
@end

