/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

#import <ReminderKit/ReminderKit-Structs.h>
#import <libobjc.A.dylib/TTMergeableStringUndoCommand.h>

@class NSMutableDictionary, NSMutableArray, NSString;

@interface TTMergeableStringUndoGroup : NSObject <TTMergeableStringUndoCommand> {

	NSMutableDictionary* _seen;
	NSMutableArray* _commands;

}

@property (nonatomic,retain) NSMutableDictionary * seen;              //@synthesize seen=_seen - In the implementation block
@property (nonatomic,retain) NSMutableArray * commands;               //@synthesize commands=_commands - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSString *)description;
-(void)applyToString:(id)arg1 ;
-(NSMutableArray *)commands;
-(void)setCommands:(NSMutableArray *)arg1 ;
-(void)updateTopoIDRange:(TopoIDRange)arg1 toNewRangeID:(TopoIDRange)arg2 ;
-(BOOL)hasTopoIDsThatCanChange;
-(void)setSeen:(NSMutableDictionary *)arg1 ;
-(BOOL)addToGroup:(id)arg1 ;
-(NSMutableDictionary *)seen;
-(void)closeGroup;
-(void)addCommand:(id)arg1 ;
-(BOOL)addSeenRange:(TopoIDRange)arg1 ;
@end

