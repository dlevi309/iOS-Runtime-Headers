/*
* Generated on Thursday, January 14, 2021 at 2:27:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
*/

#import <libobjc.A.dylib/VSRemoteNotifierDelegate.h>

@class NSOperationQueue, VSRemoteNotifier, VSStoreURLBag, VSPreferences, VSDeveloperServiceConnection, NSString;

@interface VSIdentityProviderAvailabilityInfoCenter : NSObject <VSRemoteNotifierDelegate> {

	BOOL _hasDeterminedInitialStatus;
	long long _status;
	NSOperationQueue* _privateQueue;
	VSRemoteNotifier* _remoteNotifier;
	VSStoreURLBag* _bag;
	VSPreferences* _preferences;
	VSDeveloperServiceConnection* _developerServiceConnection;

}

@property (assign,nonatomic) long long status;                                                       //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) NSOperationQueue * privateQueue;                                        //@synthesize privateQueue=_privateQueue - In the implementation block
@property (assign,nonatomic) BOOL hasDeterminedInitialStatus;                                        //@synthesize hasDeterminedInitialStatus=_hasDeterminedInitialStatus - In the implementation block
@property (nonatomic,retain) VSRemoteNotifier * remoteNotifier;                                      //@synthesize remoteNotifier=_remoteNotifier - In the implementation block
@property (nonatomic,retain) VSStoreURLBag * bag;                                                    //@synthesize bag=_bag - In the implementation block
@property (nonatomic,retain) VSPreferences * preferences;                                            //@synthesize preferences=_preferences - In the implementation block
@property (nonatomic,retain) VSDeveloperServiceConnection * developerServiceConnection;              //@synthesize developerServiceConnection=_developerServiceConnection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultCenter;
+(BOOL)automaticallyNotifiesObserversOfStatus;
-(VSDeveloperServiceConnection *)developerServiceConnection;
-(void)setHasDeterminedInitialStatus:(BOOL)arg1 ;
-(id)init;
-(VSPreferences *)preferences;
-(NSOperationQueue *)privateQueue;
-(void)setPreferences:(VSPreferences *)arg1 ;
-(VSRemoteNotifier *)remoteNotifier;
-(void)setRemoteNotifier:(VSRemoteNotifier *)arg1 ;
-(void)remoteNotifier:(id)arg1 didReceiveRemoteNotificationWithUserInfo:(id)arg2 ;
-(VSStoreURLBag *)bag;
-(void)_sendStatusChangeNotification;
-(BOOL)hasDeterminedInitialStatus;
-(void)setBag:(VSStoreURLBag *)arg1 ;
-(void)setPrivateQueue:(NSOperationQueue *)arg1 ;
-(void)determineIdentityProviderAvailabilityWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_accountStoreChanged:(id)arg1 ;
-(void)setStatus:(long long)arg1 ;
-(void)_beginStatusUpdateAttemptWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setDeveloperServiceConnection:(VSDeveloperServiceConnection *)arg1 ;
-(long long)status;
@end

