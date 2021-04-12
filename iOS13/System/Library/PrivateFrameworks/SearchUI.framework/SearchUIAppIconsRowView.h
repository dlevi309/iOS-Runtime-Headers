/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/

#import <SearchUI/SearchUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <SearchUI/SearchUIHomeScreenEngagementDelegate.h>
#import <libobjc.A.dylib/NUIGridArrangementDataSource.h>
#import <libobjc.A.dylib/NUIArrangementContainer.h>

@protocol SearchUIFeedbackDelegate;
@class NSMutableArray, NUIGridArrangement, NSString;

@interface SearchUIAppIconsRowView : UIView <SearchUIHomeScreenEngagementDelegate, NUIGridArrangementDataSource, NUIArrangementContainer> {

	id<SearchUIFeedbackDelegate> _delegate;
	NSMutableArray* _iconViews;
	NSMutableArray* _spacingHelpers;
	NSMutableArray* _endsSpacingHelpers;
	NSMutableArray* _itemAtIndex;
	NSMutableArray* _spacerDebuggerViews;
	NUIGridArrangement* _arrangment;

}

@property (nonatomic,retain) NSMutableArray * itemAtIndex;                      //@synthesize itemAtIndex=_itemAtIndex - In the implementation block
@property (nonatomic,retain) NSMutableArray * spacerDebuggerViews;              //@synthesize spacerDebuggerViews=_spacerDebuggerViews - In the implementation block
@property (nonatomic,retain) NUIGridArrangement * arrangment;                   //@synthesize arrangment=_arrangment - In the implementation block
@property (__weak) id<SearchUIFeedbackDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSMutableArray * iconViews;                        //@synthesize iconViews=_iconViews - In the implementation block
@property (nonatomic,retain) NSMutableArray * spacingHelpers;                   //@synthesize spacingHelpers=_spacingHelpers - In the implementation block
@property (nonatomic,retain) NSMutableArray * endsSpacingHelpers;               //@synthesize endsSpacingHelpers=_endsSpacingHelpers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)numberOfIcons;
-(id)init;
-(id<SearchUIFeedbackDelegate>)delegate;
-(void)setDelegate:(id<SearchUIFeedbackDelegate>)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 ;
-(void)didEngageResult:(id)arg1 ;
-(CGSize)contentLayoutSizeFittingSize:(CGSize)arg1 forArrangedSubview:(id)arg2 ;
-(CGRect)layoutFrameForArrangedSubview:(id)arg1 withProposedContentFrame:(CGRect)arg2 ;
-(long long)numberOfItemsInGridArrangement:(id)arg1 ;
-(id)gridArrangement:(id)arg1 itemAtIndex:(long long)arg2 columns:(NSRange*)arg3 rows:(NSRange*)arg4 horizontalAlignment:(long long*)arg5 verticalAlignment:(long long*)arg6 ;
-(void)dismissIfNecessaryForIconDrag;
-(void)setArrangment:(NUIGridArrangement *)arg1 ;
-(NUIGridArrangement *)arrangment;
-(void)setSpacingHelpers:(NSMutableArray *)arg1 ;
-(void)setIconViews:(NSMutableArray *)arg1 ;
-(void)setItemAtIndex:(NSMutableArray *)arg1 ;
-(NSMutableArray *)iconViews;
-(NSMutableArray *)spacingHelpers;
-(NSMutableArray *)itemAtIndex;
-(void)setEndsSpacingHelpers:(NSMutableArray *)arg1 ;
-(NSMutableArray *)endsSpacingHelpers;
-(void)updateWithResultsForRow:(id)arg1 ;
-(NSMutableArray *)spacerDebuggerViews;
-(void)setSpacerDebuggerViews:(NSMutableArray *)arg1 ;
@end

