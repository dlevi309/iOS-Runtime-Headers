/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/


@class NSArray, NSString, ICDrawingUndoCheckPoint;

@interface ICDrawingUndoCommand : NSObject {

	BOOL _hide;
	NSArray* _commands;
	NSString* _actionName;
	ICDrawingUndoCheckPoint* _checkPoint;

}

@property (nonatomic,retain) NSArray * commands;                                //@synthesize commands=_commands - In the implementation block
@property (nonatomic,retain) NSString * actionName;                             //@synthesize actionName=_actionName - In the implementation block
@property (nonatomic,readonly) NSArray * visibleCommands; 
@property (assign,nonatomic) BOOL hide;                                         //@synthesize hide=_hide - In the implementation block
@property (nonatomic,retain) ICDrawingUndoCheckPoint * checkPoint;              //@synthesize checkPoint=_checkPoint - In the implementation block
-(void)setActionName:(NSString *)arg1 ;
-(BOOL)hide;
-(NSArray *)commands;
-(void)setCommands:(NSArray *)arg1 ;
-(NSString *)actionName;
-(void)setHide:(BOOL)arg1 ;
-(ICDrawingUndoCheckPoint *)checkPoint;
-(void)setCheckPoint:(ICDrawingUndoCheckPoint *)arg1 ;
-(double)renderCost;
-(NSArray *)visibleCommands;
-(id)undoCommandHidden:(BOOL)arg1 ;
@end

