/*
* Generated on Thursday, January 14, 2021 at 2:22:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSArray, UIView, NSLayoutConstraint;

@interface PUCropHandleView : UIView {

	BOOL _lineWeightHeavy;
	BOOL _overlayHidden;
	unsigned long long _handle;
	NSArray* __lineViews;
	NSArray* __overlayViews;
	UIView* __layoutReferenceView;
	NSLayoutConstraint* __lineWidthConstraint;

}

@property (setter=_setLineViews:,nonatomic,retain) NSArray * _lineViews;                                             //@synthesize _lineViews=__lineViews - In the implementation block
@property (setter=_setOverlayViews:,nonatomic,retain) NSArray * _overlayViews;                                       //@synthesize _overlayViews=__overlayViews - In the implementation block
@property (setter=_setLayoutReferenceView:,nonatomic,retain) UIView * _layoutReferenceView;                          //@synthesize _layoutReferenceView=__layoutReferenceView - In the implementation block
@property (setter=_setLineWidthConstraint:,nonatomic,retain) NSLayoutConstraint * _lineWidthConstraint;              //@synthesize _lineWidthConstraint=__lineWidthConstraint - In the implementation block
@property (nonatomic,readonly) unsigned long long handle;                                                            //@synthesize handle=_handle - In the implementation block
@property (nonatomic,readonly) unsigned long long oppositeHandle; 
@property (nonatomic,readonly) NSArray * adjacentHandles; 
@property (nonatomic,readonly) id layoutReferenceItem; 
@property (getter=isTop,nonatomic,readonly) BOOL top; 
@property (getter=isLeft,nonatomic,readonly) BOOL left; 
@property (getter=isRight,nonatomic,readonly) BOOL right; 
@property (getter=isBottom,nonatomic,readonly) BOOL bottom; 
@property (getter=isCorner,nonatomic,readonly) BOOL corner; 
@property (getter=isLateral,nonatomic,readonly) BOOL lateral; 
@property (assign,getter=isLineWeightHeavy,nonatomic) BOOL lineWeightHeavy;                                          //@synthesize lineWeightHeavy=_lineWeightHeavy - In the implementation block
@property (assign,getter=isOverlayHidden,nonatomic) BOOL overlayHidden;                                              //@synthesize overlayHidden=_overlayHidden - In the implementation block
+(id)allHandles;
-(id)initWithFrame:(CGRect)arg1 ;
-(unsigned long long)handle;
-(BOOL)isTop;
-(BOOL)isBottom;
-(BOOL)isCorner;
-(BOOL)isLateral;
-(BOOL)isLeft;
-(NSArray *)_lineViews;
-(BOOL)isRight;
-(id)initForHandle:(unsigned long long)arg1 ;
-(void)_updateLineWidth;
-(void)setLineWeightHeavy:(BOOL)arg1 ;
-(id)_createLineView;
-(id)_createCornerOverlayView;
-(id)layoutReferenceItem;
-(unsigned long long)oppositeHandle;
-(NSArray *)adjacentHandles;
-(BOOL)isLineWeightHeavy;
-(BOOL)isOverlayHidden;
-(void)setOverlayHidden:(BOOL)arg1 ;
-(void)_setLineViews:(id)arg1 ;
-(NSArray *)_overlayViews;
-(void)_setOverlayViews:(id)arg1 ;
-(UIView *)_layoutReferenceView;
-(void)_setLayoutReferenceView:(id)arg1 ;
-(NSLayoutConstraint *)_lineWidthConstraint;
-(void)_setLineWidthConstraint:(id)arg1 ;
@end

