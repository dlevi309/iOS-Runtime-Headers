/*
* Generated on Monday, March 1, 2021 at 2:34:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AudioPasscode.framework/AudioPasscode
*/


@protocol OS_dispatch_queue;
@class AUPasscodeCodecConfiguration, APCListenerEngine, APCListenerResultData, NSObject;

@interface APCListener : NSObject {

	AUPasscodeCodecConfiguration* _codecConfig;
	APCListenerEngine* _listenerEngine;
	APCListenerResultData* _resultData;
	/*^block*/id _retrievedDataHandler;
	/*^block*/id _invalidationHandler;
	NSObject*<OS_dispatch_queue> _dispatchQueue;

}

@property (nonatomic,copy) id retrievedDataHandler;                                   //@synthesize retrievedDataHandler=_retrievedDataHandler - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
+(id)capabilityData;
-(id)init;
-(void)setInvalidationHandler:(id)arg1 ;
-(id)invalidationHandler;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)startListening;
-(void)stopListening;
-(void)startListeningWithError:(id*)arg1 ;
-(id)initWithConfigurationData:(id)arg1 ;
-(void)setRetrievedDataHandler:(id)arg1 ;
-(BOOL)getResultData:(id*)arg1 ;
-(id)retrievedDataHandler;
-(id)initWithCodecConfiguration:(id)arg1 ;
@end

