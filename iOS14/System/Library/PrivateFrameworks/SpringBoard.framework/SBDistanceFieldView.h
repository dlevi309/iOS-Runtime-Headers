/*
* Generated on Thursday, January 14, 2021 at 2:25:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIView.h>

@class NSString;

@interface SBDistanceFieldView : UIView

@property (nonatomic,copy) NSString * renderMode; 
@property (assign) BOOL invertsShape; 
@property (assign) CGColorRef foregroundColor; 
@property (assign) double offset; 
@property (assign) double sharpness; 
@property (assign) double lineWidth; 
+(Class)layerClass;
-(void)setLineWidth:(double)arg1 ;
-(double)lineWidth;
-(void)setRenderMode:(NSString *)arg1 ;
-(void)setForegroundColor:(CGColorRef)arg1 ;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(CGColorRef)foregroundColor;
-(double)offset;
-(NSString *)renderMode;
-(double)sharpness;
-(void)setOffset:(double)arg1 ;
-(BOOL)invertsShape;
-(void)setInvertsShape:(BOOL)arg1 ;
-(void)setSharpness:(double)arg1 ;
@end

