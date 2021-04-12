/*
* Generated on Thursday, January 14, 2021 at 2:27:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSArray *)suggestions;
-(void)setSuggestions:(NSArray *)arg1 ;
-(id)init;
-(id<SGSuggestionDelegate>)suggestionDelegate;
-(void)removeSuggestion:(id)arg1 ;
-(void)setSuggestionDelegate:(id<SGSuggestionDelegate>)arg1 ;
-(void)addSuggestion:(id)arg1 ;
-(void)list:(id)arg1 didAddItem:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)list:(id)arg1 didRemoveItem:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(id)sectionWithItem:(id)arg1 ;
-(void)updateSuggestion:(id)arg1 ;
-(void)lockNotifications;
-(void)unlockNotifications;
@end

