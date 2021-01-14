/*
* Generated on Thursday, January 14, 2021 at 2:26:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PushKit.framework/PushKit
*/

#import <PushKit/PushKit-Structs.h>
#import <libobjc.A.dylib/PKVoIPXPCClient.h>
#import <libobjc.A.dylib/PKComplicationXPCClient.h>
#import <libobjc.A.dylib/PKFileProviderXPCClient.h>
#import <libobjc.A.dylib/PKUserNotificationsConnectionClient.h>

@protocol PKPushRegistryDelegate, OS_dispatch_queue;
@class NSSet, NSObject, NSMutableDictionary, NSString;

@interface PKPushRegistry : NSObject <PKVoIPXPCClient, PKComplicationXPCClient, PKFileProviderXPCClient, PKUserNotificationsConnectionClient> {

	int _voipToken;
	int _complicationToken;
	int _fileProviderToken;
	int _outstandingVoIPPushes;
	NSSet* _desiredPushTypes;
	id<PKPushRegistryDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	NSObject*<OS_dispatch_queue> _ivarQueue;
	NSMutableDictionary* _pushTypeToToken;
	NSMutableDictionary* _pushTypeToConnection;
	double _lastReportedCallTime;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> delegateQueue;              //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> ivarQueue;                  //@synthesize ivarQueue=_ivarQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * pushTypeToToken;                   //@synthesize pushTypeToToken=_pushTypeToToken - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * pushTypeToConnection;              //@synthesize pushTypeToConnection=_pushTypeToConnection - In the implementation block
@property (assign,nonatomic) int voipToken;                                           //@synthesize voipToken=_voipToken - In the implementation block
@property (assign,nonatomic) int complicationToken;                                   //@synthesize complicationToken=_complicationToken - In the implementation block
@property (assign,nonatomic) int fileProviderToken;                                   //@synthesize fileProviderToken=_fileProviderToken - In the implementation block
@property (assign,nonatomic) int outstandingVoIPPushes;                               //@synthesize outstandingVoIPPushes=_outstandingVoIPPushes - In the implementation block
@property (assign,nonatomic) double lastReportedCallTime;                             //@synthesize lastReportedCallTime=_lastReportedCallTime - In the implementation block
@property (__weak) id<PKPushRegistryDelegate> delegate;                               //@synthesize delegate=_delegate - In the implementation block
@property (copy) NSSet * desiredPushTypes;                                            //@synthesize desiredPushTypes=_desiredPushTypes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)_checkIfNecessaryVoIPFrameworksAreLinked;
+(id)_pushTypeToMachServiceName;
-(id)initWithQueue:(id)arg1 ;
-(void)voipPayloadReceived:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)setDesiredPushTypes:(NSSet *)arg1 ;
-(double)lastReportedCallTime;
-(void)_unregisterForPushType:(id)arg1 ;
-(BOOL)_selfTaskHasEntitlement:(CFStringRef)arg1 ;
-(void)remoteUserNotificationPayloadReceived:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id<PKPushRegistryDelegate>)delegate;
-(int)voipToken;
-(NSMutableDictionary *)pushTypeToToken;
-(void)complicationRegistrationFailed;
-(void)fileProviderRegistrationSucceededWithDeviceToken:(id)arg1 ;
-(void)setComplicationToken:(int)arg1 ;
-(void)setVoipToken:(int)arg1 ;
-(void)setLastReportedCallTime:(double)arg1 ;
-(int)outstandingVoIPPushes;
-(void)setOutstandingVoIPPushes:(int)arg1 ;
-(id)pushTokenForType:(id)arg1 ;
-(void)setDelegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_noteIncomingCallReported;
-(void)setDelegate:(id<PKPushRegistryDelegate>)arg1 ;
-(void)voipPayloadReceived:(id)arg1 mustPostCall:(BOOL)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)_renewConnectionForPushTypeIfRegistered:(id)arg1 ;
-(NSSet *)desiredPushTypes;
-(void)fileProviderRegistrationFailed;
-(void)setFileProviderToken:(int)arg1 ;
-(void)fileProviderPayloadReceived:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(int)fileProviderToken;
-(NSObject*<OS_dispatch_queue>)ivarQueue;
-(void)setPushTypeToToken:(NSMutableDictionary *)arg1 ;
-(void)voipRegistrationSucceededWithDeviceToken:(id)arg1 ;
-(void)complicationPayloadReceived:(id)arg1 ;
-(NSMutableDictionary *)pushTypeToConnection;
-(void)setIvarQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)complicationRegistrationSucceededWithDeviceToken:(id)arg1 ;
-(void)_registerForPushType:(id)arg1 ;
-(int)complicationToken;
-(void)voipRegistrationFailed;
-(id)_createConnectionForPushType:(id)arg1 ;
-(void)dealloc;
-(void)_terminateAppIfThereAreUnhandledVoIPPushes;
-(void)setPushTypeToConnection:(NSMutableDictionary *)arg1 ;
-(void)remoteUserNotificationRegistrationSucceededWithDeviceToken:(id)arg1 ;
@end

