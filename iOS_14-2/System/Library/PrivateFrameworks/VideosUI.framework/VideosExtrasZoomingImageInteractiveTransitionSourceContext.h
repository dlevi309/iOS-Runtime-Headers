/*
* Generated on Thursday, January 14, 2021 at 2:24:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)itemIndex;
-(void)setPinchGestureRecognizer:(UIPinchGestureRecognizer *)arg1 ;
-(UIPinchGestureRecognizer *)pinchGestureRecognizer;
-(void)setItemIndex:(unsigned long long)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)setSupportedZoomingImageTransitionDirections:(unsigned long long)arg1 ;
-(unsigned long long)supportedZoomingImageTransitionDirections;
@end

