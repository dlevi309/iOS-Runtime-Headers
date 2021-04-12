/*
* Generated on Monday, March 1, 2021 at 2:32:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PKUndoCommand.h>

@class NSArray;

@interface PKModifyStrokeInkCommand : PKUndoCommand {

	NSArray* _strokes;
	NSArray* _inks;
	NSArray* _oldInks;

}

@property (nonatomic,readonly) NSArray * strokes;              //@synthesize strokes=_strokes - In the implementation block
@property (nonatomic,readonly) NSArray * inks;                 //@synthesize inks=_inks - In the implementation block
@property (nonatomic,readonly) NSArray * oldInks;              //@synthesize oldInks=_oldInks - In the implementation block
+(id)commandForModifyingStrokes:(id)arg1 drawing:(id)arg2 inks:(id)arg3 ;
-(id)description;
-(NSArray *)strokes;
-(void)applyToDrawing:(id)arg1 ;
-(id)invertedInDrawing:(id)arg1 ;
-(NSArray *)inks;
-(id)initWithStrokes:(id)arg1 drawingUUID:(id)arg2 actionName:(id)arg3 inks:(id)arg4 oldInks:(id)arg5 ;
-(NSArray *)oldInks;
@end

