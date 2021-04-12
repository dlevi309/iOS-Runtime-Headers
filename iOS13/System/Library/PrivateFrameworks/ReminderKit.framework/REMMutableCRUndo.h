/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/


@class NSMutableArray;

@interface REMMutableCRUndo : NSObject {

	NSMutableArray* _undoBlocks;

}

@property (nonatomic,readonly) NSMutableArray * undoBlocks;              //@synthesize undoBlocks=_undoBlocks - In the implementation block
-(id)init;
-(id)immutableCopy;
-(NSMutableArray *)undoBlocks;
-(void)addUndoBlock:(/*^block*/id)arg1 ;
@end

