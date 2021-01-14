/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveContextClient.framework/ProactiveContextClient
*/

#import <libobjc.A.dylib/ATXLocationManagerStateStoreOnDiskEnv.h>

@protocol ATXLocationManagerStateStoreOnDiskEnv
@required
-(BOOL)isLocked;
-(void)callOnNextUnlock:(/*^block*/id)arg1;
-(int)openFileAtPath:(id)arg1 dataProtectionClass:(int)arg2;

@end


@interface ATXLocationManagerStateStoreOnDiskEnv : NSObject <ATXLocationManagerStateStoreOnDiskEnv> {

	id _stateChangeRegistration;

}
-(BOOL)isLocked;
-(void)callOnNextUnlock:(/*^block*/id)arg1 ;
-(int)openFileAtPath:(id)arg1 dataProtectionClass:(int)arg2 ;
-(void)dealloc;
@end

