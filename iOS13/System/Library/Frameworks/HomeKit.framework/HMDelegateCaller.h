/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/


@interface HMDelegateCaller : NSObject
+(id)delegateCallerWithOperationQueue:(id)arg1 ;
-(id)init;
-(id)initWithQueue:(id)arg1 ;
-(void)callCompletion:(/*^block*/id)arg1 error:(id)arg2 ;
-(void)invokeBlock:(/*^block*/id)arg1 ;
-(void)callCompletion:(/*^block*/id)arg1 error:(id)arg2 snapshot:(id)arg3 ;
-(id)_localizedError:(id)arg1 ;
-(void)callCompletion:(/*^block*/id)arg1 error:(id)arg2 obj:(id)arg3 ;
-(void)callCompletion:(/*^block*/id)arg1 obj:(id)arg2 error:(id)arg3 ;
-(void)callCompletion:(/*^block*/id)arg1 value:(BOOL)arg2 error:(id)arg3 ;
-(void)callCompletion:(/*^block*/id)arg1 errorString:(id)arg2 ;
-(void)callCompletion:(/*^block*/id)arg1 error:(id)arg2 dictionary:(id)arg3 ;
-(void)callCompletion:(/*^block*/id)arg1 isUsingHomeKit:(BOOL)arg2 isUsingCloudServices:(BOOL)arg3 error:(id)arg4 ;
-(void)callCompletion:(/*^block*/id)arg1 home:(id)arg2 error:(id)arg3 ;
-(void)callCompletion:(/*^block*/id)arg1 room:(id)arg2 error:(id)arg3 ;
-(void)callCompletion:(/*^block*/id)arg1 zone:(id)arg2 error:(id)arg3 ;
-(void)callCompletion:(/*^block*/id)arg1 serviceGroup:(id)arg2 error:(id)arg3 ;
-(void)callCompletion:(/*^block*/id)arg1 actionSet:(id)arg2 error:(id)arg3 ;
-(void)callCompletion:(/*^block*/id)arg1 error:(id)arg2 boolValue:(BOOL)arg3 array:(id)arg4 ;
-(void)callCompletion:(/*^block*/id)arg1 error:(id)arg2 array:(id)arg3 ;
-(void)callCompletion:(/*^block*/id)arg1 array:(id)arg2 additionalAccessoryInfo:(id)arg3 error:(id)arg4 ;
-(void)callCompletion:(/*^block*/id)arg1 array:(id)arg2 ;
-(void)callCompletion:(/*^block*/id)arg1 invitations:(id)arg2 error:(id)arg3 ;
-(void)callCompletion:(/*^block*/id)arg1 user:(id)arg2 error:(id)arg3 ;
-(void)callCompletion:(/*^block*/id)arg1 error:(id)arg2 proxiedDevice:(id)arg3 ;
-(void)callCompletion:(/*^block*/id)arg1 error:(id)arg2 mediaSystem:(id)arg3 ;
-(void)callCompletion:(/*^block*/id)arg1 value:(BOOL)arg2 conflictName:(id)arg3 error:(id)arg4 ;
@end

