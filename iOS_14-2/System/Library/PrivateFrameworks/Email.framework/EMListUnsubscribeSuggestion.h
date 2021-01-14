/*
* Generated on Thursday, January 14, 2021 at 2:23:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
*/

#import <libobjc.A.dylib/SGSuggestion.h>
#import <libobjc.A.dylib/SGSuggestionCategory.h>

@protocol SGSuggestionDelegate;
@class EMListUnsubscribeCommand, SGSuggestionPresenter, NSString;

@interface EMListUnsubscribeSuggestion : NSObject <SGSuggestion, SGSuggestionCategory> {

	id<SGSuggestionDelegate> suggestionDelegate;
	EMListUnsubscribeCommand* _listUnsubscribeCommand;
	SGSuggestionPresenter* _suggestionPresenter;

}

@property (nonatomic,retain) EMListUnsubscribeCommand * listUnsubscribeCommand;               //@synthesize listUnsubscribeCommand=_listUnsubscribeCommand - In the implementation block
@property (assign,nonatomic,__weak) SGSuggestionPresenter * suggestionPresenter;              //@synthesize suggestionPresenter=_suggestionPresenter - In the implementation block
@property (nonatomic,readonly) id<SGSuggestion> suggestion; 
@property (assign,nonatomic,__weak) id<SGSuggestionDelegate> suggestionDelegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)suggestionPrimaryActionString;
+(id)suggestionDismissActionTitle;
+(id)unsubscribeTitleAlertString;
+(id)unsubscribeMessageAlertString;
-(void)unsubscribe;
-(void)ignore;
-(id<SGSuggestion>)suggestion;
-(id<SGSuggestionDelegate>)suggestionDelegate;
-(unsigned long long)hash;
-(EMListUnsubscribeCommand *)listUnsubscribeCommand;
-(id)suggestionCategoryTitle;
-(id)suggestionTitle;
-(SGSuggestionPresenter *)suggestionPresenter;
-(id)suggestionCategory;
-(id)suggestionPrimaryAction;
-(id)suggestionDismissAction;
-(id)suggestionCategoryId;
-(id)suggestionCategoryImage;
-(/*^block*/id)suggestionComparator;
-(id)suggestionCategoryTitleForItems:(id)arg1 ;
-(id)suggestionCategorySubtitleForItems:(id)arg1 ;
-(id)suggestionCategoryLocalizedCountOfItems:(id)arg1 ;
-(void)setListUnsubscribeCommand:(EMListUnsubscribeCommand *)arg1 ;
-(void)setSuggestionPresenter:(SGSuggestionPresenter *)arg1 ;
-(void)setSuggestionDelegate:(id<SGSuggestionDelegate>)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

