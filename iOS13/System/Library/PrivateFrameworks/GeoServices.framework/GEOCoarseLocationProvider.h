/*
* Generated on Monday, March 1, 2021 at 2:30:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface GEOCoarseLocationProvider : NSObject {

	NSObject*<OS_dispatch_queue> _workQueue;

}
-(id)init;
-(void)_fetchBasicCoarseEquivalentForLocation:(id)arg1 fallbackIsPermanent:(BOOL)arg2 callbackQueue:(id)arg3 callback:(/*^block*/id)arg4 ;
-(void)fetchCoarseEquivalentForLocation:(id)arg1 callbackQueue:(id)arg2 callback:(/*^block*/id)arg3 ;
@end

