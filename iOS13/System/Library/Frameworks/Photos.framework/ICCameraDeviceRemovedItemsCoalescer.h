/*
* Generated on Monday, March 1, 2021 at 2:31:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/


@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSObject, NSDate, NSMutableArray, PHImportDeviceSource;

@interface ICCameraDeviceRemovedItemsCoalescer : NSObject {

	NSObject*<OS_dispatch_source> _timer;
	NSDate* _lastNotify;
	NSMutableArray* _items;
	PHImportDeviceSource* _source;
	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _block;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_source> timer;               //@synthesize timer=_timer - In the implementation block
@property (nonatomic,retain) NSDate * lastNotify;                               //@synthesize lastNotify=_lastNotify - In the implementation block
@property (nonatomic,retain) NSMutableArray * items;                            //@synthesize items=_items - In the implementation block
@property (assign,nonatomic,__weak) PHImportDeviceSource * source;              //@synthesize source=_source - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                //@synthesize queue=_queue - In the implementation block
@property (nonatomic,copy) id block;                                            //@synthesize block=_block - In the implementation block
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setSource:(PHImportDeviceSource *)arg1 ;
-(PHImportDeviceSource *)source;
-(id)block;
-(NSObject*<OS_dispatch_source>)timer;
-(void)setTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSMutableArray *)items;
-(void)setItems:(NSMutableArray *)arg1 ;
-(void)setBlock:(id)arg1 ;
-(id)initWithDevice:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)coalesceItems:(id)arg1 ;
-(NSDate *)lastNotify;
-(void)setLastNotify:(NSDate *)arg1 ;
@end

