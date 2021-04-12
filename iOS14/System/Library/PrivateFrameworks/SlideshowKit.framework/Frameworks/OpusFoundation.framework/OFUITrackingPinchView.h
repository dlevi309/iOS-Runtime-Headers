/*
* Generated on Thursday, January 14, 2021 at 2:28:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
*/

#import <OpusFoundation/OpusFoundation-Structs.h>
#import <OpusFoundation/OFUIView.h>

@class UIImageView;

@interface OFUITrackingPinchView : OFUIView {

	UIImageView* _imageView;
	CGPoint _anchorPoint;
	CGPoint _originalCenter;
	CGSize _originalSize;
	BOOL _isRotating;
	double _originalAngle;
	double _currentAngle;

}

@property (assign) CGPoint originalCenter;              //@synthesize originalCenter=_originalCenter - In the implementation block
-(void)setImage:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)image;
-(void)setContentsRect:(CGRect)arg1 ;
-(void)setOriginalCenter:(CGPoint)arg1 ;
-(void)setContentMode:(long long)arg1 ;
-(CGPoint)originalCenter;
-(void)dealloc;
-(void)beginTrackingPinch:(id)arg1 ;
-(void)setSize:(CGSize)arg1 angle:(float)arg2 ;
-(void)continueTrackingPinch:(id)arg1 ;
-(void)completeTrackingPinch:(id)arg1 ;
@end

