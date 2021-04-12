/*
* Generated on Monday, March 1, 2021 at 2:32:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
*/

@class UIColor;


@protocol AKStrokedAnnotationProtocol <NSObject>
@property (assign) double strokeWidth; 
@property (retain) UIColor * strokeColor; 
@property (getter=isDashed) BOOL dashed; 
@property (assign) long long brushStyle; 
@property (assign) BOOL hasShadow; 
@required
-(BOOL)hasShadow;
-(void)setStrokeColor:(id)arg1;
-(void)setHasShadow:(BOOL)arg1;
-(UIColor *)strokeColor;
-(double)strokeWidth;
-(void)setStrokeWidth:(double)arg1;
-(void)setDashed:(BOOL)arg1;
-(BOOL)isDashed;
-(long long)brushStyle;
-(void)setBrushStyle:(long long)arg1;

@end

