/*
* Generated on Thursday, January 14, 2021 at 2:24:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
*/

#import <MPUFoundation/MPUFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIColor;

@interface MPUBorderConfiguration : NSObject <NSCopying> {

	double _borderAlpha;
	UIColor* _borderColor;
	double _borderWidth;
	double _fillAlpha;
	UIColor* _fillColor;
	double _dropShadowAlpha;
	UIColor* _dropShadowColor;
	unsigned long long _dropShadowEdges;
	double _dropShadowWidth;

}

@property (assign,nonatomic) double borderAlpha;                                             //@synthesize borderAlpha=_borderAlpha - In the implementation block
@property (nonatomic,retain) UIColor * borderColor;                                          //@synthesize borderColor=_borderColor - In the implementation block
@property (assign,nonatomic) double borderWidth;                                             //@synthesize borderWidth=_borderWidth - In the implementation block
@property (assign,nonatomic) double fillAlpha;                                               //@synthesize fillAlpha=_fillAlpha - In the implementation block
@property (nonatomic,retain) UIColor * fillColor;                                            //@synthesize fillColor=_fillColor - In the implementation block
@property (assign,nonatomic) double dropShadowAlpha;                                         //@synthesize dropShadowAlpha=_dropShadowAlpha - In the implementation block
@property (nonatomic,retain) UIColor * dropShadowColor;                                      //@synthesize dropShadowColor=_dropShadowColor - In the implementation block
@property (assign,nonatomic) unsigned long long dropShadowEdges;                             //@synthesize dropShadowEdges=_dropShadowEdges - In the implementation block
@property (assign,nonatomic) double dropShadowWidth;                                         //@synthesize dropShadowWidth=_dropShadowWidth - In the implementation block
@property (getter=isFullyTransparent,nonatomic,readonly) BOOL fullyTransparent; 
-(void)setFillColor:(UIColor *)arg1 ;
-(id)init;
-(UIColor *)fillColor;
-(UIColor *)borderColor;
-(double)borderWidth;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setBorderColor:(UIColor *)arg1 ;
-(BOOL)isFullyTransparent;
-(BOOL)isEqual:(id)arg1 ;
-(void)setBorderWidth:(double)arg1 ;
-(double)borderAlpha;
-(void)setBorderAlpha:(double)arg1 ;
-(double)fillAlpha;
-(void)setFillAlpha:(double)arg1 ;
-(double)dropShadowAlpha;
-(void)setDropShadowAlpha:(double)arg1 ;
-(UIColor *)dropShadowColor;
-(void)setDropShadowColor:(UIColor *)arg1 ;
-(unsigned long long)dropShadowEdges;
-(void)setDropShadowEdges:(unsigned long long)arg1 ;
-(double)dropShadowWidth;
-(void)setDropShadowWidth:(double)arg1 ;
@end

