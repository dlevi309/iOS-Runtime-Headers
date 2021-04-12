/*
* Generated on Thursday, January 14, 2021 at 2:27:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUI.framework/IMSharedUI
*/


@class NSArray, CAFilter, UIColor;

@interface IMFullscreenEffectFilter : NSObject {

	long long _type;
	unsigned long long _direction;
	NSArray* _balloonFilters;
	NSArray* _balloonBackdropFilters;
	CAFilter* _balloonCompositingFilter;
	double _balloonAlpha;
	double _contentAlpha;
	CAFilter* _textCompositingFilter;
	UIColor* _textColor;

}

@property (assign,nonatomic) long long type;                                 //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) unsigned long long direction;                   //@synthesize direction=_direction - In the implementation block
@property (nonatomic,copy) NSArray * balloonFilters;                         //@synthesize balloonFilters=_balloonFilters - In the implementation block
@property (nonatomic,copy) NSArray * balloonBackdropFilters;                 //@synthesize balloonBackdropFilters=_balloonBackdropFilters - In the implementation block
@property (nonatomic,copy) CAFilter * balloonCompositingFilter;              //@synthesize balloonCompositingFilter=_balloonCompositingFilter - In the implementation block
@property (assign,nonatomic) double balloonAlpha;                            //@synthesize balloonAlpha=_balloonAlpha - In the implementation block
@property (assign,nonatomic) double contentAlpha;                            //@synthesize contentAlpha=_contentAlpha - In the implementation block
@property (nonatomic,copy) CAFilter * textCompositingFilter;                 //@synthesize textCompositingFilter=_textCompositingFilter - In the implementation block
@property (nonatomic,copy) UIColor * textColor;                              //@synthesize textColor=_textColor - In the implementation block
-(unsigned long long)direction;
-(double)contentAlpha;
-(double)balloonAlpha;
-(UIColor *)textColor;
-(id)init;
-(void)setDirection:(unsigned long long)arg1 ;
-(NSArray *)balloonBackdropFilters;
-(CAFilter *)balloonCompositingFilter;
-(void)setType:(long long)arg1 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(NSArray *)balloonFilters;
-(void)setContentAlpha:(double)arg1 ;
-(CAFilter *)textCompositingFilter;
-(long long)type;
-(void)setBalloonFilters:(NSArray *)arg1 ;
-(void)setBalloonBackdropFilters:(NSArray *)arg1 ;
-(void)setBalloonCompositingFilter:(CAFilter *)arg1 ;
-(void)setBalloonAlpha:(double)arg1 ;
-(void)setTextCompositingFilter:(CAFilter *)arg1 ;
@end

