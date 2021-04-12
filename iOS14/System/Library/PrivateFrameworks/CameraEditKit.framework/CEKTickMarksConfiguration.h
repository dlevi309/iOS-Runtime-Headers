/*
* Generated on Thursday, January 14, 2021 at 2:27:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setUseTickMarkLegibilityShadows:(BOOL)arg1;
-(void)setMainTickMarkInterval:(long long)arg1;
-(void)setTickMarkSpacing:(double)arg1;
-(void)setMainTickMarkColor:(id)arg1;
-(void)setSecondaryTickMarkColor:(id)arg1;
-(BOOL)useTickMarkLegibilityShadows;
-(double)tickMarkSpacing;
-(long long)mainTickMarkOffset;
-(long long)mainTickMarkInterval;
-(UIColor *)mainTickMarkColor;
-(UIColor *)secondaryTickMarkColor;
-(void)setMainTickMarkOffset:(long long)arg1;

@end

