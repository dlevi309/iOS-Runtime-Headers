/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXAutoScroller.h>

@class CADisplayLink;

@interface PXUIAutoScroller : PXAutoScroller {

	CADisplayLink* _displayLink;

}

@property (nonatomic,retain) CADisplayLink * displayLink;              //@synthesize displayLink=_displayLink - In the implementation block
-(CADisplayLink *)displayLink;
-(void)setDisplayLink:(CADisplayLink *)arg1 ;
-(BOOL)autoscrollWithOffset:(CGPoint)arg1 ;
-(void)updateWithGestureRecognizer:(id)arg1 ;
-(void)stopRepeating;
-(CGRect)visibleRectForScrollView:(id)arg1 ;
-(void)startRepeating;
-(void)_handleDisplayLink:(id)arg1 ;
@end

