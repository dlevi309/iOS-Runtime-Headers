/*
* Generated on Thursday, January 14, 2021 at 2:27:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
*/

#import <UIKitCore/UIWindow.h>

@class NSHashTable;

@interface CPSWindow : UIWindow {

	NSHashTable* _observers;

}

@property (nonatomic,retain) NSHashTable * observers;              //@synthesize observers=_observers - In the implementation block
-(NSHashTable *)observers;
-(BOOL)_isKeyWindowForDeferral;
-(void)setObservers:(NSHashTable *)arg1 ;
-(void)sendEvent:(id)arg1 ;
-(void)addEventObserver:(id)arg1 ;
-(void)removeEventObserver:(id)arg1 ;
@end

