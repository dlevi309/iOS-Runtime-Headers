/*
* Generated on Monday, March 1, 2021 at 2:32:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/


@class NSUUID, NSString;

@interface PKUndoCommand : NSObject {

	NSUUID* _drawingUUID;
	NSString* _actionName;

}

@property (nonatomic,readonly) NSUUID * drawingUUID;               //@synthesize drawingUUID=_drawingUUID - In the implementation block
@property (nonatomic,readonly) NSString * actionName;              //@synthesize actionName=_actionName - In the implementation block
-(id)strokes;
-(id)inverted;
-(NSString *)actionName;
-(NSUUID *)drawingUUID;
-(void)registerWithUndoManager:(id)arg1 target:(id)arg2 selector:(SEL)arg3 ;
-(void)applyToDrawing:(id)arg1 ;
-(id)invertedInDrawing:(id)arg1 ;
-(id)initWithDrawingUUID:(id)arg1 actionName:(id)arg2 ;
@end

