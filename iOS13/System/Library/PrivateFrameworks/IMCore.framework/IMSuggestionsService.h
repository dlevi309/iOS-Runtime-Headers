/*
* Generated on Monday, March 1, 2021 at 2:32:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
*/


@protocol SGSuggestionsServiceContactsProtocol, OS_dispatch_queue;
#import <IMCore/IMCore-Structs.h>
@class NSObject, NSCache, NSMutableDictionary, NSDictionary, NSHashTable;

@interface IMSuggestionsService : NSObject {

	NSObject*<SGSuggestionsServiceContactsProtocol> _connection;
	NSCache* _cache;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _pending;
	NSDictionary* _localTable;
	NSHashTable* _handlesToRetry;
	id _newContactNotificationToken;
	CFRunLoopObserverRef _notificationObserver;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(id)serviceConnection;
-(id)fetchCNContactForSuggestedHandle:(id)arg1 ;
-(void)scheduleFetchIfNecessaryForHandle:(id)arg1 ;
-(BOOL)_maybePhoneNumber:(id)arg1 ;
-(BOOL)_maybeEmailAddress:(id)arg1 ;
-(BOOL)isBusiness:(id)arg1 ;
-(void)_startRequestForDisplayName:(id)arg1 messageUID:(id)arg2 queue:(id)arg3 ;
-(void)_startRequestForDisplayNameCallbackWithSuggestedName:(id)arg1 displayName:(id)arg2 queue:(id)arg3 ;
-(void)fetchSuggestedRealNameForDisplayName:(id)arg1 messageUID:(id)arg2 queue:(id)arg3 block:(/*^block*/id)arg4 ;
-(id)_contactForSGContactMatch:(id)arg1 ;
-(void)startUsingLocalLookupsWithTable:(id)arg1 ;
-(void)stopUsingLocalLookups;
-(id)suggestedNameFromCache:(id)arg1 wasFound:(BOOL*)arg2 ;
@end

