/*
* Generated on Thursday, January 14, 2021 at 2:24:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <UIKitCore/UITableViewCell.h>

@class UIImageView, PKDrawing;

@interface PKTextInputDebugDrawingEntryCell : UITableViewCell {

	UIImageView* _drawingImageView;
	PKDrawing* _drawing;

}

@property (nonatomic,retain) PKDrawing * drawing;              //@synthesize drawing=_drawing - In the implementation block
-(PKDrawing *)drawing;
-(void)setDrawing:(PKDrawing *)arg1 ;
-(void)_updateDrawingView;
@end

