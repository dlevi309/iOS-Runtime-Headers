/*
* Generated on Thursday, January 14, 2021 at 2:28:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)simStatusDidChange:(id)arg1 status:(id)arg2 ;
-(void)subscriptionInfoDidChange;
-(id)initPrivate;
-(void)setCoreTelephonyClient:(CoreTelephonyClient *)arg1 ;
-(CoreTelephonyClient *)coreTelephonyClient;
-(id)subscriptionContexts;
-(id)init;
-(id)subscriptionsInUse;
-(BOOL)isDualSimCapable;
-(void)willEnterForeground;
-(void)setSimStatusDict:(NSMutableDictionary *)arg1 ;
-(void)setSubscriptionInfo:(CTXPCServiceSubscriptionInfo *)arg1 ;
-(id)simStatus:(id)arg1 ;
-(CTXPCServiceSubscriptionInfo *)subscriptionInfo;
-(NSMutableDictionary *)simStatusDict;
-(void)fetchSubscriptionContexts;
-(void)fetchSimStatus;
@end

