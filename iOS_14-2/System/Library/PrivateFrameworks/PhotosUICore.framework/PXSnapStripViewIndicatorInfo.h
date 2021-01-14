/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@class UIColor;

@interface PXSnapStripViewIndicatorInfo : NSObject {

	BOOL _disabled;
	UIColor* _color;
	double _offset;
	unsigned long long _style;

}

@property (nonatomic,readonly) UIColor * color;                       //@synthesize color=_color - In the implementation block
@property (nonatomic,readonly) double offset;                         //@synthesize offset=_offset - In the implementation block
@property (nonatomic,readonly) unsigned long long style;              //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) BOOL disabled;                           //@synthesize disabled=_disabled - In the implementation block
-(void)setDisabled:(BOOL)arg1 ;
-(id)init;
-(UIColor *)color;
-(double)offset;
-(id)initWithOffset:(double)arg1 color:(id)arg2 style:(unsigned long long)arg3 ;
-(BOOL)isEqualToIndicatorInfo:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)disabled;
-(unsigned long long)style;
-(BOOL)isEqual:(id)arg1 ;
@end

