/*
* Generated on Thursday, January 14, 2021 at 2:28:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
*/

#import <RemoteManagement/RMConfigurationSubscriberClient.h>

@protocol RMConfigurationEventStreamSubscriberDelegate;
@class NSObject, NSArray;

@interface RMConfigurationEventStreamSubscriber : RMConfigurationSubscriberClient {

	NSObject* _delegationLock;
	NSArray* _configurationTypes;
	id<RMConfigurationEventStreamSubscriberDelegate> _delegate;
	id _eventStreamObserver;

}

@property (nonatomic,retain) id eventStreamObserver;                                                        //@synthesize eventStreamObserver=_eventStreamObserver - In the implementation block
@property (nonatomic,readonly) NSArray * configurationTypes;                                                //@synthesize configurationTypes=_configurationTypes - In the implementation block
@property (assign,nonatomic,__weak) id<RMConfigurationEventStreamSubscriberDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(void)_setupEventHandler;
+(id)_eventDescriptorByNameForEventStreamNamed:(id)arg1 ;
+(id)configuredConfigurationTypes;
-(id)init;
-(id<RMConfigurationEventStreamSubscriberDelegate>)delegate;
-(void)start;
-(void)_setupEventHandler;
-(void)setDelegate:(id<RMConfigurationEventStreamSubscriberDelegate>)arg1 ;
-(void)_handleEvent:(id)arg1 ;
-(void)dealloc;
-(NSArray *)configurationTypes;
-(void)_fetchConfigurationsAndNotifyDelegateIfNeeded:(id)arg1 ;
-(void)setEventStreamObserver:(id)arg1 ;
-(void)_delegateDidFailToFetchConfigurationsWithTypes:(id)arg1 error:(id)arg2 ;
-(void)_delegateDidFetchConfigurationsByType:(id)arg1 ;
-(id)eventStreamObserver;
@end

