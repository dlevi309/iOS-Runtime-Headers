/*
* Generated on Monday, March 1, 2021 at 2:35:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setOffset:(double)arg1 ;
-(double)sharpness;
-(void)setSharpness:(double)arg1 ;
-(double)offset;
-(void)setLineWidth:(double)arg1 ;
-(double)lineWidth;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(void)setRenderMode:(NSString *)arg1 ;
-(void)setForegroundColor:(CGColorRef)arg1 ;
-(CGColorRef)foregroundColor;
-(NSString *)renderMode;
-(BOOL)invertsShape;
-(void)setInvertsShape:(BOOL)arg1 ;
@end

