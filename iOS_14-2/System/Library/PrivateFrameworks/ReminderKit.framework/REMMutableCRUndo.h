/*
* Generated on Thursday, January 14, 2021 at 2:23:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/


@class NSMutableArray;

@interface REMMutableCRUndo : NSObject {

	NSMutableArray* _undoBlocks;

}

@property (nonatomic,readonly) NSMutableArray * undoBlocks;              //@synthesize undoBlocks=_undoBlocks - In the implementation block
-(id)immutableCopy;
-(id)init;
-(NSMutableArray *)undoBlocks;
-(void)addUndoBlock:(/*^block*/id)arg1 ;
@end

