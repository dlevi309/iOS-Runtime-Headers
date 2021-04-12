/*
* Generated on Thursday, January 14, 2021 at 2:23:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)sharedInstance;
+(void)invalidate;
-(int)sortOrderForStoreType:(long long)arg1 ;
-(id)accountTypeTitleForSource:(id)arg1 ;
-(id)init;
-(void)_accountStoreDidChange:(id)arg1 ;
-(id)accountStore;
-(BOOL)sourceIsManaged:(id)arg1 ;
-(BOOL)sourceListingNeedsRefresh:(id)arg1 ;
-(void)_localeDidChange:(id)arg1 ;
-(id)_displayAccountForAccountWithIdentifier:(id)arg1 ;
-(id)_accountForAccountIdentifier:(id)arg1 ;
-(void)refreshListingForSource:(id)arg1 isUserRequested:(BOOL)arg2 ;
-(id)titleForSource:(id)arg1 forBeginningOfSentence:(BOOL)arg2 ;
-(int)sortOrderForSource:(id)arg1 ;
-(int)sortOrderForSourceType:(long long)arg1 ;
-(id)accountTypeTitleForSourceWithExternalId:(id)arg1 ;
-(void)dealloc;
@end

