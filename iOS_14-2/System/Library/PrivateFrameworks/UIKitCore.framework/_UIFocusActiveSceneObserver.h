/*
* Generated on Thursday, January 14, 2021 at 2:20:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/BKSHIDEventDeliveryPolicyObserving.h>

@class NSMapTable, UIScene, NSString;

@interface _UIFocusActiveSceneObserver : NSObject <BKSHIDEventDeliveryPolicyObserving> {

	NSMapTable* _hidObserverMapTable;
	NSMapTable* _observers;
	UIScene* _scene;
	struct {
		unsigned supportsHIDUpdates : 1;
		unsigned wasActiveScene : 1;
	}  _flags;

}

@property (getter=isActiveScene,nonatomic,readonly) BOOL activeScene; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)addObserver:(/*^block*/id)arg1 ;
-(id)init;
-(id)initWithScene:(id)arg1 ;
-(void)beginMonitoringContextChangesForWindow:(id)arg1 ;
-(NSString *)description;
-(void)stopMonitoringContextChangesForWindow:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)_keyWindowDidChangeNotification:(id)arg1 ;
-(BOOL)isActiveScene;
-(void)_windowDidAttachContext:(id)arg1 ;
-(void)_addDeliveryObserverForWindow:(id)arg1 ;
-(void)_notifyObserversIfNecessary;
-(void)_removeDeliverObserverForWindow:(id)arg1 ;
-(void)observerDeliveryPolicyDidChange:(id)arg1 ;
-(void)_windowDidDetachContext:(id)arg1 ;
-(void)dealloc;
@end

