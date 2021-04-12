/*
* Generated on Thursday, January 14, 2021 at 2:24:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CGRect)layoutFrameForArrangedSubview:(id)arg1 withProposedContentFrame:(CGRect)arg2 ;
-(NSMutableArray *)iconViews;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 ;
-(void)setEndsSpacingHelpers:(NSMutableArray *)arg1 ;
-(id)init;
-(NSMutableArray *)spacingHelpers;
-(void)setIconViews:(NSMutableArray *)arg1 ;
-(CGSize)contentLayoutSizeFittingSize:(CGSize)arg1 forArrangedSubview:(id)arg2 ;
-(id<SearchUIFeedbackDelegate>)delegate;
-(void)setArrangment:(NUIGridArrangement *)arg1 ;
-(NSMutableArray *)spacerDebuggerViews;
-(NSMutableArray *)endsSpacingHelpers;
-(long long)numberOfItemsInGridArrangement:(id)arg1 ;
-(void)updateWithResultsForRow:(id)arg1 ;
-(void)setDelegate:(id<SearchUIFeedbackDelegate>)arg1 ;
-(NUIGridArrangement *)arrangment;
-(void)layoutSubviews;
-(void)didEngageResult:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setSpacerDebuggerViews:(NSMutableArray *)arg1 ;
-(void)setItemAtIndex:(NSMutableArray *)arg1 ;
-(void)setSpacingHelpers:(NSMutableArray *)arg1 ;
-(id)gridArrangement:(id)arg1 itemAtIndex:(long long)arg2 columns:(NSRange*)arg3 rows:(NSRange*)arg4 horizontalAlignment:(long long*)arg5 verticalAlignment:(long long*)arg6 ;
-(NSMutableArray *)itemAtIndex;
-(void)didEngageResult:(id)arg1 withTriggerEvent:(unsigned long long)arg2 destination:(unsigned long long)arg3 ;
@end

