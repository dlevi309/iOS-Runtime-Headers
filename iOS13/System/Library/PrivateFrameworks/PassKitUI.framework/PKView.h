/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSHashTable;

@interface PKView : UIView {

	os_unfair_lock_s _observersLock;
	NSHashTable* _observers;

}
-(id)init;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)didMoveToWindow;
-(void)removeWindowObserver:(id)arg1 ;
-(void)addWindowObserver:(id)arg1 ;
@end

