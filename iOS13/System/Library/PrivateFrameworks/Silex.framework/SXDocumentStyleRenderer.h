/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <libobjc.A.dylib/SXViewportChangeListener.h>
#import <libobjc.A.dylib/SXDocumentStyleRenderer.h>

@protocol SXDocumentStyleRenderer <NSObject>
@required
-(void)applyStyle:(id)arg1 onView:(id)arg2;

@end


@protocol SXGradientFactory;
@class SXViewport, UIView, NSString;

@interface SXDocumentStyleRenderer : NSObject <SXViewportChangeListener, SXDocumentStyleRenderer> {

	SXViewport* _viewport;
	id<SXGradientFactory> _gradientFactory;
	UIView* _topBackgroundView;

}

@property (nonatomic,readonly) SXViewport * viewport;                              //@synthesize viewport=_viewport - In the implementation block
@property (nonatomic,readonly) id<SXGradientFactory> gradientFactory;              //@synthesize gradientFactory=_gradientFactory - In the implementation block
@property (nonatomic,retain) UIView * topBackgroundView;                           //@synthesize topBackgroundView=_topBackgroundView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SXViewport *)viewport;
-(void)setTopBackgroundView:(UIView *)arg1 ;
-(UIView *)topBackgroundView;
-(void)applyStyle:(id)arg1 onView:(id)arg2 ;
-(void)viewport:(id)arg1 boundsDidChangeFromBounds:(CGRect)arg2 ;
-(void)applyBackgroundColorForStyle:(id)arg1 onView:(id)arg2 ;
-(void)applyTopBackgroundForStyle:(id)arg1 onView:(id)arg2 ;
-(id<SXGradientFactory>)gradientFactory;
-(void)layoutTopBackgroundView;
-(id)initWithViewport:(id)arg1 gradientFactory:(id)arg2 ;
@end

