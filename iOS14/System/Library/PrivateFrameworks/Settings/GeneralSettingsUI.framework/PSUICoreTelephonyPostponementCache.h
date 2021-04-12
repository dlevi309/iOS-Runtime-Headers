/*
* Generated on Thursday, January 14, 2021 at 2:28:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Settings/GeneralSettingsUI.framework/GeneralSettingsUI
*/

#import <libobjc.A.dylib/CoreTelephonyClientSubscriberDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, CoreTelephonyClient, CTActivationPolicyState, NSString;

@interface PSUICoreTelephonyPostponementCache : NSObject <CoreTelephonyClientSubscriberDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	CoreTelephonyClient* _client;
	CTActivationPolicyState* _activationPolicyState;

}

@property (nonatomic,retain) CoreTelephonyClient * client;                       //@synthesize client=_client - In the implementation block
@property (retain) CTActivationPolicyState * activationPolicyState;              //@synthesize activationPolicyState=_activationPolicyState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)initPrivate;
-(CoreTelephonyClient *)client;
-(void)setClient:(CoreTelephonyClient *)arg1 ;
-(id)init;
-(void)willEnterForeground;
-(id)getActivationPolicyState;
-(void)setActivationPolicyState:(CTActivationPolicyState *)arg1 ;
-(CTActivationPolicyState *)activationPolicyState;
-(void)fetchActivationPolicyState;
@end

