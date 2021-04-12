/*
* Generated on Monday, March 1, 2021 at 2:30:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSString;

@interface _UIDefaultsInterfaceStyleObserver : NSObject {

	NSString* _notificationName;
	int _notifyToken;

}
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)_didChange;
-(id)initWithNotificationName:(id)arg1 darwinNotification:(const char*)arg2 ;
-(void)observeUserDefaults:(id)arg1 key:(id)arg2 ;
@end

