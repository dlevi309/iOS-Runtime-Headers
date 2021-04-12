/*
* Generated on Thursday, January 14, 2021 at 2:20:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CALayer.h>

@class NSString;

@interface CAScrollLayer : CALayer

@property (copy) NSString * scrollMode; 
+(BOOL)CA_automaticallyNotifiesObservers:(Class)arg1 ;
+(id)defaultValueForKey:(id)arg1 ;
-(void)scrollToPoint:(CGPoint)arg1 ;
-(void)scrollToRect:(CGRect)arg1 ;
-(void)_scrollPoint:(CGPoint)arg1 fromLayer:(id)arg2 ;
-(void)setScrollMode:(NSString *)arg1 ;
-(void)_scrollRect:(CGRect)arg1 fromLayer:(id)arg2 ;
-(CGRect)_visibleRectOfLayer:(id)arg1 ;
-(NSString *)scrollMode;
@end

