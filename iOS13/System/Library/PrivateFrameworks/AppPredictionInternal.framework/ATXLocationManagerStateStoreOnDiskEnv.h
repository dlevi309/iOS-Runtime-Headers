/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/

#import <libobjc.A.dylib/ATXLocationManagerStateStoreOnDiskEnv.h>

@protocol ATXLocationManagerStateStoreOnDiskEnv
@required
-(BOOL)isLocked;
-(void)callOnNextUnlock:(/*^block*/id)arg1;
-(int)openClassB:(id)arg1;

@end


@interface ATXLocationManagerStateStoreOnDiskEnv : NSObject <ATXLocationManagerStateStoreOnDiskEnv> {

	id _stateChangeRegistration;

}
-(void)dealloc;
-(BOOL)isLocked;
-(void)callOnNextUnlock:(/*^block*/id)arg1 ;
-(int)openClassB:(id)arg1 ;
@end

