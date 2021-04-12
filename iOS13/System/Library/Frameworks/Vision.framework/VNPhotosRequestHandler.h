/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <libobjc.A.dylib/VNRequestWarming.h>
#import <libobjc.A.dylib/VNRequestCancelling.h>

@class VNRequestPerformer, NSObject;

@interface VNPhotosRequestHandler : NSObject <VNRequestWarming, VNRequestCancelling> {

	VNRequestPerformer* _requestPerformer;
	/*^block*/id _burstAnalysisLoggingCallback;
	NSObject* _modelContextObject;

}

@property (nonatomic,retain) NSObject * modelContextObject;              //@synthesize modelContextObject=_modelContextObject - In the implementation block
@property (nonatomic,copy) id burstAnalysisLoggingCallback;              //@synthesize burstAnalysisLoggingCallback=_burstAnalysisLoggingCallback - In the implementation block
-(id)init;
-(BOOL)performRequests:(id)arg1 error:(id*)arg2 ;
-(void)cancelAllRequests;
-(BOOL)prepareForPerformingRequestsOfClass:(id)arg1 error:(id*)arg2 ;
-(BOOL)prepareForPerformingRequests:(id)arg1 error:(id*)arg2 ;
-(id)burstAnalysisLoggingCallback;
-(void)setBurstAnalysisLoggingCallback:(id)arg1 ;
-(NSObject *)modelContextObject;
-(void)setModelContextObject:(NSObject *)arg1 ;
@end

