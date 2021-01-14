/*
* Generated on Thursday, January 14, 2021 at 2:23:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSMutableDictionary *)seen;
-(id)init;
-(void)updateTopoIDRange:(TopoIDRange)arg1 toNewRangeID:(TopoIDRange)arg2 ;
-(BOOL)hasTopoIDsThatCanChange;
-(BOOL)addToGroup:(id)arg1 ;
-(void)closeGroup;
-(BOOL)addSeenRange:(TopoIDRange)arg1 ;
-(NSMutableArray *)commands;
-(NSString *)description;
-(void)setCommands:(NSMutableArray *)arg1 ;
-(void)addCommand:(id)arg1 ;
-(void)applyToString:(id)arg1 ;
-(void)setSeen:(NSMutableDictionary *)arg1 ;
@end

