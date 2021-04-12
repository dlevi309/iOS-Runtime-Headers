/*
* Generated on Thursday, January 14, 2021 at 2:22:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

@class GEOAutomobileOptions, GEOTransitOptions, GEOCyclingOptions;


@protocol _MKInfoCardController <NSObject>
@property (nonatomic,retain) GEOAutomobileOptions * automobileOptions; 
@property (nonatomic,retain) GEOTransitOptions * transitOptions; 
@property (nonatomic,retain) GEOCyclingOptions * cyclingOptions; 
@property (assign,nonatomic,__weak) id<UIScrollViewDelegate> scrollViewDelegate; 
@property (assign,nonatomic) double contentAlpha; 
@required
+(double)headerHeightInMinimalMode;
-(GEOTransitOptions *)transitOptions;
-(id<UIScrollViewDelegate>)scrollViewDelegate;
-(double)contentAlpha;
-(GEOAutomobileOptions *)automobileOptions;
-(void)setAutomobileOptions:(id)arg1;
-(void)updateMaskAlpha:(double)arg1 onHeight:(double)arg2 withOffset:(double)arg3;
-(void)setTransitOptions:(id)arg1;
-(void)setContentAlpha:(double)arg1;
-(void)setScrollViewDelegate:(id)arg1;
-(GEOCyclingOptions *)cyclingOptions;
-(void)setCyclingOptions:(id)arg1;
-(void)hideTitle:(BOOL)arg1;

@end

