/*
* Generated on Thursday, January 14, 2021 at 2:24:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSHashTable;

@interface PKView : UIView {

	os_unfair_lock_s _observersLock;
	NSHashTable* _observers;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(id)init;
-(void)removeWindowObserver:(id)arg1 ;
-(void)addWindowObserver:(id)arg1 ;
-(void)didMoveToWindow;
@end

