/*
* Generated on Thursday, January 14, 2021 at 2:27:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
*/

#import <VideoSubscriberAccount/VideoSubscriberAccount-Structs.h>
#import <libobjc.A.dylib/VSRemoteNotifierDelegate.h>

@protocol VSDeviceDelegate;
@class NSOperationQueue, VSRemoteNotifier, MCProfileConnection, NSString;

@interface VSDevice : NSObject <VSRemoteNotifierDelegate> {

	id<VSDeviceDelegate> _delegate;
	/*function pointer*/void* _copyAnswer;
	NSOperationQueue* _privateQueue;
	VSRemoteNotifier* _setTopBoxStateRemoteNotifier;
	MCProfileConnection* _profileConnection;

}

@property (assign,nonatomic) /*function pointer*/void* copyAnswer;                                       //@synthesize copyAnswer=_copyAnswer - In the implementation block
@property (nonatomic,retain) NSOperationQueue * privateQueue;                                            //@synthesize privateQueue=_privateQueue - In the implementation block
@property (nonatomic,retain) VSRemoteNotifier * setTopBoxStateRemoteNotifier;                            //@synthesize setTopBoxStateRemoteNotifier=_setTopBoxStateRemoteNotifier - In the implementation block
@property (nonatomic,retain) MCProfileConnection * profileConnection;                                    //@synthesize profileConnection=_profileConnection - In the implementation block
@property (assign,nonatomic,__weak) id<VSDeviceDelegate> delegate;                                       //@synthesize delegate=_delegate - In the implementation block
@property (getter=isRunningAnInternalBuild,nonatomic,readonly) BOOL runningAnInternalBuild; 
@property (getter=isRunningACustomerBuild,nonatomic,readonly) BOOL runningACustomerBuild; 
@property (nonatomic,readonly) unsigned long long deviceType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)currentDevice;
+(BOOL)_getMobileGestaltBoolean:(CFStringRef)arg1 withCopyAnswer:(/*function pointer*/void*)arg2 ;
+(BOOL)_runningAnInternalBuildWithCopyAnswer:(/*function pointer*/void*)arg1 ;
+(BOOL)_runningACustomerBuildWithCopyAnswer:(/*function pointer*/void*)arg1 ;
+(unsigned long long)_deviceTypeWithCopyAnswer:(/*function pointer*/void*)arg1 ;
-(unsigned long long)deviceType;
-(id)init;
-(id<VSDeviceDelegate>)delegate;
-(NSOperationQueue *)privateQueue;
-(void)setDelegate:(id<VSDeviceDelegate>)arg1 ;
-(void)setProfileConnection:(MCProfileConnection *)arg1 ;
-(void)setPrivateQueue:(NSOperationQueue *)arg1 ;
-(MCProfileConnection *)profileConnection;
-(BOOL)setIgnoreSetTopBoxProfile:(BOOL)arg1 ;
-(void)dealloc;
-(void)fetchDeviceManagedSetTopBoxProfileWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)isRunningAnInternalBuild;
-(void)fetchSetTopBoxProfileWithCompletion:(/*^block*/id)arg1 ;
-(void)cloudConfigurationDidChange;
-(/*function pointer*/void*)copyAnswer;
-(VSRemoteNotifier *)setTopBoxStateRemoteNotifier;
-(id)developerIdentityProviderDeletionConfirmationMessage;
-(id)accountDeletionConfirmationMessageForIdentityProviderDisplayName:(id)arg1 ;
-(BOOL)isRunningACustomerBuild;
-(void)refreshSetTopBoxProfile:(/*^block*/id)arg1 ;
-(void)setCopyAnswer:(/*function pointer*/void*)arg1 ;
-(void)setSetTopBoxStateRemoteNotifier:(VSRemoteNotifier *)arg1 ;
@end

