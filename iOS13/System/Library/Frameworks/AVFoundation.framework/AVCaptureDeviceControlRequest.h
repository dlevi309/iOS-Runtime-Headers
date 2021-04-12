/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
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
-(void)dealloc;
-(id)completionBlock;
-(int)errorCode;
-(void)setErrorCode:(int)arg1 ;
-(int)requestID;
-(id)_initWithCompletionBlock:(/*^block*/id)arg1 ;
@end

