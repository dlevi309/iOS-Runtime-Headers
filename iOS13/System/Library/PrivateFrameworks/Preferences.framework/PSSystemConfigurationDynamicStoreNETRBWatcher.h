/*
* Generated on Monday, March 1, 2021 at 2:30:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(void)readNETRBState:(int*)arg1 andReason:(int*)arg2 ;
-(void)getNETRBState:(int*)arg1 andReason:(int*)arg2 ;
-(void)sendStateUpdate;
-(BOOL)shouldShowTethering;
-(BOOL)isTetheringEnabled;
-(BOOL)isDataEnabled;
@end

