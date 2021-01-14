/*
* Generated on Thursday, January 14, 2021 at 2:28:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)group;
-(double)scale;
-(void)setTextStyle:(id)arg1 ;
-(void)setPointCount:(int)arg1 ;
-(id)textStyle;
-(id)diagram;
-(int)pointIndex;
-(void)setPointIndex:(int)arg1 ;
-(int)pointCount;
-(CGRect)logicalBounds;
-(void)setLogicalBounds:(CGRect)arg1 ;
-(id)presentationNameForPointType:(int)arg1 ;
-(id)drawingTheme;
-(id)defaultStyleLabelNameForPointType:(int)arg1 ;
-(void)setLogicalBounds:(CGRect)arg1 maintainAspectRatio:(BOOL)arg2 ;
-(void)setPresentationName:(id)arg1 forPointType:(int)arg2 ;
-(id)diagramOrientedBounds;
-(id)initWithDiagram:(id)arg1 group:(id)arg2 drawingTheme:(id)arg3 ;
-(void)setDefaultStyleLabelName:(id)arg1 forPointType:(int)arg2 ;
@end

