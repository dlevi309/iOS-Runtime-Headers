/*
* Generated on Thursday, January 14, 2021 at 2:23:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


@protocol BWInferenceJobProvider;
@class NSMapTable;

@interface BWInferenceSchedulerGraph : NSObject {

	id<BWInferenceJobProvider> _head;
	NSMapTable* _directedEdgesByNode;

}
-(void)enumerateVideoDestinationsFromJob:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)_visitJob:(id)arg1 withEnRouteAccumulation:(id)arg2 block:(/*^block*/id)arg3 ;
-(void)visitProvidersWithBlock:(/*^block*/id)arg1 ;
-(id)initWithHeadNode:(id)arg1 directedEdges:(id)arg2 ;
-(void)dealloc;
@end

