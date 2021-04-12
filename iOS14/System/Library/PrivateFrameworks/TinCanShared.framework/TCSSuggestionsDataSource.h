/*
* Generated on Thursday, January 14, 2021 at 2:28:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TinCanShared.framework/TinCanShared
*/

#import <libobjc.A.dylib/TCSSuggestionsObserver.h>

@protocol TCSSuggestionsDataSourceDelegate;
@class TCSSuggestions, NSArray, NSString;

@interface TCSSuggestionsDataSource : NSObject <TCSSuggestionsObserver> {

	id<TCSSuggestionsDataSourceDelegate> _delegate;
	TCSSuggestions* _suggestions;
	NSArray* _suggestedContacts;

}

@property (nonatomic,retain) TCSSuggestions * suggestions;                                      //@synthesize suggestions=_suggestions - In the implementation block
@property (nonatomic,retain) NSArray * suggestedContacts;                                       //@synthesize suggestedContacts=_suggestedContacts - In the implementation block
@property (assign,nonatomic,__weak) id<TCSSuggestionsDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL hasSuggestions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)descriptorForRequiredKeys;
-(TCSSuggestions *)suggestions;
-(void)setSuggestions:(TCSSuggestions *)arg1 ;
-(void)_invalidate;
-(id<TCSSuggestionsDataSourceDelegate>)delegate;
-(void)setDelegate:(id<TCSSuggestionsDataSourceDelegate>)arg1 ;
-(id)initWithSuggestions:(id)arg1 ;
-(void)setSuggestedContacts:(NSArray *)arg1 ;
-(NSArray *)suggestedContacts;
-(BOOL)hasSuggestions;
-(void)suggestionsDidChange:(id)arg1 ;
-(void)dealloc;
-(void)_handleDeviceFirstUnlock;
-(void)_handlePersonNamePreferencesChangeNotification;
-(void)_handleContactStoreDidChange:(id)arg1 ;
-(id)_sortedContactsArrayFromArray:(id)arg1 ;
-(void)_notifyDelegateSuggestionsChanged;
@end

