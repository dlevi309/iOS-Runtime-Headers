/*
* Generated on Monday, March 1, 2021 at 2:31:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

@class GEOAutomobileOptions, GEOTransitOptions;


@protocol _MKInfoCardController <NSObject>
@property (nonatomic,retain) GEOAutomobileOptions * automobileOptions; 
@property (nonatomic,retain) GEOTransitOptions * transitOptions; 
@property (assign,nonatomic,__weak) id<UIScrollViewDelegate> scrollViewDelegate; 
@property (assign,nonatomic) double contentAlpha; 
@required
+(double)headerHeightInMinimalMode;
-(void)setContentAlpha:(double)arg1;
-(GEOAutomobileOptions *)automobileOptions;
-(GEOTransitOptions *)transitOptions;
-(void)setAutomobileOptions:(id)arg1;
-(void)setTransitOptions:(id)arg1;
-(double)contentAlpha;
-(void)hideTitle:(BOOL)arg1;
-(void)updateMaskAlpha:(double)arg1 onHeight:(double)arg2 withOffset:(double)arg3;
-(id<UIScrollViewDelegate>)scrollViewDelegate;
-(void)setScrollViewDelegate:(id)arg1;

@end

