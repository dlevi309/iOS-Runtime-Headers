/*
* Generated on Thursday, January 14, 2021 at 2:21:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <libobjc.A.dylib/_MPStateDumpPropertyListTransformable.h>

@protocol OS_dispatch_queue, MPRemoteCommandDelegate_Internal, MPRemoteCommandDelegate_Private;
@class NSObject, NSMutableDictionary, NSString;

@interface MPRemoteCommand : NSObject <_MPStateDumpPropertyListTransformable> {

	NSObject*<OS_dispatch_queue> _serialQueue;
	NSMutableDictionary* _handlers;
	BOOL _enabled;
	BOOL _observing;
	BOOL _skipSerializedEventDelivery;
	unsigned _mediaRemoteCommandType;
	id<MPRemoteCommandDelegate_Internal> _commandCenterDelegate;
	id<MPRemoteCommandDelegate_Private> _delegate;

}

@property (assign,nonatomic,__weak) id<MPRemoteCommandDelegate_Internal> commandCenterDelegate;              //@synthesize commandCenterDelegate=_commandCenterDelegate - In the implementation block
@property (assign,getter=isObserving,nonatomic) BOOL observing;                                              //@synthesize observing=_observing - In the implementation block
@property (nonatomic,readonly) BOOL hasTargets; 
@property (getter=isSupported,nonatomic,readonly) BOOL supported; 
@property (getter=isSupportedAndEnabled,nonatomic,readonly) BOOL supportedAndEnabled; 
@property (nonatomic,readonly) unsigned mediaRemoteCommandType;                                              //@synthesize mediaRemoteCommandType=_mediaRemoteCommandType - In the implementation block
@property (assign,nonatomic,__weak) id<MPRemoteCommandDelegate_Private> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL skipSerializedEventDelivery;                                               //@synthesize skipSerializedEventDelivery=_skipSerializedEventDelivery - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                                                  //@synthesize enabled=_enabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isSupported;
-(void)removeTarget:(id)arg1 action:(SEL)arg2 ;
-(id<MPRemoteCommandDelegate_Private>)delegate;
-(BOOL)hasTargets;
-(void)setObserving:(BOOL)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)removeTarget:(id)arg1 ;
-(id)newCommandEvent;
-(BOOL)isSupportedForContentItemIdentifier:(id)arg1 ;
-(BOOL)isEnabledForContentItemIdentifier:(id)arg1 ;
-(id)addTargetWithHandler:(/*^block*/id)arg1 ;
-(BOOL)isSupportedAndEnabled;
-(void)invokeCommandWithEvent:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void*)createCommandInfoRepresentation;
-(void)notifyPropagatablePropertyChanged;
-(id)newSeekCommandEventWithType:(unsigned long long)arg1 ;
-(id)newCommandEventWithContentItemIdentifier:(id)arg1 ;
-(id)newCommandEventWithPlaybackQueueOffset:(long long)arg1 ;
-(id)newCommandEventWithCommandType:(unsigned)arg1 options:(id)arg2 ;
-(id<MPRemoteCommandDelegate_Internal>)commandCenterDelegate;
-(void)setCommandCenterDelegate:(id<MPRemoteCommandDelegate_Internal>)arg1 ;
-(unsigned)mediaRemoteCommandType;
-(BOOL)skipSerializedEventDelivery;
-(void)setSkipSerializedEventDelivery:(BOOL)arg1 ;
-(BOOL)isObserving;
-(void)setDelegate:(id<MPRemoteCommandDelegate_Private>)arg1 ;
-(NSString *)description;
-(id)_stateDumpObject;
-(id)_mediaRemoteCommandInfoOptions;
-(BOOL)isEnabled;
-(void)addTarget:(id)arg1 action:(SEL)arg2 ;
-(id)initWithMediaRemoteCommandType:(unsigned)arg1 ;
@end

