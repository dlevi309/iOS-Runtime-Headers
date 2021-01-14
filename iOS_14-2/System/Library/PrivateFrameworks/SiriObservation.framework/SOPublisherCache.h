/*
* Generated on Thursday, January 14, 2021 at 2:28:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriObservation.framework/SiriObservation
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface SOPublisherCache : NSObject {

	NSMutableDictionary* _cache;
	NSObject*<OS_dispatch_queue> _queue;

}
+(id)sharedInstance;
-(id)init;
-(void)setPublisher:(id)arg1 forSnapshotType:(Class)arg2 ;
-(id)publisherForSnapshotType:(Class)arg1 ;
-(void)removePublisherForSnapshotType:(Class)arg1 ;
@end

