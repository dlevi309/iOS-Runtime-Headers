/*
* Generated on Thursday, January 14, 2021 at 2:26:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>

@class UIBezierPath, NTKPromise, UIColor, NTKBezierPathPointModel, NSString;

@interface NTKBezierPathView : UIView <CAAnimationDelegate> {

	UIBezierPath* _path;
	UIBezierPath* _animateToPath;
	NTKPromise* _pointModel;
	UIColor* _pathColor;

}

@property (nonatomic,retain) UIBezierPath * path;                                 //@synthesize path=_path - In the implementation block
@property (nonatomic,readonly) NTKBezierPathPointModel * pointModel; 
@property (nonatomic,retain) UIColor * pathColor;                                 //@synthesize pathColor=_pathColor - In the implementation block
@property (nonatomic,copy) NSString * lineCap; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)layerClass;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(NSString *)lineCap;
-(void)setPath:(UIBezierPath *)arg1 ;
-(UIBezierPath *)path;
-(void)setLineCap:(NSString *)arg1 ;
-(id)_shapeLayer;
-(CGPoint)pointOnPathForHorizontalPercentage:(double)arg1 ;
-(void)setPathColor:(UIColor *)arg1 ;
-(void)animateToPath:(id)arg1 duration:(double)arg2 curve:(long long)arg3 ;
-(NTKBezierPathPointModel *)pointModel;
-(UIColor *)pathColor;
@end

