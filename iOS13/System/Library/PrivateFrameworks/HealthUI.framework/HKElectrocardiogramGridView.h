/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSArray, UIBezierPath, NSMutableArray, CAShapeLayer;

@interface HKElectrocardiogramGridView : UIView {

	NSArray* _grids;
	UIBezierPath* _controlSignalPath;
	NSMutableArray* _gridLayers;
	CAShapeLayer* _controlSignalLayer;
	CGSize _unitSize;

}

@property (nonatomic,retain) NSMutableArray * gridLayers;                    //@synthesize gridLayers=_gridLayers - In the implementation block
@property (nonatomic,retain) NSArray * grids;                                //@synthesize grids=_grids - In the implementation block
@property (nonatomic,retain) CAShapeLayer * controlSignalLayer;              //@synthesize controlSignalLayer=_controlSignalLayer - In the implementation block
@property (assign,nonatomic) CGSize unitSize;                                //@synthesize unitSize=_unitSize - In the implementation block
@property (nonatomic,readonly) CGSize majorGridSize; 
@property (nonatomic,retain) UIBezierPath * controlSignalPath;               //@synthesize controlSignalPath=_controlSignalPath - In the implementation block
-(void)layoutSubviews;
-(void)setUnitSize:(CGSize)arg1 ;
-(CGSize)unitSize;
-(id)initWithUnitSize:(CGSize)arg1 grids:(id)arg2 ;
-(CGSize)majorGridSize;
-(NSArray *)grids;
-(UIBezierPath *)controlSignalPath;
-(void)setControlSignalPath:(UIBezierPath *)arg1 ;
-(void)_createLayers;
-(NSMutableArray *)gridLayers;
-(CAShapeLayer *)controlSignalLayer;
-(void)setControlSignalLayer:(CAShapeLayer *)arg1 ;
-(void)setGrids:(NSArray *)arg1 ;
-(void)setGridLayers:(NSMutableArray *)arg1 ;
@end

