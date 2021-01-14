/*
* Generated on Thursday, January 14, 2021 at 2:21:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <libobjc.A.dylib/GEOProtobufSessionTaskDelegate.h>

@class GEOProtobufSession, GEOProtobufSessionTask, NSString;

@interface GEORPProblemProvider : NSObject <GEOProtobufSessionTaskDelegate> {

	GEOProtobufSession* _protobufSession;
	GEOProtobufSessionTask* _submissionTask;
	GEOProtobufSessionTask* _statusTask;
	/*^block*/id _submissionErrorHandler;
	/*^block*/id _submissionFinishedHandler;
	/*^block*/id _statusErrorHandler;
	/*^block*/id _statusFinishedHandler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) GEOProtobufSession * protobufSession;               //@synthesize protobufSession=_protobufSession - In the implementation block
@property (nonatomic,retain) GEOProtobufSessionTask * submissionTask;              //@synthesize submissionTask=_submissionTask - In the implementation block
@property (nonatomic,retain) GEOProtobufSessionTask * statusTask;                  //@synthesize statusTask=_statusTask - In the implementation block
@property (nonatomic,copy) id submissionErrorHandler;                              //@synthesize submissionErrorHandler=_submissionErrorHandler - In the implementation block
@property (nonatomic,copy) id submissionFinishedHandler;                           //@synthesize submissionFinishedHandler=_submissionFinishedHandler - In the implementation block
@property (nonatomic,copy) id statusErrorHandler;                                  //@synthesize statusErrorHandler=_statusErrorHandler - In the implementation block
@property (nonatomic,copy) id statusFinishedHandler;                               //@synthesize statusFinishedHandler=_statusFinishedHandler - In the implementation block
-(void)cancelRequest;
-(id)init;
-(void)protobufSession:(id)arg1 didCompleteTask:(id)arg2 ;
-(id)cancelError;
-(void)setSubmissionTask:(GEOProtobufSessionTask *)arg1 ;
-(GEOProtobufSession *)protobufSession;
-(void)setSubmissionFinishedHandler:(id)arg1 ;
-(void)setSubmissionErrorHandler:(id)arg1 ;
-(GEOProtobufSessionTask *)submissionTask;
-(void)setStatusTask:(GEOProtobufSessionTask *)arg1 ;
-(void)setStatusFinishedHandler:(id)arg1 ;
-(void)setStatusErrorHandler:(id)arg1 ;
-(void)startSubmissionRequest:(id)arg1 finished:(/*^block*/id)arg2 error:(/*^block*/id)arg3 ;
-(void)startStatusRequest:(id)arg1 finished:(/*^block*/id)arg2 error:(/*^block*/id)arg3 ;
-(id)submissionErrorHandler;
-(id)submissionFinishedHandler;
-(id)statusErrorHandler;
-(id)statusFinishedHandler;
-(void)didCompleteSubmissionTask;
-(void)didCompleteStatusTask;
-(GEOProtobufSessionTask *)statusTask;
@end

