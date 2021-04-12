/*
* Generated on Thursday, January 14, 2021 at 2:27:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
*/

#import <MediaControls/MediaControls-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/MRUVisualStylingProviderObserver.h>

@class MRUVisualStylingProvider, NSArray, NSString;

@interface MRUEqualizerView : UIView <MRUVisualStylingProviderObserver> {

	BOOL _animating;
	MRUVisualStylingProvider* _stylingProvider;
	NSArray* _barViews;
	double _width;
	double _spacing;

}

@property (nonatomic,retain) NSArray * barViews;                                      //@synthesize barViews=_barViews - In the implementation block
@property (assign,nonatomic) double width;                                            //@synthesize width=_width - In the implementation block
@property (assign,nonatomic) double spacing;                                          //@synthesize spacing=_spacing - In the implementation block
@property (assign,getter=isAnimating,nonatomic) BOOL animating;                       //@synthesize animating=_animating - In the implementation block
@property (nonatomic,retain) MRUVisualStylingProvider * stylingProvider;              //@synthesize stylingProvider=_stylingProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)spacing;
-(void)setSpacing:(double)arg1 ;
-(double)width;
-(void)setAnimating:(BOOL)arg1 ;
-(void)setBarViews:(NSArray *)arg1 ;
-(void)setWidth:(double)arg1 ;
-(NSArray *)barViews;
-(void)layoutSubviews;
-(void)setFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)startAnimating;
-(void)stopAnimating;
-(BOOL)isAnimating;
-(void)updateVisualStyling;
-(void)setStylingProvider:(MRUVisualStylingProvider *)arg1 ;
-(MRUVisualStylingProvider *)stylingProvider;
-(void)visualStylingProviderDidChange:(id)arg1 ;
-(id)initWithNumberOfBars:(unsigned long long)arg1 width:(double)arg2 spacing:(double)arg3 ;
-(void)updateBarHeights;
@end

