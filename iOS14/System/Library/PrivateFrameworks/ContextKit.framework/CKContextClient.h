/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContextKit.framework/ContextKit
*/

#import <libobjc.A.dylib/CKContextServiceUpdateNotifications.h>

@protocol OS_dispatch_semaphore;
@class NSSet, NSString, NSMutableArray, NSObject, CKContextSemaphore;

@interface CKContextClient : NSObject <CKContextServiceUpdateNotifications> {

	NSSet* _capabilities;
	NSString* _indexVersionId;
	NSMutableArray* _updateHandlers;
	NSObject*<OS_dispatch_semaphore> _sema_capabilities;
	CKContextSemaphore* _serviceSemaphore;
	unsigned long long _defaultRequestType;

}

@property (nonatomic,readonly) unsigned long long defaultRequestType;              //@synthesize defaultRequestType=_defaultRequestType - In the implementation block
@property (nonatomic,readonly) NSSet * capabilities; 
+(id)new;
+(void)initialize;
+(double)timeIntervalBetweenMachTime:(unsigned long long)arg1 andMachTime:(unsigned long long)arg2 ;
+(id)clientWithDefaultRequestType:(unsigned long long)arg1 ;
+(void)_observeApplicationStateNotifications;
+(BOOL)isLikelyUnsolicitedUserInteraction;
-(NSSet *)capabilities;
-(id)retrieveCapabilites;
-(id)init;
-(id)indexVersionId;
-(void)registerConfigurationUpdateHandler:(/*^block*/id)arg1 ;
-(void)capabilitiesWithReply:(/*^block*/id)arg1 ;
-(id)initWithDefaultRequestType:(unsigned long long)arg1 ;
-(void)ancestorsForTopics:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)ensureFullyInitialized;
-(void)_updateCachedCapabilites;
-(long long)tryAcquireServiceSemaphore;
-(void)workWithServiceSemaphore:(/*^block*/id)arg1 ;
-(id)newRequest;
-(void)didReceiveCKContextServiceUpdateNotification;
-(unsigned long long)defaultRequestType;
@end

