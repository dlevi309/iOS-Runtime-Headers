/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)restrictedCalendarRowIDsForAction:(unsigned long long)arg1 ;
-(BOOL)isAccountManaged:(id)arg1 ;
-(BOOL)isActionAllowed:(unsigned long long)arg1 forAccountIdentifier:(id)arg2 ;
-(NSSet *)cachedDelegateCalStoreInfos;
-(NSObject*<OS_dispatch_queue>)cacheQueue;
-(id)_delegateCalStoreInfos;
-(void)setCachedDelegateCalStoreInfos:(NSSet *)arg1 ;
-(void)reset;
-(id)initWithCalStoreInfoProvider:(id)arg1 calendarInfoProvider:(id)arg2 ;
-(id<CADCalCalendarInfoProvider>)calCalendarInfoProvider;
-(id<CADCalStoreInfoProvider>)calStoreInfoProvider;
@end

