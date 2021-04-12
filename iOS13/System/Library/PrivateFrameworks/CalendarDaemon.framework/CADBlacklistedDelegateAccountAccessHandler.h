/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
*/

#import <libobjc.A.dylib/CADAccountAccessHandler.h>

@protocol CADCalStoreInfoProvider, CADCalCalendarInfoProvider, OS_dispatch_queue;
@class NSObject, NSSet;

@interface CADBlacklistedDelegateAccountAccessHandler : NSObject <CADAccountAccessHandler> {

	id<CADCalStoreInfoProvider> _calStoreInfoProvider;
	id<CADCalCalendarInfoProvider> _calCalendarInfoProvider;
	NSObject*<OS_dispatch_queue> _cacheQueue;
	NSSet* _cachedDelegateCalStoreInfos;

}

@property (nonatomic,readonly) id<CADCalStoreInfoProvider> calStoreInfoProvider;                    //@synthesize calStoreInfoProvider=_calStoreInfoProvider - In the implementation block
@property (nonatomic,readonly) id<CADCalCalendarInfoProvider> calCalendarInfoProvider;              //@synthesize calCalendarInfoProvider=_calCalendarInfoProvider - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> cacheQueue;                             //@synthesize cacheQueue=_cacheQueue - In the implementation block
@property (nonatomic,retain) NSSet * cachedDelegateCalStoreInfos;                                   //@synthesize cachedDelegateCalStoreInfos=_cachedDelegateCalStoreInfos - In the implementation block
-(void)reset;
-(BOOL)isAccountManaged:(id)arg1 ;
-(BOOL)isActionAllowed:(unsigned long long)arg1 forAccountIdentifier:(id)arg2 ;
-(id)restrictedCalendarRowIDsForAction:(unsigned long long)arg1 ;
-(id)initWithCalStoreInfoProvider:(id)arg1 calendarInfoProvider:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)cacheQueue;
-(id<CADCalStoreInfoProvider>)calStoreInfoProvider;
-(id<CADCalCalendarInfoProvider>)calCalendarInfoProvider;
-(id)_delegateCalStoreInfos;
-(NSSet *)cachedDelegateCalStoreInfos;
-(void)setCachedDelegateCalStoreInfos:(NSSet *)arg1 ;
@end

