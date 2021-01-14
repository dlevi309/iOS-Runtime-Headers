/*
* Generated on Thursday, January 14, 2021 at 2:24:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/

#import <SearchUI/SearchUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol SearchUIFeedbackDelegate, SearchUIResultsViewDelegate, SearchUIShowMoreSectionsDelegate;
@class NSString, UIViewController, UIView;

@interface SearchUICommandEnvironment : NSObject <NSCopying> {

	BOOL _shouldUseInsetRoundedSections;
	BOOL _shouldUseStandardSectionInsets;
	BOOL _threeDTouchEnabled;
	BOOL _isPop;
	id<SearchUIFeedbackDelegate> _feedbackDelegate;
	id<SearchUIResultsViewDelegate> _resultsViewDelegate;
	id<SearchUIShowMoreSectionsDelegate> _showMoreSectionsDelegate;
	long long _selectableGridPunchoutIndex;
	NSString* _searchString;
	NSString* _sectionTitle;
	UIViewController* _presentingViewController;
	UIView* _sourceView;

}

@property (assign,nonatomic,__weak) id<SearchUIFeedbackDelegate> feedbackDelegate;                              //@synthesize feedbackDelegate=_feedbackDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<SearchUIResultsViewDelegate> resultsViewDelegate;                        //@synthesize resultsViewDelegate=_resultsViewDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<SearchUIShowMoreSectionsDelegate> showMoreSectionsDelegate;              //@synthesize showMoreSectionsDelegate=_showMoreSectionsDelegate - In the implementation block
@property (assign,nonatomic) BOOL shouldUseInsetRoundedSections;                                                //@synthesize shouldUseInsetRoundedSections=_shouldUseInsetRoundedSections - In the implementation block
@property (assign,nonatomic) BOOL shouldUseStandardSectionInsets;                                               //@synthesize shouldUseStandardSectionInsets=_shouldUseStandardSectionInsets - In the implementation block
@property (assign,nonatomic) BOOL threeDTouchEnabled;                                                           //@synthesize threeDTouchEnabled=_threeDTouchEnabled - In the implementation block
@property (assign,nonatomic) BOOL isPop;                                                                        //@synthesize isPop=_isPop - In the implementation block
@property (assign,nonatomic) long long selectableGridPunchoutIndex;                                             //@synthesize selectableGridPunchoutIndex=_selectableGridPunchoutIndex - In the implementation block
@property (nonatomic,copy) NSString * searchString;                                                             //@synthesize searchString=_searchString - In the implementation block
@property (nonatomic,copy) NSString * sectionTitle;                                                             //@synthesize sectionTitle=_sectionTitle - In the implementation block
@property (nonatomic,retain) UIViewController * presentingViewController;                                       //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (nonatomic,retain) UIView * sourceView;                                                               //@synthesize sourceView=_sourceView - In the implementation block
-(void)setThreeDTouchEnabled:(BOOL)arg1 ;
-(id)init;
-(NSString *)sectionTitle;
-(void)setSectionTitle:(NSString *)arg1 ;
-(BOOL)isPop;
-(void)setSourceView:(UIView *)arg1 ;
-(UIView *)sourceView;
-(UIViewController *)presentingViewController;
-(void)setResultsViewDelegate:(id<SearchUIResultsViewDelegate>)arg1 ;
-(void)setPresentingViewController:(UIViewController *)arg1 ;
-(void)setShowMoreSectionsDelegate:(id<SearchUIShowMoreSectionsDelegate>)arg1 ;
-(long long)selectableGridPunchoutIndex;
-(id<SearchUIResultsViewDelegate>)resultsViewDelegate;
-(void)setFeedbackDelegate:(id<SearchUIFeedbackDelegate>)arg1 ;
-(void)setShouldUseStandardSectionInsets:(BOOL)arg1 ;
-(BOOL)shouldUseStandardSectionInsets;
-(id<SearchUIShowMoreSectionsDelegate>)showMoreSectionsDelegate;
-(BOOL)threeDTouchEnabled;
-(void)setShouldUseInsetRoundedSections:(BOOL)arg1 ;
-(void)setIsPop:(BOOL)arg1 ;
-(void)setSelectableGridPunchoutIndex:(long long)arg1 ;
-(id<SearchUIFeedbackDelegate>)feedbackDelegate;
-(void)setSearchString:(NSString *)arg1 ;
-(BOOL)shouldUseInsetRoundedSections;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)searchString;
@end

