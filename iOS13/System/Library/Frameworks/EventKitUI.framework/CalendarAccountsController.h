/*
* Generated on Monday, March 1, 2021 at 2:31:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject, ACAccountStore;

@interface CalendarAccountsController : NSObject {

	NSMutableDictionary* _lastStoreListingRefreshDates;
	NSObject*<OS_dispatch_queue> _refreshQueue;
	ACAccountStore* _accountStore;

}
+(void)initialize;
+(void)invalidate;
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(id)accountStore;
-(void)_accountStoreDidChange:(id)arg1 ;
-(void)_localeDidChange:(id)arg1 ;
-(BOOL)sourceIsManaged:(id)arg1 ;
-(int)sortOrderForSourceType:(long long)arg1 ;
-(int)sortOrderForSource:(id)arg1 ;
-(id)_accountForAccountIdentifier:(id)arg1 ;
-(id)_displayAccountForAccountWithIdentifier:(id)arg1 ;
-(id)accountTypeTitleForSourceWithExternalId:(id)arg1 ;
-(id)titleForSource:(id)arg1 forBeginningOfSentence:(BOOL)arg2 ;
-(id)accountTypeTitleForSource:(id)arg1 ;
-(int)sortOrderForStoreType:(long long)arg1 ;
-(BOOL)sourceListingNeedsRefresh:(id)arg1 ;
-(void)refreshListingForSource:(id)arg1 isUserRequested:(BOOL)arg2 ;
@end

