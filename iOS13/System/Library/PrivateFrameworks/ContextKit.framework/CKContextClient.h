/*
* Generated on Monday, March 1, 2021 at 2:32:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContextKit.framework/ContextKit
*/


@protocol OS_dispatch_queue, OS_dispatch_semaphore;
@class NSObject, NSSet, NSString, NSMutableArray, CKContextSemaphore;

@interface CKContextClient : NSObject {

	NSObject*<OS_dispatch_queue> _notificationsQueue;
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
+(id)clientWithDefaultRequestType:(unsigned long long)arg1 ;
-(id)init;
-(NSSet *)capabilities;
-(void)_handleConfigurationUpdate;
-(void)_updateCachedCapabilites;
-(id)retrieveCapabilites;
-(id)initWithDefaultRequestType:(unsigned long long)arg1 ;
-(id)newRequest;
-(void)capabilitiesWithReply:(/*^block*/id)arg1 ;
-(void)ancestorsForTopics:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)ensureFullyInitialized;
-(void)registerConfigurationUpdateHandler:(/*^block*/id)arg1 ;
-(id)indexVersionId;
-(BOOL)hasServiceSemaphore;
-(BOOL)tryAcquireServiceSemaphore;
-(void)workWithServiceSemaphore:(/*^block*/id)arg1 ;
-(unsigned long long)defaultRequestType;
@end

