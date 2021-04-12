/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CAAnimation.h>

@class NSDictionary, NSString;

@interface CATransition : CAAnimation

@property (copy) NSDictionary * options; 
@property (assign) unsigned transitionFlags; 
@property (copy) NSString * type; 
@property (copy) NSString * subtype; 
@property (assign) float startProgress; 
@property (assign) float endProgress; 
-(NSDictionary *)options;
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
-(void)setOptions:(NSDictionary *)arg1 ;
-(NSString *)subtype;
-(void)setFilter:(id)arg1 ;
-(id)filter;
-(float)endProgress;
-(void)setSubtype:(NSString *)arg1 ;
-(void)setTransitionFlags:(unsigned)arg1 ;
-(unsigned)_propertyFlagsForLayer:(id)arg1 ;
-(Animation*)_copyRenderAnimationForLayer:(id)arg1 ;
-(BOOL)_setCARenderAnimation:(Animation*)arg1 layer:(id)arg2 ;
-(float)startProgress;
-(void)setStartProgress:(float)arg1 ;
-(void)setEndProgress:(float)arg1 ;
-(unsigned)transitionFlags;
@end

