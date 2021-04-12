/*
* Generated on Thursday, January 14, 2021 at 2:20:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/


#import <Preferences/Preferences-Structs.h>
@interface PSSystemConfigurationDynamicStoreNETRBWatcher : NSObject {

	CFRunLoopSourceRef _scRunLoopSource;
	SCDynamicStoreRef _scDynamicStore;
	int _netrbState;
	int _netrbReason;

}
+(id)sharedManager;
-(id)init;
-(void)sendStateUpdate;
-(BOOL)isDataEnabled;
-(void)readNETRBState:(int*)arg1 andReason:(int*)arg2 ;
-(void)getNETRBState:(int*)arg1 andReason:(int*)arg2 ;
-(BOOL)isTetheringEnabled;
-(BOOL)shouldShowTethering;
-(void)dealloc;
@end

