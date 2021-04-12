/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/


@class NSDate;

@interface ARRenderSyncSchedulerBlockWrapper : NSObject {

	NSDate* _entryTimestamp;
	/*^block*/id _block;

}

@property (nonatomic,retain) NSDate * entryTimestamp;              //@synthesize entryTimestamp=_entryTimestamp - In the implementation block
@property (nonatomic,copy) id block;                               //@synthesize block=_block - In the implementation block
-(id)block;
-(void)setBlock:(id)arg1 ;
-(void)setEntryTimestamp:(NSDate *)arg1 ;
-(NSDate *)entryTimestamp;
@end

