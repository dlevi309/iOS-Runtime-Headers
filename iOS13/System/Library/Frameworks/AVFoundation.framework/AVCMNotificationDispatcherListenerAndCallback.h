/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


@class AVWeakReference;

@interface AVCMNotificationDispatcherListenerAndCallback : NSObject {

	AVWeakReference* _weakReferenceToListener;
	/*function pointer*/void* _callback;
	void* _callbackContextToken;

}

@property (nonatomic,readonly) id listener; 
@property (nonatomic,readonly) /*function pointer*/void* callback;              //@synthesize callback=_callback - In the implementation block
@property (assign,nonatomic) void* callbackContextToken;                        //@synthesize callbackContextToken=_callbackContextToken - In the implementation block
-(id)init;
-(void)dealloc;
-(id)listener;
-(/*function pointer*/void*)callback;
-(id)initWithWeakReferenceToListener:(id)arg1 callback:(/*function pointer*/void*)arg2 ;
-(void)setCallbackContextToken:(void*)arg1 ;
-(void*)callbackContextToken;
@end

