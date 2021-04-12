/*
* Generated on Monday, March 1, 2021 at 2:30:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/


@protocol CNScheduler, CNSchedulerProvider;
@interface CNUIMapTileGenerator : NSObject {

	/*^block*/id _geocoderProvider;
	/*^block*/id _snapshotterProvider;
	id<CNScheduler> _workQueue;
	id<CNSchedulerProvider> _schedulerProvider;

}

@property (nonatomic,copy,readonly) id geocoderProvider;                                    //@synthesize geocoderProvider=_geocoderProvider - In the implementation block
@property (nonatomic,copy,readonly) id snapshotterProvider;                                 //@synthesize snapshotterProvider=_snapshotterProvider - In the implementation block
@property (nonatomic,copy,readonly) id<CNScheduler> workQueue;                              //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,copy,readonly) id<CNSchedulerProvider> schedulerProvider;              //@synthesize schedulerProvider=_schedulerProvider - In the implementation block
+(id)defaultImage;
+(id)mapTileImagesForPlacemark:(id)arg1 snapshotterProvider:(/*^block*/id)arg2 scheduler:(id)arg3 ;
+(id)placemarkForAddress:(id)arg1 geocoderProvider:(/*^block*/id)arg2 scheduler:(id)arg3 ;
-(id)init;
-(id<CNScheduler>)workQueue;
-(id<CNSchedulerProvider>)schedulerProvider;
-(id)initWithGeocoderProvider:(/*^block*/id)arg1 snapshotterProvider:(/*^block*/id)arg2 schedulerProvider:(id)arg3 ;
-(id)tilesForAddress:(id)arg1 ;
-(id)geocoderProvider;
-(id)snapshotterProvider;
@end

