/*
* Generated on Thursday, January 14, 2021 at 2:22:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithDevice:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)coalesceItems:(id)arg1 ;
@end

