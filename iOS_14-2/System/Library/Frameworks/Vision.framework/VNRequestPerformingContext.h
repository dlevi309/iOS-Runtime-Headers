/*
* Generated on Thursday, January 14, 2021 at 2:23:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <libobjc.A.dylib/VNImageBufferProviding.h>

@class VNSession, VNRequestPerformer, VNImageBuffer, NSMapTable, VNObservationsCache, VNRequestForensics;

@interface VNRequestPerformingContext : NSObject <VNImageBufferProviding> {

	VNSession* _session;
	unsigned _qosClass;
	VNRequestPerformer* _requestPerformer_DO_NOT_DIRECTLY_ACCESS;
	VNImageBuffer* _imageBuffer_DO_NOT_DIRECTLY_ACCESS;
	NSMapTable* _requestToObservationsCacheKeyMap;
	VNObservationsCache* _observationsCache;
	VNRequestForensics* _requestForensics;

}

@property (readonly) VNSession * session; 
-(id)_observationsCacheKeyForRequest:(id)arg1 ;
-(void)recordSequencedObservationsForRequest:(id)arg1 ;
-(id)requestForensics;
-(id)initWithSession:(id)arg1 requestPerformer:(id)arg2 imageBuffer:(id)arg3 forensics:(id)arg4 observationsCache:(id)arg5 qosClass:(unsigned)arg6 ;
-(BOOL)performDependentRequests:(id)arg1 onBehalfOfRequest:(id)arg2 error:(id*)arg3 ;
-(VNSession *)session;
-(id)cachedObservationsForRequest:(id)arg1 ;
-(void)setModelRequestHandler:(id)arg1 ;
-(BOOL)cacheObservationsForRequest:(id)arg1 ;
-(id)requestPerformerAndReturnError:(id*)arg1 ;
-(id)modelRequestHandlerAndReturnError:(id*)arg1 ;
-(id)initWithSession:(id)arg1 requestPerformer:(id)arg2 imageBuffer:(id)arg3 forensics:(id)arg4 observationsCache:(id)arg5 ;
-(id)imageBufferAndReturnError:(id*)arg1 ;
-(unsigned)qosClass;
-(id)previousSequencedObservationsForRequest:(id)arg1 ;
@end

