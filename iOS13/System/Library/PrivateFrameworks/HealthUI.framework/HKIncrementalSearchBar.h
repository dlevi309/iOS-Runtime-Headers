/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSString, _SearchBarContent;

@interface HKIncrementalSearchBar : UIView {

	NSString* _matchDisplayText;
	_SearchBarContent* _searchBarContent;

}

@property (nonatomic,readonly) _SearchBarContent * searchBarContent;                            //@synthesize searchBarContent=_searchBarContent - In the implementation block
@property (nonatomic,retain) id<HKIncrementalSearchBarDelegate> searchBarDelegate; 
@property (nonatomic,retain) NSString * searchText; 
@property (nonatomic,retain) NSString * matchDisplayText;                                       //@synthesize matchDisplayText=_matchDisplayText - In the implementation block
+(id)regularExpressionFromString:(id)arg1 quoteForJavascript:(BOOL)arg2 caseless:(BOOL*)arg3 ;
+(BOOL)_hasUppercaseCharacters:(id)arg1 ;
+(id)_patternFromSearchString:(id)arg1 quoteForJavascript:(BOOL)arg2 ;
-(id)init;
-(void)dealloc;
-(CGSize)intrinsicContentSize;
-(id)inputAccessoryView;
-(BOOL)canBecomeFirstResponder;
-(NSString *)searchText;
-(void)setSearchText:(NSString *)arg1 ;
-(BOOL)searchIsActive;
-(void)doneAction:(id)arg1 ;
-(void)activateSearch:(BOOL)arg1 ;
-(void)setSearchBarDelegate:(id<HKIncrementalSearchBarDelegate>)arg1 ;
-(void)setMatchDisplayText:(NSString *)arg1 ;
-(void)setUpEnabled:(BOOL)arg1 ;
-(void)setDownEnabled:(BOOL)arg1 ;
-(void)setMatchDisplayVisible:(BOOL)arg1 ;
-(void)searchKeyboardDidHide:(id)arg1 ;
-(BOOL)keyboardIsUp;
-(BOOL)keyboardIsDown;
-(id<HKIncrementalSearchBarDelegate>)searchBarDelegate;
-(void)_lowerKeyboard;
-(NSString *)matchDisplayText;
-(_SearchBarContent *)searchBarContent;
@end

