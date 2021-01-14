/*
* Generated on Thursday, January 14, 2021 at 2:20:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)subtype;
-(BOOL)_setCARenderAnimation:(Animation*)arg1 layer:(id)arg2 ;
-(void)setFilter:(id)arg1 ;
-(id)filter;
-(Animation*)_copyRenderAnimationForLayer:(id)arg1 ;
-(unsigned)_propertyFlagsForLayer:(id)arg1 ;
-(void)setTransitionFlags:(unsigned)arg1 ;
-(float)endProgress;
-(float)startProgress;
-(NSDictionary *)options;
-(void)setType:(NSString *)arg1 ;
-(void)setOptions:(NSDictionary *)arg1 ;
-(NSString *)type;
-(void)setStartProgress:(float)arg1 ;
-(void)setEndProgress:(float)arg1 ;
-(void)setSubtype:(NSString *)arg1 ;
-(unsigned)transitionFlags;
@end

