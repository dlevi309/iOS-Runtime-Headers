/*
* Generated on Thursday, January 14, 2021 at 2:26:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
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

