/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/


#import <ReminderKit/ReminderKit-Structs.h>
@class NSArray;

@interface REMCRUndo : NSObject {

	NSArray* _undoBlocks;

}

@property (nonatomic,readonly) NSArray * undoBlocks;              //@synthesize undoBlocks=_undoBlocks - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)undoBlocks;
-(id)initWithUndoBlocks:(id)arg1 ;
@end

