/*
* Generated on Monday, March 1, 2021 at 2:33:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/


@class CAMCaptureRequest;

@interface CAMPendingLocalPersistenceWrapper : NSObject {

	CAMCaptureRequest* _request;
	id _result;
	/*^block*/id _completionHandler;

}

@property (nonatomic,readonly) CAMCaptureRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) id result;                                //@synthesize result=_result - In the implementation block
@property (nonatomic,copy) id completionHandler;                         //@synthesize completionHandler=_completionHandler - In the implementation block
-(id)result;
-(CAMCaptureRequest *)request;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(id)initWithRequest:(id)arg1 result:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

