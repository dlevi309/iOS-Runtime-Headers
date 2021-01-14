/*
* Generated on Thursday, January 14, 2021 at 2:27:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)startListening;
-(void)stopListening;
-(id)init;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setInvalidationHandler:(id)arg1 ;
-(void)startListeningWithError:(id*)arg1 ;
-(id)initWithConfigurationData:(id)arg1 ;
-(void)setRetrievedDataHandler:(id)arg1 ;
-(BOOL)getResultData:(id*)arg1 ;
-(id)invalidationHandler;
-(id)retrievedDataHandler;
-(id)initWithCodecConfiguration:(id)arg1 ;
@end

