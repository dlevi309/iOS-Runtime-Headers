/*
* Generated on Monday, March 1, 2021 at 2:35:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
*/

#import <VoiceMemos/VoiceMemos-Structs.h>
#import <UIKitCore/UIScrollView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class NSString;

@interface RCWaveformScrollView : UIScrollView <UIGestureRecognizerDelegate> {

	unsigned long long _ignoreContentOffsetChangesCount;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(void)setContentOffset:(CGPoint)arg1 ;
-(void)setContentOffset:(CGPoint)arg1 animated:(BOOL)arg2 ;
-(void)beginIgnoringContentOffsetChanges;
-(CGPoint)contentOffsetInPresentationLayer:(BOOL)arg1 ;
-(void)endIgnoringContentOffsetChanges;
-(CGRect)convertRect:(CGRect)arg1 fromView:(id)arg2 usingCurrentAnimatedPosition:(BOOL)arg3 ;
@end

