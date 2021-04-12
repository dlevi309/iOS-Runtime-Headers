/*
* Generated on Thursday, January 14, 2021 at 2:24:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSArray *)strokes;
-(NSArray *)inks;
-(id)description;
-(NSArray *)oldInks;
-(void)applyToDrawing:(id)arg1 ;
-(id)invertedInDrawing:(id)arg1 ;
-(id)initWithStrokes:(id)arg1 drawingUUID:(id)arg2 actionName:(id)arg3 inks:(id)arg4 oldInks:(id)arg5 ;
@end

