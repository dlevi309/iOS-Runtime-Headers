/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <HealthUI/HKViewController.h>
#import <libobjc.A.dylib/HKIncrementalSearchBarDelegate.h>

@class NSData, NSString, UITextView, HKIncrementalSearchBar, NSOperationQueue, _IncrementalSearchOperation, NSMutableArray, UIColor;

@interface HKLargePlainTextViewController : HKViewController <HKIncrementalSearchBarDelegate> {

	NSData* _data;
	NSString* _dataAsString;
	UITextView* _textView;
	HKIncrementalSearchBar* _incrementalSearchBar;
	NSOperationQueue* _searchQueue;
	_IncrementalSearchOperation* _currentSearch;
	NSMutableArray* _currentRanges;
	long long _currentSearchItem;
	UIColor* _normalTextViewBackground;
	UIColor* _selectedTextViewBackground;
	UIColor* _currentSelectionBackground;
	UIColor* _otherSelectionBackground;
	double _currentKeyboardHeight;

}

@property (nonatomic,readonly) NSString * dataAsString;                                    //@synthesize dataAsString=_dataAsString - In the implementation block
@property (nonatomic,readonly) UITextView * textView;                                      //@synthesize textView=_textView - In the implementation block
@property (nonatomic,readonly) HKIncrementalSearchBar * incrementalSearchBar;              //@synthesize incrementalSearchBar=_incrementalSearchBar - In the implementation block
@property (nonatomic,readonly) NSOperationQueue * searchQueue;                             //@synthesize searchQueue=_searchQueue - In the implementation block
@property (retain) _IncrementalSearchOperation * currentSearch;                            //@synthesize currentSearch=_currentSearch - In the implementation block
@property (nonatomic,retain) NSMutableArray * currentRanges;                               //@synthesize currentRanges=_currentRanges - In the implementation block
@property (assign) long long currentSearchItem;                                            //@synthesize currentSearchItem=_currentSearchItem - In the implementation block
@property (nonatomic,readonly) UIColor * normalTextViewBackground;                         //@synthesize normalTextViewBackground=_normalTextViewBackground - In the implementation block
@property (nonatomic,readonly) UIColor * selectedTextViewBackground;                       //@synthesize selectedTextViewBackground=_selectedTextViewBackground - In the implementation block
@property (nonatomic,readonly) UIColor * currentSelectionBackground;                       //@synthesize currentSelectionBackground=_currentSelectionBackground - In the implementation block
@property (nonatomic,readonly) UIColor * otherSelectionBackground;                         //@synthesize otherSelectionBackground=_otherSelectionBackground - In the implementation block
@property (assign,nonatomic) double currentKeyboardHeight;                                 //@synthesize currentKeyboardHeight=_currentKeyboardHeight - In the implementation block
@property (readonly) NSData * data;                                                        //@synthesize data=_data - In the implementation block
-(id)initWithData:(id)arg1 ;
-(NSData *)data;
-(UITextView *)textView;
-(void)loadView;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)addSearchResults:(IncrementalSearchResultsDefn)arg1 ;
-(NSOperationQueue *)searchQueue;
-(void)cancelCurrentSearch;
-(double)currentKeyboardHeight;
-(void)setCurrentKeyboardHeight:(double)arg1 ;
-(void)resetSearchResults;
-(id)searchBodyWithAttributes;
-(void)searchBarDoneAction:(id)arg1 ;
-(id)_standardPlainTextFont;
-(id)_selectionAttributes:(BOOL)arg1 ;
-(void)resetCurrentSearchItem;
-(void)_updateCurrentSearchItem:(unsigned long long)arg1 hitsChanged:(BOOL)arg2 resetSearch:(BOOL)arg3 ;
-(void)finishSearchResults;
-(BOOL)_updateMatchDisplayString:(unsigned long long)arg1 numMatches:(unsigned long long)arg2 ;
-(void)endSearchResults;
-(void)incrementalSearchOperation:(id)arg1 ;
-(void)searchBarUpAction:(id)arg1 ;
-(void)searchBarDownAction:(id)arg1 ;
-(void)searchBarChangeSearch:(id)arg1 searchString:(id)arg2 ;
-(void)startIncrementalSearch;
-(NSString *)dataAsString;
-(HKIncrementalSearchBar *)incrementalSearchBar;
-(_IncrementalSearchOperation *)currentSearch;
-(void)setCurrentSearch:(_IncrementalSearchOperation *)arg1 ;
-(NSMutableArray *)currentRanges;
-(void)setCurrentRanges:(NSMutableArray *)arg1 ;
-(long long)currentSearchItem;
-(void)setCurrentSearchItem:(long long)arg1 ;
-(UIColor *)normalTextViewBackground;
-(UIColor *)selectedTextViewBackground;
-(UIColor *)currentSelectionBackground;
-(UIColor *)otherSelectionBackground;
@end

