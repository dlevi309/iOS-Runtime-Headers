/*
* Generated on Thursday, January 14, 2021 at 2:27:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
*/

#import <UIKitCore/UIGestureRecognizer.h>

@class MSVTimer;

@interface MediaControlsInteractionRecognizer : UIGestureRecognizer {

	MSVTimer* _interactionTimer;

}

@property (nonatomic,retain) MSVTimer * interactionTimer;              //@synthesize interactionTimer=_interactionTimer - In the implementation block
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(MSVTimer *)interactionTimer;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)setInteractionTimer:(MSVTimer *)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
@end

