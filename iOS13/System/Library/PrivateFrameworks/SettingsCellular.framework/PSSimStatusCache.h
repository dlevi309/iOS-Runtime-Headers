/*
* Generated on Monday, March 1, 2021 at 2:34:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SettingsCellular.framework/SettingsCellular
*/

#import <libobjc.A.dylib/CoreTelephonyClientDelegate.h>
#import <libobjc.A.dylib/CoreTelephonyClientSubscriberDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, CoreTelephonyClient, CTXPCServiceSubscriptionInfo, NSMutableDictionary, NSString;

@interface PSSimStatusCache : NSObject <CoreTelephonyClientDelegate, CoreTelephonyClientSubscriberDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	CoreTelephonyClient* _coreTelephonyClient;
	CTXPCServiceSubscriptionInfo* _subscriptionInfo;
	NSMutableDictionary* _simStatusDict;

}

@property (nonatomic,retain) CoreTelephonyClient * coreTelephonyClient;              //@synthesize coreTelephonyClient=_coreTelephonyClient - In the implementation block
@property (copy) CTXPCServiceSubscriptionInfo * subscriptionInfo;                    //@synthesize subscriptionInfo=_subscriptionInfo - In the implementation block
@property (retain) NSMutableDictionary * simStatusDict;                              //@synthesize simStatusDict=_simStatusDict - In the implementation block
@property (nonatomic,readonly) BOOL isDualSimCapable; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)willEnterForeground;
-(void)subscriptionInfoDidChange;
-(void)simStatusDidChange:(id)arg1 status:(id)arg2 ;
-(id)subscriptionsInUse;
-(id)initPrivate;
-(CTXPCServiceSubscriptionInfo *)subscriptionInfo;
-(void)setSubscriptionInfo:(CTXPCServiceSubscriptionInfo *)arg1 ;
-(CoreTelephonyClient *)coreTelephonyClient;
-(void)setCoreTelephonyClient:(CoreTelephonyClient *)arg1 ;
-(id)subscriptionContexts;
-(id)simStatus:(id)arg1 ;
-(BOOL)isDualSimCapable;
-(void)fetchSubscriptionContexts;
-(void)fetchSimStatus;
-(void)setSimStatusDict:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)simStatusDict;
@end

