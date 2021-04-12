/*
* Generated on Monday, March 1, 2021 at 2:33:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <UIKitCore/UIGestureRecognizer.h>
#import <TSReading/TSDTapGesture.h>

@class NSString, TSDRep;

@interface TSWPTapAndTouchGestureRecognizer : UIGestureRecognizer <TSDTapGesture> {

	unsigned long long _numberOfTapsRequired;

}

@property (assign,nonatomic) unsigned long long numberOfTapsRequired;               //@synthesize numberOfTapsRequired=_numberOfTapsRequired - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) id<TSDGestureTarget> cachedGestureTarget; 
@property (assign,nonatomic) id<TSDGestureDelegate> gestureDelegate; 
@property (nonatomic,retain) NSString * gestureKind; 
@property (nonatomic,retain) TSDRep * targetRep; 
@property (nonatomic,readonly) int gestureState; 
-(void)reset;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(unsigned long long)numberOfTapsRequired;
-(void)setNumberOfTapsRequired:(unsigned long long)arg1 ;
-(void)p_failBecauseFingerStayedUpTooLongAfterTap;
@end

