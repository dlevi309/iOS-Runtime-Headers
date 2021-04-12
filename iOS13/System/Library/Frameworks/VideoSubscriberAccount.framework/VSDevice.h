/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
*/


#import <VideoSubscriberAccount/VideoSubscriberAccount-Structs.h>
@class NSOperationQueue, VSRemoteNotifier;

@interface VSDevice : NSObject {

	/*function pointer*/void* _copyAnswer;
	NSOperationQueue* _privateQueue;
	VSRemoteNotifier* _setTopBoxStateRemoteNotifier;

}

@property (assign,nonatomic) /*function pointer*/void* copyAnswer;                                       //@synthesize copyAnswer=_copyAnswer - In the implementation block
@property (nonatomic,retain) NSOperationQueue * privateQueue;                                            //@synthesize privateQueue=_privateQueue - In the implementation block
@property (nonatomic,retain) VSRemoteNotifier * setTopBoxStateRemoteNotifier;                            //@synthesize setTopBoxStateRemoteNotifier=_setTopBoxStateRemoteNotifier - In the implementation block
@property (getter=isRunningAnInternalBuild,nonatomic,readonly) BOOL runningAnInternalBuild; 
@property (getter=isRunningACustomerBuild,nonatomic,readonly) BOOL runningACustomerBuild; 
@property (nonatomic,readonly) unsigned long long deviceType; 
+(id)currentDevice;
+(BOOL)_getMobileGestaltBoolean:(CFStringRef)arg1 withCopyAnswer:(/*function pointer*/void*)arg2 ;
+(BOOL)_runningAnInternalBuildWithCopyAnswer:(/*function pointer*/void*)arg1 ;
+(BOOL)_runningACustomerBuildWithCopyAnswer:(/*function pointer*/void*)arg1 ;
+(unsigned long long)_deviceTypeWithCopyAnswer:(/*function pointer*/void*)arg1 ;
-(id)init;
-(unsigned long long)deviceType;
-(NSOperationQueue *)privateQueue;
-(void)setPrivateQueue:(NSOperationQueue *)arg1 ;
-(void)fetchDeviceManagedSetTopBoxProfileWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)isRunningAnInternalBuild;
-(BOOL)setIgnoreSetTopBoxProfile:(BOOL)arg1 ;
-(void)fetchSetTopBoxProfileWithCompletion:(/*^block*/id)arg1 ;
-(/*function pointer*/void*)copyAnswer;
-(VSRemoteNotifier *)setTopBoxStateRemoteNotifier;
-(id)developerIdentityProviderDeletionConfirmationMessage;
-(id)accountDeletionConfirmationMessageForIdentityProviderDisplayName:(id)arg1 ;
-(BOOL)isRunningACustomerBuild;
-(void)setCopyAnswer:(/*function pointer*/void*)arg1 ;
-(void)setSetTopBoxStateRemoteNotifier:(VSRemoteNotifier *)arg1 ;
@end

