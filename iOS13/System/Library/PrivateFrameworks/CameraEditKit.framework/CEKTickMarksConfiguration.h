/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraEditKit.framework/CameraEditKit
*/

@class UIColor;


@protocol CEKTickMarksConfiguration <NSObject>
@property (assign,nonatomic) long long mainTickMarkInterval; 
@property (assign,nonatomic) double tickMarkSpacing; 
@property (assign,nonatomic) long long mainTickMarkOffset; 
@property (assign,nonatomic) BOOL useTickMarkLegibilityShadows; 
@property (nonatomic,retain) UIColor * mainTickMarkColor; 
@property (nonatomic,retain) UIColor * secondaryTickMarkColor; 
@required
-(BOOL)useTickMarkLegibilityShadows;
-(double)tickMarkSpacing;
-(long long)mainTickMarkOffset;
-(long long)mainTickMarkInterval;
-(UIColor *)mainTickMarkColor;
-(UIColor *)secondaryTickMarkColor;
-(void)setMainTickMarkInterval:(long long)arg1;
-(void)setTickMarkSpacing:(double)arg1;
-(void)setMainTickMarkOffset:(long long)arg1;
-(void)setUseTickMarkLegibilityShadows:(BOOL)arg1;
-(void)setMainTickMarkColor:(id)arg1;
-(void)setSecondaryTickMarkColor:(id)arg1;

@end

