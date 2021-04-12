/*
* Generated on Thursday, January 14, 2021 at 2:26:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/


@class CAMStillImageCaptureRequest, NSMutableArray, NSArray;

@interface CAMCaptureRequestInfo : NSObject {

	CAMStillImageCaptureRequest* _request;
	NSMutableArray* __receivedCallbacks;
	unsigned long long __userInitiationTime;

}

@property (nonatomic,readonly) NSMutableArray * _receivedCallbacks;                 //@synthesize _receivedCallbacks=__receivedCallbacks - In the implementation block
@property (nonatomic,readonly) unsigned long long _userInitiationTime;              //@synthesize _userInitiationTime=__userInitiationTime - In the implementation block
@property (nonatomic,readonly) CAMStillImageCaptureRequest * request;               //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) NSArray * callbackReceipts; 
-(unsigned long long)_userInitiationTime;
-(NSMutableArray *)_receivedCallbacks;
-(CAMStillImageCaptureRequest *)request;
-(NSArray *)callbackReceipts;
-(id)initWithRequest:(id)arg1 ;
-(void)didReceiveCallback:(long long)arg1 ;
@end

