/*
* Generated on Thursday, January 14, 2021 at 2:27:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UIColor *)strokeColor;
-(void)setHasShadow:(BOOL)arg1;
-(double)strokeWidth;
-(void)setStrokeColor:(id)arg1;
-(BOOL)hasShadow;
-(void)setStrokeWidth:(double)arg1;
-(void)setDashed:(BOOL)arg1;
-(BOOL)isDashed;
-(long long)brushStyle;
-(void)setBrushStyle:(long long)arg1;

@end

