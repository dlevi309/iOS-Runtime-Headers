/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@class UIPinchGestureRecognizer, NSString;

@interface VideosExtrasZoomingImageInteractiveTransitionSourceContext : NSObject {

	UIPinchGestureRecognizer* _pinchGestureRecognizer;
	unsigned long long _itemIndex;
	unsigned long long _supportedZoomingImageTransitionDirections;
	NSString* _identifier;

}

@property (nonatomic,retain) UIPinchGestureRecognizer * pinchGestureRecognizer;                         //@synthesize pinchGestureRecognizer=_pinchGestureRecognizer - In the implementation block
@property (assign,nonatomic) unsigned long long itemIndex;                                              //@synthesize itemIndex=_itemIndex - In the implementation block
@property (assign,nonatomic) unsigned long long supportedZoomingImageTransitionDirections;              //@synthesize supportedZoomingImageTransitionDirections=_supportedZoomingImageTransitionDirections - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                                       //@synthesize identifier=_identifier - In the implementation block
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(unsigned long long)itemIndex;
-(void)setItemIndex:(unsigned long long)arg1 ;
-(UIPinchGestureRecognizer *)pinchGestureRecognizer;
-(void)setPinchGestureRecognizer:(UIPinchGestureRecognizer *)arg1 ;
-(void)setSupportedZoomingImageTransitionDirections:(unsigned long long)arg1 ;
-(unsigned long long)supportedZoomingImageTransitionDirections;
@end

