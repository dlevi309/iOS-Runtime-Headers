/*
* Generated on Thursday, January 14, 2021 at 2:22:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@protocol OS_dispatch_queue;
#import <PhotosUICore/PhotosUICore-Structs.h>
@class PXPlacesSnapshotFactory, NSObject;

@interface PXPlacesSearchProvider : NSObject {

	PXPlacesSnapshotFactory* _factory;
	NSObject*<OS_dispatch_queue> _serialQueue;

}

@property (nonatomic,retain) PXPlacesSnapshotFactory * factory;                     //@synthesize factory=_factory - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serialQueue;              //@synthesize serialQueue=_serialQueue - In the implementation block
-(id)init;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(void)setSerialQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(PXPlacesSnapshotFactory *)factory;
-(void)requestMapSnapshotForQuery:(id)arg1 ofSize:(CGSize)arg2 traitCollectionForSnapshot:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)setFactory:(PXPlacesSnapshotFactory *)arg1 ;
@end

