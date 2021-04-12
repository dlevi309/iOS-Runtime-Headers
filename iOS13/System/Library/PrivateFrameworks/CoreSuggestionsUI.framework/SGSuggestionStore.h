/*
* Generated on Monday, March 1, 2021 at 2:31:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsUI.framework/CoreSuggestionsUI
*/

#import <CoreSuggestionsUI/SGList.h>
#import <libobjc.A.dylib/SGListDelegate.h>

@protocol SGSuggestionDelegate;
@class NSMutableArray, NSArray, NSString;

@interface SGSuggestionStore : SGList <SGListDelegate> {

	NSMutableArray* _suggestions;
	long long _notificationsLockCount;
	BOOL _modified;
	id<SGSuggestionDelegate> _suggestionDelegate;

}

@property (nonatomic,copy) NSArray * suggestions; 
@property (assign,nonatomic,__weak) id<SGSuggestionDelegate> suggestionDelegate;              //@synthesize suggestionDelegate=_suggestionDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSArray *)suggestions;
-(void)setSuggestions:(NSArray *)arg1 ;
-(id<SGSuggestionDelegate>)suggestionDelegate;
-(void)setSuggestionDelegate:(id<SGSuggestionDelegate>)arg1 ;
-(void)list:(id)arg1 didAddItem:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)list:(id)arg1 didRemoveItem:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(id)sectionWithItem:(id)arg1 ;
-(void)addSuggestion:(id)arg1 ;
-(void)removeSuggestion:(id)arg1 ;
-(void)updateSuggestion:(id)arg1 ;
-(void)lockNotifications;
-(void)unlockNotifications;
@end

