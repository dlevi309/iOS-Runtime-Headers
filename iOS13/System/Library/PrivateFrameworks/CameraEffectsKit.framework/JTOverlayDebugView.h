/*
* Generated on Monday, March 1, 2021 at 2:34:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/

#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
#import <UIKitCore/UIView.h>

@protocol JTOverlayDebugViewDelegate;
@class NSNumber, UIView, CAShapeLayer, UIColor, NSArray;

@interface JTOverlayDebugView : UIView {

	NSNumber* _showDocumentBoundingBox;
	NSNumber* _showObjectAlignedBoundingBox;
	NSNumber* _showMidpoint;
	NSNumber* _showCornerPoints;
	NSNumber* _showNonTrackedWhenTracking;
	UIView* _rootContainerView;
	UIView* _nonTrackedContainerView;
	UIView* _trackedContainerView;
	UIView* _nonTrackedDocumentBoundingBoxView;
	CAShapeLayer* _nonTrackedDocumentBoundingBoxLayer;
	UIView* _trackedDocumentBoundingBoxView;
	CAShapeLayer* _trackedDocumentBoundingBox;
	UIView* _nonTrackedObjectAlignedBoundingBoxView;
	UIView* _trackedObjectAlignedBoundingBoxView;
	UIView* _nonTrackedMidpointView;
	UIView* _trackedMidpointView;
	UIView* _nonTrackedPointsView;
	UIView* _trackedPointsView;
	UIView* _nonTrackedAdditionalRectsContainerView;
	UIView* _trackedAdditionalRectsContainerView;
	UIColor* _nonTrackedDocumentBoundingBoxColor;
	UIColor* _trackedDocumentBoundingBoxColor;
	UIColor* _nonTrackedObjectAlignedBoundingBoxColor;
	UIColor* _trackedObjectAlignedBoundingBoxColor;
	UIColor* _nonTrackedMidpointColor;
	UIColor* _nonTrackedCornerPoint0Color;
	UIColor* _nonTrackedCornerPoint1Color;
	UIColor* _nonTrackedCornerPoint2Color;
	UIColor* _nonTrackedCornerPoint3Color;
	UIColor* _trackedMidpointColor;
	UIColor* _trackedCornerPoint0Color;
	UIColor* _trackedCornerPoint1Color;
	UIColor* _trackedCornerPoint2Color;
	UIColor* _trackedCornerPoint3Color;
	id<JTOverlayDebugViewDelegate> _delegate;

}

@property (nonatomic,retain) UIView * rootContainerView;                                     //@synthesize rootContainerView=_rootContainerView - In the implementation block
@property (nonatomic,retain) UIView * nonTrackedContainerView;                               //@synthesize nonTrackedContainerView=_nonTrackedContainerView - In the implementation block
@property (nonatomic,retain) UIView * trackedContainerView;                                  //@synthesize trackedContainerView=_trackedContainerView - In the implementation block
@property (nonatomic,retain) UIView * nonTrackedDocumentBoundingBoxView;                     //@synthesize nonTrackedDocumentBoundingBoxView=_nonTrackedDocumentBoundingBoxView - In the implementation block
@property (nonatomic,retain) CAShapeLayer * nonTrackedDocumentBoundingBoxLayer;              //@synthesize nonTrackedDocumentBoundingBoxLayer=_nonTrackedDocumentBoundingBoxLayer - In the implementation block
@property (nonatomic,retain) UIView * trackedDocumentBoundingBoxView;                        //@synthesize trackedDocumentBoundingBoxView=_trackedDocumentBoundingBoxView - In the implementation block
@property (nonatomic,retain) CAShapeLayer * trackedDocumentBoundingBox;                      //@synthesize trackedDocumentBoundingBox=_trackedDocumentBoundingBox - In the implementation block
@property (nonatomic,retain) UIView * nonTrackedObjectAlignedBoundingBoxView;                //@synthesize nonTrackedObjectAlignedBoundingBoxView=_nonTrackedObjectAlignedBoundingBoxView - In the implementation block
@property (nonatomic,retain) UIView * trackedObjectAlignedBoundingBoxView;                   //@synthesize trackedObjectAlignedBoundingBoxView=_trackedObjectAlignedBoundingBoxView - In the implementation block
@property (nonatomic,retain) UIView * nonTrackedMidpointView;                                //@synthesize nonTrackedMidpointView=_nonTrackedMidpointView - In the implementation block
@property (nonatomic,retain) UIView * trackedMidpointView;                                   //@synthesize trackedMidpointView=_trackedMidpointView - In the implementation block
@property (nonatomic,retain) UIView * nonTrackedPointsView;                                  //@synthesize nonTrackedPointsView=_nonTrackedPointsView - In the implementation block
@property (nonatomic,retain) UIView * trackedPointsView;                                     //@synthesize trackedPointsView=_trackedPointsView - In the implementation block
@property (nonatomic,retain) UIView * nonTrackedAdditionalRectsContainerView;                //@synthesize nonTrackedAdditionalRectsContainerView=_nonTrackedAdditionalRectsContainerView - In the implementation block
@property (nonatomic,retain) UIView * trackedAdditionalRectsContainerView;                   //@synthesize trackedAdditionalRectsContainerView=_trackedAdditionalRectsContainerView - In the implementation block
@property (nonatomic,retain) UIColor * nonTrackedDocumentBoundingBoxColor;                   //@synthesize nonTrackedDocumentBoundingBoxColor=_nonTrackedDocumentBoundingBoxColor - In the implementation block
@property (nonatomic,retain) UIColor * trackedDocumentBoundingBoxColor;                      //@synthesize trackedDocumentBoundingBoxColor=_trackedDocumentBoundingBoxColor - In the implementation block
@property (nonatomic,retain) UIColor * nonTrackedObjectAlignedBoundingBoxColor;              //@synthesize nonTrackedObjectAlignedBoundingBoxColor=_nonTrackedObjectAlignedBoundingBoxColor - In the implementation block
@property (nonatomic,retain) UIColor * trackedObjectAlignedBoundingBoxColor;                 //@synthesize trackedObjectAlignedBoundingBoxColor=_trackedObjectAlignedBoundingBoxColor - In the implementation block
@property (nonatomic,retain) UIColor * nonTrackedMidpointColor;                              //@synthesize nonTrackedMidpointColor=_nonTrackedMidpointColor - In the implementation block
@property (nonatomic,retain) UIColor * nonTrackedCornerPoint0Color;                          //@synthesize nonTrackedCornerPoint0Color=_nonTrackedCornerPoint0Color - In the implementation block
@property (nonatomic,retain) UIColor * nonTrackedCornerPoint1Color;                          //@synthesize nonTrackedCornerPoint1Color=_nonTrackedCornerPoint1Color - In the implementation block
@property (nonatomic,retain) UIColor * nonTrackedCornerPoint2Color;                          //@synthesize nonTrackedCornerPoint2Color=_nonTrackedCornerPoint2Color - In the implementation block
@property (nonatomic,retain) UIColor * nonTrackedCornerPoint3Color;                          //@synthesize nonTrackedCornerPoint3Color=_nonTrackedCornerPoint3Color - In the implementation block
@property (nonatomic,retain) UIColor * trackedMidpointColor;                                 //@synthesize trackedMidpointColor=_trackedMidpointColor - In the implementation block
@property (nonatomic,retain) UIColor * trackedCornerPoint0Color;                             //@synthesize trackedCornerPoint0Color=_trackedCornerPoint0Color - In the implementation block
@property (nonatomic,retain) UIColor * trackedCornerPoint1Color;                             //@synthesize trackedCornerPoint1Color=_trackedCornerPoint1Color - In the implementation block
@property (nonatomic,retain) UIColor * trackedCornerPoint2Color;                             //@synthesize trackedCornerPoint2Color=_trackedCornerPoint2Color - In the implementation block
@property (nonatomic,retain) UIColor * trackedCornerPoint3Color;                             //@synthesize trackedCornerPoint3Color=_trackedCornerPoint3Color - In the implementation block
@property (nonatomic,readonly) NSArray * additionalNonTrackedRectsToDraw; 
@property (nonatomic,readonly) NSArray * additionalTrackedRectsToDraw; 
@property (assign,nonatomic,__weak) id<JTOverlayDebugViewDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(id<JTOverlayDebugViewDelegate>)delegate;
-(void)setDelegate:(id<JTOverlayDebugViewDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setupViews;
-(id)initWithFrame:(CGRect)arg1 delegate:(id)arg2 ;
-(void)updateWithEffectFrame:(id)arg1 effect:(id)arg2 ;
-(void)setRootContainerView:(UIView *)arg1 ;
-(UIView *)rootContainerView;
-(void)setNonTrackedContainerView:(UIView *)arg1 ;
-(UIView *)nonTrackedContainerView;
-(void)setTrackedContainerView:(UIView *)arg1 ;
-(UIView *)trackedContainerView;
-(void)setNonTrackedDocumentBoundingBoxView:(UIView *)arg1 ;
-(UIView *)nonTrackedDocumentBoundingBoxView;
-(void)setNonTrackedDocumentBoundingBoxLayer:(CAShapeLayer *)arg1 ;
-(CAShapeLayer *)nonTrackedDocumentBoundingBoxLayer;
-(void)setNonTrackedObjectAlignedBoundingBoxView:(UIView *)arg1 ;
-(UIView *)nonTrackedObjectAlignedBoundingBoxView;
-(void)setNonTrackedMidpointView:(UIView *)arg1 ;
-(UIView *)nonTrackedMidpointView;
-(void)setNonTrackedPointsView:(UIView *)arg1 ;
-(UIView *)nonTrackedPointsView;
-(void)setNonTrackedAdditionalRectsContainerView:(UIView *)arg1 ;
-(UIView *)nonTrackedAdditionalRectsContainerView;
-(void)setTrackedDocumentBoundingBoxView:(UIView *)arg1 ;
-(UIView *)trackedDocumentBoundingBoxView;
-(void)setTrackedDocumentBoundingBox:(CAShapeLayer *)arg1 ;
-(CAShapeLayer *)trackedDocumentBoundingBox;
-(void)setTrackedObjectAlignedBoundingBoxView:(UIView *)arg1 ;
-(UIView *)trackedObjectAlignedBoundingBoxView;
-(void)setTrackedMidpointView:(UIView *)arg1 ;
-(UIView *)trackedMidpointView;
-(void)setTrackedPointsView:(UIView *)arg1 ;
-(UIView *)trackedPointsView;
-(void)setTrackedAdditionalRectsContainerView:(UIView *)arg1 ;
-(UIView *)trackedAdditionalRectsContainerView;
-(BOOL)showDocumentBoundingBox;
-(BOOL)showObjectAlignedBoundingBox;
-(BOOL)showNonTrackedWhenTracking;
-(UIColor *)trackedDocumentBoundingBoxColor;
-(void)updateDocumentBoundingBoxView:(id)arg1 transform:(id)arg2 borderLayer:(id)arg3 borderColor:(id)arg4 borderPhase:(double)arg5 ;
-(UIColor *)trackedObjectAlignedBoundingBoxColor;
-(void)updateObjectAlignedBoundingBoxView:(id)arg1 bounds:(CGRect)arg2 color:(id)arg3 transform:(id)arg4 ;
-(UIColor *)trackedCornerPoint0Color;
-(UIColor *)trackedCornerPoint1Color;
-(UIColor *)trackedCornerPoint2Color;
-(UIColor *)trackedCornerPoint3Color;
-(BOOL)showCornerPoints;
-(void)updatePointsView:(id)arg1 points:(id)arg2 colors:(id)arg3 pointSize:(double)arg4 hidden:(BOOL)arg5 ;
-(UIColor *)trackedMidpointColor;
-(BOOL)showMidpoint;
-(NSArray *)additionalTrackedRectsToDraw;
-(void)updateAdditionalRectsView:(id)arg1 rects:(id)arg2 transform:(id)arg3 ;
-(UIColor *)nonTrackedDocumentBoundingBoxColor;
-(UIColor *)nonTrackedObjectAlignedBoundingBoxColor;
-(UIColor *)nonTrackedCornerPoint0Color;
-(UIColor *)nonTrackedCornerPoint1Color;
-(UIColor *)nonTrackedCornerPoint2Color;
-(UIColor *)nonTrackedCornerPoint3Color;
-(UIColor *)nonTrackedMidpointColor;
-(NSArray *)additionalNonTrackedRectsToDraw;
-(void)setNonTrackedDocumentBoundingBoxColor:(UIColor *)arg1 ;
-(void)setTrackedDocumentBoundingBoxColor:(UIColor *)arg1 ;
-(void)setNonTrackedObjectAlignedBoundingBoxColor:(UIColor *)arg1 ;
-(void)setTrackedObjectAlignedBoundingBoxColor:(UIColor *)arg1 ;
-(void)setNonTrackedMidpointColor:(UIColor *)arg1 ;
-(void)setNonTrackedCornerPoint0Color:(UIColor *)arg1 ;
-(void)setNonTrackedCornerPoint1Color:(UIColor *)arg1 ;
-(void)setNonTrackedCornerPoint2Color:(UIColor *)arg1 ;
-(void)setNonTrackedCornerPoint3Color:(UIColor *)arg1 ;
-(void)setTrackedMidpointColor:(UIColor *)arg1 ;
-(void)setTrackedCornerPoint0Color:(UIColor *)arg1 ;
-(void)setTrackedCornerPoint1Color:(UIColor *)arg1 ;
-(void)setTrackedCornerPoint2Color:(UIColor *)arg1 ;
-(void)setTrackedCornerPoint3Color:(UIColor *)arg1 ;
@end

