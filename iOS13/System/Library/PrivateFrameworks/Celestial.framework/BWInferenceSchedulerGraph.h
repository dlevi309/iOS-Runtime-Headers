/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/


@protocol BWInferenceJobProvider;
@class NSMapTable;

@interface BWInferenceSchedulerGraph : NSObject {

	id<BWInferenceJobProvider> _head;
	NSMapTable* _directedEdgesByNode;

}
-(void)dealloc;
-(void)visitProvidersWithBlock:(/*^block*/id)arg1 ;
-(void)enumerateVideoDestinationsFromJob:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)initWithHeadNode:(id)arg1 directedEdges:(id)arg2 ;
-(void)_visitJob:(id)arg1 withEnRouteAccumulation:(id)arg2 block:(/*^block*/id)arg3 ;
@end

