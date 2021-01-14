/*
* Generated on Thursday, January 14, 2021 at 2:23:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <libobjc.A.dylib/VNRequestWarming.h>
#import <libobjc.A.dylib/VNRequestCancelling.h>

@class VNSession, VNRequestPerformer, VNObservationsCache, NSObject;

@interface VNPhotosRequestHandler : NSObject <VNRequestWarming, VNRequestCancelling> {

	VNSession* _session;
	VNRequestPerformer* _requestPerformer;
	VNObservationsCache* _observationsCache;
	NSObject* modelContextObject;
	/*^block*/id _burstAnalysisLoggingCallback;

}

@property (retain) NSObject * modelContextObject; 
@property (nonatomic,copy) id burstAnalysisLoggingCallback;              //@synthesize burstAnalysisLoggingCallback=_burstAnalysisLoggingCallback - In the implementation block
+(void)forcedCleanup;
+(void)requestForcedCleanup;
+(void)requestForcedCleanupWithOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)requestForcedCleanupWithOptions:(id)arg1 ;
+(void)forcedCleanupWithOptions:(id)arg1 ;
-(id)initWithSession:(id)arg1 ;
-(id)init;
-(BOOL)prepareForPerformingRequests:(id)arg1 error:(id*)arg2 ;
-(void)cancelAllRequests;
-(BOOL)performRequests:(id)arg1 gatheredForensics:(id*)arg2 error:(id*)arg3 ;
-(BOOL)performRequests:(id)arg1 error:(id*)arg2 ;
-(BOOL)prepareForPerformingRequestsOfClass:(id)arg1 error:(id*)arg2 ;
-(NSObject *)modelContextObject;
-(void)setModelContextObject:(NSObject *)arg1 ;
-(id)burstAnalysisLoggingCallback;
-(void)setBurstAnalysisLoggingCallback:(id)arg1 ;
@end

