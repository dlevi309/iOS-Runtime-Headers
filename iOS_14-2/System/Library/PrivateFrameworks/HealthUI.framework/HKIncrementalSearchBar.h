/*
* Generated on Thursday, January 14, 2021 at 2:24:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)inputAccessoryView;
-(CGSize)intrinsicContentSize;
-(id)init;
-(BOOL)canBecomeFirstResponder;
-(NSString *)searchText;
-(BOOL)searchIsActive;
-(void)setSearchText:(NSString *)arg1 ;
-(void)dealloc;
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
-(void)doneAction:(id)arg1 ;
-(NSString *)matchDisplayText;
-(_SearchBarContent *)searchBarContent;
@end

