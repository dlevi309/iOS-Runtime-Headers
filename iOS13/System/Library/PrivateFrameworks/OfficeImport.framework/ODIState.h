/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class ODDDiagram, OADOrientedBounds, OADGroup, NSMutableArray, OADShapeStyle, OADDrawingTheme;

@interface ODIState : NSObject {

	ODDDiagram* mDiagram;
	OADOrientedBounds* mDiagramOrientedBounds;
	CGRect mLogicalBounds;
	double mScale;
	OADGroup* mGroup;
	NSMutableArray* mPresentationNames;
	NSMutableArray* mDefaultStyleLabelNames;
	int mPointCount;
	int mPointIndex;
	OADShapeStyle* mTextStyle;
	OADDrawingTheme* mDrawingTheme;

}
-(void)setGroup:(id)arg1 ;
-(double)scale;
-(int)pointCount;
-(id)group;
-(void)setTextStyle:(id)arg1 ;
-(id)textStyle;
-(void)setPointCount:(int)arg1 ;
-(int)pointIndex;
-(CGRect)logicalBounds;
-(id)diagram;
-(void)setLogicalBounds:(CGRect)arg1 ;
-(id)presentationNameForPointType:(int)arg1 ;
-(id)drawingTheme;
-(id)defaultStyleLabelNameForPointType:(int)arg1 ;
-(void)setLogicalBounds:(CGRect)arg1 maintainAspectRatio:(BOOL)arg2 ;
-(void)setPresentationName:(id)arg1 forPointType:(int)arg2 ;
-(id)diagramOrientedBounds;
-(void)setPointIndex:(int)arg1 ;
-(id)initWithDiagram:(id)arg1 group:(id)arg2 drawingTheme:(id)arg3 ;
-(void)setDefaultStyleLabelName:(id)arg1 forPointType:(int)arg2 ;
@end

