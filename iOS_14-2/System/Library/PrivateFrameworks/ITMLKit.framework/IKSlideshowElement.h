/*
* Generated on Thursday, January 14, 2021 at 2:25:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <ITMLKit/IKViewElement.h>

@class NSArray;

@interface IKSlideshowElement : IKViewElement

@property (nonatomic,readonly) long long showSettings; 
@property (nonatomic,retain,readonly) NSArray * images; 
@property (nonatomic,readonly) unsigned long long transition; 
@property (nonatomic,readonly) double transitionInterval; 
-(NSArray *)images;
-(unsigned long long)transition;
-(long long)showSettings;
-(double)transitionInterval;
@end

