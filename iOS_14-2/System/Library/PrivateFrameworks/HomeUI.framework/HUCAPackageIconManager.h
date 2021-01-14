/*
* Generated on Thursday, January 14, 2021 at 2:24:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/


@protocol NAScheduler;
@class NSCache;

@interface HUCAPackageIconManager : NSObject {

	NSCache* _packageDataCache;
	NSCache* _packageReuseQueue;
	id<NAScheduler> _prefetchScheduler;

}

@property (nonatomic,retain) NSCache * packageDataCache;                     //@synthesize packageDataCache=_packageDataCache - In the implementation block
@property (nonatomic,retain) NSCache * packageReuseQueue;                    //@synthesize packageReuseQueue=_packageReuseQueue - In the implementation block
@property (nonatomic,retain) id<NAScheduler> prefetchScheduler;              //@synthesize prefetchScheduler=_prefetchScheduler - In the implementation block
+(id)sharedInstance;
-(id)init;
-(id)packageForIconDescriptor:(id)arg1 ;
-(void)reclaimPackage:(id)arg1 forIconDescriptor:(id)arg2 ;
-(void)setPackageDataCache:(NSCache *)arg1 ;
-(void)setPackageReuseQueue:(NSCache *)arg1 ;
-(void)setPrefetchScheduler:(id<NAScheduler>)arg1 ;
-(NSCache *)packageReuseQueue;
-(id)_loadPackageWithIconDescriptor:(id)arg1 ;
-(id)_queueForIconDescriptorIdentifier:(id)arg1 ;
-(id<NAScheduler>)prefetchScheduler;
-(id)_packageDataForIconDescriptor:(id)arg1 ;
-(NSCache *)packageDataCache;
-(id)prefetchIconDescriptors:(id)arg1 ;
@end

