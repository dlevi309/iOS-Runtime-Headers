/*
* Generated on Thursday, January 14, 2021 at 2:24:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/


@class NSUUID, NSString;

@interface PKUndoCommand : NSObject {

	NSUUID* _drawingUUID;
	NSString* _actionName;

}

@property (nonatomic,readonly) NSUUID * drawingUUID;               //@synthesize drawingUUID=_drawingUUID - In the implementation block
@property (nonatomic,readonly) NSString * actionName;              //@synthesize actionName=_actionName - In the implementation block
-(NSString *)actionName;
-(id)inverted;
-(id)strokes;
-(void)applyToDrawing:(id)arg1 ;
-(void)registerWithUndoManager:(id)arg1 target:(id)arg2 selector:(SEL)arg3 ;
-(NSUUID *)drawingUUID;
-(id)invertedInDrawing:(id)arg1 ;
-(id)initWithDrawingUUID:(id)arg1 actionName:(id)arg2 ;
@end

