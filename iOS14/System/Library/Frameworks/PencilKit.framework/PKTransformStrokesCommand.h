/*
* Generated on Thursday, January 14, 2021 at 2:24:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSArray *)strokes;
-(id)description;
-(CGAffineTransform)strokeTransform;
-(void)applyToDrawing:(id)arg1 ;
-(id)invertedInDrawing:(id)arg1 ;
-(id)initWithStrokes:(id)arg1 drawingUUID:(id)arg2 actionName:(id)arg3 strokeTransform:(CGAffineTransform)arg4 ;
@end

