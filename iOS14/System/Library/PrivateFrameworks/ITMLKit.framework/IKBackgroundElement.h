/*
* Generated on Thursday, January 14, 2021 at 2:25:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <ITMLKit/IKViewElement.h>

@class NSArray, IKAudioElement, UIColor;

@interface IKBackgroundElement : IKViewElement

@property (nonatomic,retain,readonly) NSArray * images; 
@property (nonatomic,retain,readonly) IKAudioElement * audio; 
@property (nonatomic,readonly) double transitionInterval; 
@property (nonatomic,retain,readonly) UIColor * backgroundColor; 
-(IKAudioElement *)audio;
-(UIColor *)backgroundColor;
-(NSArray *)images;
-(double)transitionInterval;
@end

