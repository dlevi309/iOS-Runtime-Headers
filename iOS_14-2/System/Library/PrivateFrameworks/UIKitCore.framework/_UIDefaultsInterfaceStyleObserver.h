/*
* Generated on Thursday, January 14, 2021 at 2:20:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSString;

@interface _UIDefaultsInterfaceStyleObserver : NSObject {

	NSString* _notificationName;
	int _notifyToken;

}
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)observeUserDefaults:(id)arg1 key:(id)arg2 ;
-(id)initWithNotificationName:(id)arg1 darwinNotification:(const char*)arg2 ;
-(void)_didChange;
-(void)dealloc;
@end

