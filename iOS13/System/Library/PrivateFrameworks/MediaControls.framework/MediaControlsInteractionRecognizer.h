/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
*/

#import <UIKitCore/UIGestureRecognizer.h>

@class MSVTimer;

@interface MediaControlsInteractionRecognizer : UIGestureRecognizer {

	MSVTimer* _interactionTimer;

}

@property (nonatomic,retain) MSVTimer * interactionTimer;              //@synthesize interactionTimer=_interactionTimer - In the implementation block
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(MSVTimer *)interactionTimer;
-(void)setInteractionTimer:(MSVTimer *)arg1 ;
@end

