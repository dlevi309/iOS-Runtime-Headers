/*
* Generated on Thursday, January 14, 2021 at 2:26:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/


@class CAMCaptureRequest, NSDate, NSMutableDictionary, NSString;

@interface CAMPendingRemotePersistenceWrapper : NSObject {

	CAMCaptureRequest* _request;
	NSDate* _creationDate;
	NSMutableDictionary* _job;
	NSString* _loggingIdentifier;
	/*^block*/id _completionHandler;

}

@property (nonatomic,readonly) CAMCaptureRequest * request;                    //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) NSDate * creationDate;                          //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * job;                      //@synthesize job=_job - In the implementation block
@property (nonatomic,copy,readonly) NSString * loggingIdentifier;              //@synthesize loggingIdentifier=_loggingIdentifier - In the implementation block
@property (nonatomic,copy) id completionHandler;                               //@synthesize completionHandler=_completionHandler - In the implementation block
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(NSMutableDictionary *)job;
-(CAMCaptureRequest *)request;
-(NSDate *)creationDate;
-(NSString *)loggingIdentifier;
-(id)initWithRequest:(id)arg1 creationDate:(id)arg2 job:(id)arg3 loggingIdentifier:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
@end

