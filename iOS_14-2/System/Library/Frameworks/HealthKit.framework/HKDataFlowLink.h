/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)removeSource:(id)arg1 ;
-(id)description;
-(void)addDestination:(id)arg1 ;
-(void)removeDestination:(id)arg1 ;
-(id<HKDataFlowLinkProcessor>)processor;
-(void)source:(id)arg1 didAddUpstreamSource:(id)arg2 ;
-(Protocol *)sourceProtocol;
-(id)allSourceProcessors;
-(id)destinationProcessorsConformingToProtocol:(id)arg1 ;
-(id)allDestinationProcessors;
-(void)destination:(id)arg1 didAddDownstreamDestination:(id)arg2 ;
-(id)initWithProcessor:(id)arg1 sourceProtocol:(id)arg2 destinationProtocol:(id)arg3 loggingCategory:(id)arg4 ;
-(void)sendToDestinationProcessors:(/*^block*/id)arg1 ;
-(Protocol *)destinationProtocol;
-(void)addSource:(id)arg1 ;
@end

