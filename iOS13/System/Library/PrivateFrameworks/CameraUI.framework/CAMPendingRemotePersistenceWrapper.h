/*
* Generated on Monday, March 1, 2021 at 2:33:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/


@class CAMCaptureRequest, NSDate, NSMutableDictionary;

@interface CAMPendingRemotePersistenceWrapper : NSObject {

	CAMCaptureRequest* _request;
	NSDate* _creationDate;
	NSMutableDictionary* _job;
	/*^block*/id _completionHandler;

}

@property (nonatomic,readonly) CAMCaptureRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) NSDate * creationDate;                    //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * job;                //@synthesize job=_job - In the implementation block
@property (nonatomic,copy) id completionHandler;                         //@synthesize completionHandler=_completionHandler - In the implementation block
-(NSDate *)creationDate;
-(CAMCaptureRequest *)request;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(NSMutableDictionary *)job;
-(id)initWithRequest:(id)arg1 creationDate:(id)arg2 job:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
@end

