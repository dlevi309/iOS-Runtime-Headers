/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
*/


@interface AVCaptureDeviceControlRequest : NSObject {

	/*^block*/id _completionBlock;
	int _requestID;
	int _errorCode;

}

@property (nonatomic,copy,readonly) id completionBlock;              //@synthesize completionBlock=_completionBlock - In the implementation block
@property (nonatomic,readonly) int requestID;                        //@synthesize requestID=_requestID - In the implementation block
@property (assign,nonatomic) int errorCode;                          //@synthesize errorCode=_errorCode - In the implementation block
+(id)deviceControlRequestWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)completionBlock;
-(int)errorCode;
-(int)requestID;
-(id)_initWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)setErrorCode:(int)arg1 ;
-(void)dealloc;
@end

