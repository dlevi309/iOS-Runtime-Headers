/*
* Generated on Monday, March 1, 2021 at 2:34:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
*/

#import <UIKitCore/UIWindow.h>

@class NSHashTable;

@interface CPSWindow : UIWindow {

	NSHashTable* _observers;

}

@property (nonatomic,retain) NSHashTable * observers;              //@synthesize observers=_observers - In the implementation block
-(void)setObservers:(NSHashTable *)arg1 ;
-(NSHashTable *)observers;
-(void)sendEvent:(id)arg1 ;
-(BOOL)_isKeyWindowForDeferral;
-(void)removeEventObserver:(id)arg1 ;
-(void)addEventObserver:(id)arg1 ;
@end

