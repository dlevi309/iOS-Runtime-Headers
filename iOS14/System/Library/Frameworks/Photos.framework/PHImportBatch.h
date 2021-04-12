/*
* Generated on Thursday, January 14, 2021 at 2:22:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSObject*<OS_dispatch_semaphore>)semaphore;
-(id)init;
-(NSMutableArray *)records;
-(PHImportTimerCollection *)timers;
-(double)duration;
@end

