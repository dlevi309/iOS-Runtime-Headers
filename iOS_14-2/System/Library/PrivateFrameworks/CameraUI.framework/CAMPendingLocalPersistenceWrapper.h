/*
* Generated on Thursday, January 14, 2021 at 2:26:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(CAMCaptureRequest *)request;
-(id)result;
-(id)initWithRequest:(id)arg1 result:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

