/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/


@interface SGCuratedChangeNotifications : NSObject
+(id)_getListenerByClassMap;
+(id)_getListener:(Class)arg1 ;
+(void)_addObserver:(/*^block*/id)arg1 forObjectLifetime:(id)arg2 listenerClass:(Class)arg3 ;
+(void)addAddressBookObserver:(/*^block*/id)arg1 forObjectLifetime:(id)arg2 ;
+(void)addCalendarObserver:(/*^block*/id)arg1 forObjectLifetime:(id)arg2 ;
+(void)simulateAddressBookChange;
+(void)simulateCalendarChange;
@end

