/*
* Generated on Thursday, January 14, 2021 at 2:27:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HIDPreferences.framework/HIDPreferences
*/


@protocol OS_xpc_object;
@class NSObject, NSMutableArray;

@interface HIDPreferencesHelperListener : NSObject {

	NSObject*<OS_xpc_object> _listener;
	NSMutableArray* _clients;

}
-(id)init;
-(void)removeClient:(id)arg1 ;
-(BOOL)setupListener;
-(void)acceptConnection:(id)arg1 ;
@end

