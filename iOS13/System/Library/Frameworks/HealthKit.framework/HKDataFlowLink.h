/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/


@protocol OS_os_log, HKDataFlowLinkProcessor;
#import <HealthKit/HealthKit-Structs.h>
@class NSHashTable, NSObject, Protocol;

@interface HKDataFlowLink : NSObject {

	NSHashTable* _sources;
	NSHashTable* _destinations;
	NSObject*<OS_os_log> _category;
	os_unfair_lock_s _lock;
	id<HKDataFlowLinkProcessor> _processor;
	Protocol* _sourceProtocol;
	Protocol* _destinationProtocol;

}

@property (nonatomic,__weak,readonly) id<HKDataFlowLinkProcessor> processor;              //@synthesize processor=_processor - In the implementation block
@property (nonatomic,readonly) Protocol * sourceProtocol;                                 //@synthesize sourceProtocol=_sourceProtocol - In the implementation block
@property (nonatomic,readonly) Protocol * destinationProtocol;                            //@synthesize destinationProtocol=_destinationProtocol - In the implementation block
-(id)description;
-(void)addSource:(id)arg1 ;
-(void)removeSource:(id)arg1 ;
-(void)addDestination:(id)arg1 ;
-(id<HKDataFlowLinkProcessor>)processor;
-(void)source:(id)arg1 didAddUpstreamSource:(id)arg2 ;
-(void)removeDestination:(id)arg1 ;
-(id)destinationProcessorsConformingToProtocol:(id)arg1 ;
-(void)destination:(id)arg1 didAddDownstreamDestination:(id)arg2 ;
-(id)initWithProcessor:(id)arg1 sourceProtocol:(id)arg2 destinationProtocol:(id)arg3 loggingCategory:(id)arg4 ;
-(id)allSourceProcessors;
-(id)allDestinationProcessors;
-(void)sendToDestinationProcessors:(/*^block*/id)arg1 ;
-(Protocol *)sourceProtocol;
-(Protocol *)destinationProtocol;
@end

