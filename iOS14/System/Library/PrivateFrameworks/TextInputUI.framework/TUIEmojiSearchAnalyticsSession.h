/*
* Generated on Thursday, January 14, 2021 at 2:21:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInputUI.framework/TextInputUI
*/

#import <TextInputUI/TUIAnalyticsSession.h>

@class NSLocale, NSString;

@interface TUIEmojiSearchAnalyticsSession : TUIAnalyticsSession {

	NSLocale* _locale;
	NSString* _trackedSearchQuery;
	NSString* _initialInputModeIdentifier;
	unsigned long long _numberOfInitialCharacters;
	unsigned long long _numberOfEmojiInserted;
	unsigned long long _numberOfCharactersInserted;
	unsigned long long _numberOfCharactersDeleted;
	unsigned long long _numberOfClearActions;

}
+(id)emojiSearchFieldSpecTuples;
+(id)emojiSearchEventSpec;
-(id)initWithLocale:(id)arg1 ;
-(void)emojiInserted:(id)arg1 ;
-(void)beginSessionWithInitialSearchQuery:(id)arg1 ;
-(void)searchQueryWasChangedTo:(id)arg1 ;
-(void)clearButtonPressed;
-(void)endSession;
@end

