/*
* Generated on Monday, March 1, 2021 at 2:32:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <PencilKit/PKUndoCommand.h>

@class NSArray;

@interface PKTransformStrokesCommand : PKUndoCommand {

	NSArray* _strokes;
	CGAffineTransform _strokeTransform;

}

@property (nonatomic,readonly) NSArray * strokes;                              //@synthesize strokes=_strokes - In the implementation block
@property (nonatomic,readonly) CGAffineTransform strokeTransform;              //@synthesize strokeTransform=_strokeTransform - In the implementation block
+(id)commandForTransforming:(id)arg1 drawing:(id)arg2 strokeTransform:(CGAffineTransform)arg3 ;
-(id)description;
-(NSArray *)strokes;
-(void)applyToDrawing:(id)arg1 ;
-(CGAffineTransform)strokeTransform;
-(id)invertedInDrawing:(id)arg1 ;
-(id)initWithStrokes:(id)arg1 drawingUUID:(id)arg2 actionName:(id)arg3 strokeTransform:(CGAffineTransform)arg4 ;
@end

