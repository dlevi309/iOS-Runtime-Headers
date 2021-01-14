/*
* Generated on Thursday, January 14, 2021 at 2:22:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


#import <PhotosUI/PhotosUI-Structs.h>
@interface PUParallaxComputer : NSObject {

	long long _model;
	double _parallaxFactor;
	unsigned long long _axis;

}

@property (assign,nonatomic) long long model;                      //@synthesize model=_model - In the implementation block
@property (assign,nonatomic) double parallaxFactor;                //@synthesize parallaxFactor=_parallaxFactor - In the implementation block
@property (assign,nonatomic) unsigned long long axis;              //@synthesize axis=_axis - In the implementation block
-(void)setAxis:(unsigned long long)arg1 ;
-(unsigned long long)axis;
-(long long)model;
-(double)parallaxFactor;
-(void)setParallaxFactor:(double)arg1 ;
-(void)setModel:(long long)arg1 ;
-(CGPoint)contentParallaxOffsetForViewFrame:(CGRect)arg1 visibleRect:(CGRect)arg2 ;
@end

