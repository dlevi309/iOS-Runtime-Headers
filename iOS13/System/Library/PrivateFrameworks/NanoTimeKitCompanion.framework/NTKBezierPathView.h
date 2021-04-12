/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>

@class UIBezierPath, NTKBezierPathPointModel, UIColor, NSString;

@interface NTKBezierPathView : UIView <CAAnimationDelegate> {

	UIBezierPath* _path;
	UIBezierPath* _animateToPath;
	NTKBezierPathPointModel* _pointModel;
	UIColor* _pathColor;

}

@property (nonatomic,retain) UIBezierPath * path;                                 //@synthesize path=_path - In the implementation block
@property (nonatomic,readonly) NTKBezierPathPointModel * pointModel;              //@synthesize pointModel=_pointModel - In the implementation block
@property (nonatomic,retain) UIColor * pathColor;                                 //@synthesize pathColor=_pathColor - In the implementation block
@property (nonatomic,retain) NSString * lineCap; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)layerClass;
-(UIBezierPath *)path;
-(void)setPath:(UIBezierPath *)arg1 ;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(id)_shapeLayer;
-(void)setLineCap:(NSString *)arg1 ;
-(NSString *)lineCap;
-(CGPoint)pointOnPathForHorizontalPercentage:(double)arg1 ;
-(void)setPathColor:(UIColor *)arg1 ;
-(void)animateToPath:(id)arg1 duration:(double)arg2 curve:(long long)arg3 ;
-(NTKBezierPathPointModel *)pointModel;
-(UIColor *)pathColor;
@end

