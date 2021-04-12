/*
* Generated on Monday, March 1, 2021 at 2:32:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PKUndoCommand.h>

@class NSArray;

@interface PKModifyStrokesCommand : PKUndoCommand {

	BOOL _hide;
	NSArray* _strokes;

}

@property (nonatomic,readonly) NSArray * strokes;              //@synthesize strokes=_strokes - In the implementation block
@property (nonatomic,readonly) BOOL hide;                      //@synthesize hide=_hide - In the implementation block
+(id)commandForMakingStrokeVisible:(id)arg1 drawing:(id)arg2 hiding:(BOOL)arg3 ;
+(id)commandForErasingStrokes:(id)arg1 drawing:(id)arg2 ;
+(id)commandForMakingStrokesVisible:(id)arg1 drawing:(id)arg2 ;
+(id)commandForErasingAllStrokesInDrawing:(id)arg1 ;
-(id)description;
-(BOOL)hide;
-(NSArray *)strokes;
-(void)applyToDrawing:(id)arg1 ;
-(id)invertedInDrawing:(id)arg1 ;
-(id)initWithStrokes:(id)arg1 drawingUUID:(id)arg2 actionName:(id)arg3 hiding:(BOOL)arg4 ;
@end

