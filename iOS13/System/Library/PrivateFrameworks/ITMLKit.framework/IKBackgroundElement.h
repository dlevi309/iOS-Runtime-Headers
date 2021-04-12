/*
* Generated on Monday, March 1, 2021 at 2:31:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <ITMLKit/IKViewElement.h>

@class NSArray, IKAudioElement, UIColor;

@interface IKBackgroundElement : IKViewElement

@property (nonatomic,retain,readonly) NSArray * images; 
@property (nonatomic,retain,readonly) IKAudioElement * audio; 
@property (nonatomic,readonly) double transitionInterval; 
@property (nonatomic,retain,readonly) UIColor * backgroundColor; 
-(NSArray *)images;
-(UIColor *)backgroundColor;
-(IKAudioElement *)audio;
-(double)transitionInterval;
@end

