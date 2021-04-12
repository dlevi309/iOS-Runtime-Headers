/*
* Generated on Thursday, January 14, 2021 at 2:24:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/

#import <SearchUI/SearchUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/NUIArrangementContainer.h>
#import <libobjc.A.dylib/NUIGridArrangementDataSource.h>

@protocol SearchUIFeedbackDelegate;
@class SearchUICombinedCardSectionRowModel, NUIGridArrangement, NSMutableDictionary, NSMutableArray, NSString;

@interface SearchUICombinedCardSectionsView : UIView <NUIArrangementContainer, NUIGridArrangementDataSource> {

	BOOL _hasAttributionFooter;
	SearchUICombinedCardSectionRowModel* _rowModel;
	id<SearchUIFeedbackDelegate> _feedbackDelegate;
	NUIGridArrangement* _arrangement;
	NSMutableDictionary* _cardSectionsMapping;
	NSMutableArray* _uncacheableViews;
	NSMutableArray* _viewList;

}

@property (nonatomic,retain) NUIGridArrangement * arrangement;                                  //@synthesize arrangement=_arrangement - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * cardSectionsMapping;                         //@synthesize cardSectionsMapping=_cardSectionsMapping - In the implementation block
@property (nonatomic,retain) NSMutableArray * uncacheableViews;                                 //@synthesize uncacheableViews=_uncacheableViews - In the implementation block
@property (nonatomic,retain) NSMutableArray * viewList;                                         //@synthesize viewList=_viewList - In the implementation block
@property (assign) BOOL hasAttributionFooter;                                                   //@synthesize hasAttributionFooter=_hasAttributionFooter - In the implementation block
@property (nonatomic,retain) SearchUICombinedCardSectionRowModel * rowModel;                    //@synthesize rowModel=_rowModel - In the implementation block
@property (assign,nonatomic,__weak) id<SearchUIFeedbackDelegate> feedbackDelegate;              //@synthesize feedbackDelegate=_feedbackDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGRect)layoutFrameForArrangedSubview:(id)arg1 withProposedContentFrame:(CGRect)arg2 ;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)init;
-(CGSize)contentLayoutSizeFittingSize:(CGSize)arg1 forArrangedSubview:(id)arg2 ;
-(SearchUICombinedCardSectionRowModel *)rowModel;
-(void)setArrangement:(NUIGridArrangement *)arg1 ;
-(void)setCardSectionsMapping:(NSMutableDictionary *)arg1 ;
-(void)setUncacheableViews:(NSMutableArray *)arg1 ;
-(void)resetStateOfViews;
-(void)setHasAttributionFooter:(BOOL)arg1 ;
-(NSMutableDictionary *)cardSectionsMapping;
-(NSMutableArray *)uncacheableViews;
-(NUIGridArrangement *)arrangement;
-(BOOL)hasAttributionFooter;
-(long long)numberOfItemsInGridArrangement:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setRowModel:(SearchUICombinedCardSectionRowModel *)arg1 ;
-(void)setFeedbackDelegate:(id<SearchUIFeedbackDelegate>)arg1 ;
-(id)visibleViewList;
-(NSMutableArray *)viewList;
-(id)initWithRowModel:(id)arg1 feedbackDelegate:(id)arg2 ;
-(id<SearchUIFeedbackDelegate>)feedbackDelegate;
-(id)gridArrangement:(id)arg1 itemAtIndex:(long long)arg2 columns:(NSRange*)arg3 rows:(NSRange*)arg4 horizontalAlignment:(long long*)arg5 verticalAlignment:(long long*)arg6 ;
-(void)setViewList:(NSMutableArray *)arg1 ;
@end

