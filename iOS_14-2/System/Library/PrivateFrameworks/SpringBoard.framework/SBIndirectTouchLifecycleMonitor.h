/*
* Generated on Thursday, January 14, 2021 at 2:25:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UIHoverGestureRecognizer, NSHashTable, NSString;

@interface SBIndirectTouchLifecycleMonitor : NSObject <UIGestureRecognizerDelegate> {

	UIHoverGestureRecognizer* _hoverGestureRecognizer;
	NSHashTable* _observers;

}

@property (nonatomic,retain) UIHoverGestureRecognizer * hoverGestureRecognizer;              //@synthesize hoverGestureRecognizer=_hoverGestureRecognizer - In the implementation block
@property (nonatomic,retain) NSHashTable * observers;                                        //@synthesize observers=_observers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)addObserver:(id)arg1 ;
-(NSHashTable *)observers;
-(void)setObservers:(NSHashTable *)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)setHoverGestureRecognizer:(UIHoverGestureRecognizer *)arg1 ;
-(UIHoverGestureRecognizer *)hoverGestureRecognizer;
-(void)handleHoverEvent:(id)arg1 ;
-(id)initWithSystemGestureManager:(id)arg1 ;
-(CGPoint)systemGestureHoverLocationInView:(id)arg1 ;
@end

