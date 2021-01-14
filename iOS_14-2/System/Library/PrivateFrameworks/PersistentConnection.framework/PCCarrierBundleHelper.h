/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
*/

#import <libobjc.A.dylib/CoreTelephonyClientDataDelegate.h>
#import <libobjc.A.dylib/CoreTelephonyClientCarrierBundleDelegate.h>

@protocol OS_dispatch_queue;
@class CoreTelephonyClient, NSObject, CTXPCServiceSubscriptionContext, NSHashTable, CTBundle, NSDictionary, NSString;

@interface PCCarrierBundleHelper : NSObject <CoreTelephonyClientDataDelegate, CoreTelephonyClientCarrierBundleDelegate> {

	CoreTelephonyClient* _ctClient;
	NSObject*<OS_dispatch_queue> _queue;
	CTXPCServiceSubscriptionContext* _currentDataContext;
	NSHashTable* _delegates;
	CTBundle* _bundle;
	NSDictionary* _cachedPushSettings;

}

@property (nonatomic,copy) NSDictionary * cachedPushSettings;              //@synthesize cachedPushSettings=_cachedPushSettings - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)helper;
-(void)currentDataSimChanged:(id)arg1 ;
-(void)addDelegate:(id)arg1 ;
-(void)removeDelegate:(id)arg1 ;
-(void)_updateCurrentDataSimContext:(id)arg1 ;
-(id)init;
-(void)_processCarrierBundleChange:(id)arg1 ;
-(void)operatorBundleChange:(id)arg1 ;
-(id)copyValueForKey:(id)arg1 error:(id*)arg2 ;
-(void)setCachedPushSettings:(NSDictionary *)arg1 ;
-(id)copyValueFromPushBundleForKey:(id)arg1 error:(id*)arg2 ;
-(NSDictionary *)cachedPushSettings;
-(BOOL)boolValueFromPushBundleForKey:(id)arg1 error:(id*)arg2 ;
@end

