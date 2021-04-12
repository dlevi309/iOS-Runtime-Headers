/*
* Generated on Monday, March 1, 2021 at 2:31:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@class NSArray, CAFilter, UIColor;

@interface CKFullscreenEffectMessageFilter : NSObject {

	int _type;
	int _direction;
	NSArray* _balloonFilters;
	NSArray* _balloonBackdropFilters;
	CAFilter* _balloonCompositingFilter;
	double _balloonAlpha;
	double _contentAlpha;
	CAFilter* _textCompositingFilter;
	UIColor* _textColor;

}

@property (assign,nonatomic) int type;                                       //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) int direction;                                  //@synthesize direction=_direction - In the implementation block
@property (nonatomic,copy) NSArray * balloonFilters;                         //@synthesize balloonFilters=_balloonFilters - In the implementation block
@property (nonatomic,copy) NSArray * balloonBackdropFilters;                 //@synthesize balloonBackdropFilters=_balloonBackdropFilters - In the implementation block
@property (nonatomic,copy) CAFilter * balloonCompositingFilter;              //@synthesize balloonCompositingFilter=_balloonCompositingFilter - In the implementation block
@property (assign,nonatomic) double balloonAlpha;                            //@synthesize balloonAlpha=_balloonAlpha - In the implementation block
@property (assign,nonatomic) double contentAlpha;                            //@synthesize contentAlpha=_contentAlpha - In the implementation block
@property (nonatomic,copy) CAFilter * textCompositingFilter;                 //@synthesize textCompositingFilter=_textCompositingFilter - In the implementation block
@property (nonatomic,copy) UIColor * textColor;                              //@synthesize textColor=_textColor - In the implementation block
-(id)init;
-(int)type;
-(void)setType:(int)arg1 ;
-(int)direction;
-(void)setDirection:(int)arg1 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(UIColor *)textColor;
-(void)setContentAlpha:(double)arg1 ;
-(double)contentAlpha;
-(NSArray *)balloonFilters;
-(CAFilter *)textCompositingFilter;
-(double)balloonAlpha;
-(NSArray *)balloonBackdropFilters;
-(CAFilter *)balloonCompositingFilter;
-(void)setBalloonFilters:(NSArray *)arg1 ;
-(void)setBalloonBackdropFilters:(NSArray *)arg1 ;
-(void)setBalloonCompositingFilter:(CAFilter *)arg1 ;
-(void)setBalloonAlpha:(double)arg1 ;
-(void)setTextCompositingFilter:(CAFilter *)arg1 ;
@end

