/*
* Generated on Monday, March 1, 2021 at 2:30:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/


@protocol OS_dispatch_semaphore;
@class NSDate, NSMutableArray, PHImportTimerCollection, NSObject;

@interface PHImportBatch : NSObject {

	NSDate* _start;
	NSMutableArray* _records;
	PHImportTimerCollection* _timers;
	NSObject*<OS_dispatch_semaphore> _semaphore;

}

@property (nonatomic,readonly) NSMutableArray * records;                                //@synthesize records=_records - In the implementation block
@property (nonatomic,readonly) double duration; 
@property (nonatomic,readonly) PHImportTimerCollection * timers;                        //@synthesize timers=_timers - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_semaphore> semaphore;              //@synthesize semaphore=_semaphore - In the implementation block
-(id)init;
-(double)duration;
-(NSMutableArray *)records;
-(NSObject*<OS_dispatch_semaphore>)semaphore;
-(PHImportTimerCollection *)timers;
@end

