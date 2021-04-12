/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/


@interface HMDelegateCaller : NSObject
+(id)delegateCallerWithOperationQueue:(id)arg1 ;
-(id)initWithQueue:(id)arg1 ;
-(void)callCompletion:(/*^block*/id)arg1 error:(id)arg2 snapshot:(id)arg3 ;
-(id)init;
-(void)callCompletion:(/*^block*/id)arg1 service:(id)arg2 error:(id)arg3 ;
-(void)callCompletion:(/*^block*/id)arg1 error:(id)arg2 array:(id)arg3 ;
-(void)callCompletion:(/*^block*/id)arg1 error:(id)arg2 boolValue:(BOOL)arg3 array:(id)arg4 ;
-(void)invokeBlock:(/*^block*/id)arg1 ;
-(void)callCompletion:(/*^block*/id)arg1 error:(id)arg2 obj:(id)arg3 ;
-(void)callCompletion:(/*^block*/id)arg1 obj:(id)arg2 error:(id)arg3 ;
-(void)callCompletion:(/*^block*/id)arg1 user:(id)arg2 error:(id)arg3 ;
-(void)callCompletion:(/*^block*/id)arg1 error:(id)arg2 ;
-(id)_localizedError:(id)arg1 ;
-(void)callCompletion:(/*^block*/id)arg1 isUsingHomeKit:(BOOL)arg2 isUsingCloudServices:(BOOL)arg3 error:(id)arg4 ;
-(void)callCompletion:(/*^block*/id)arg1 actionSet:(id)arg2 error:(id)arg3 ;
-(void)callCompletion:(/*^block*/id)arg1 serviceGroup:(id)arg2 error:(id)arg3 ;
-(void)callCompletion:(/*^block*/id)arg1 error:(id)arg2 mediaSystem:(id)arg3 ;
-(void)callCompletion:(/*^block*/id)arg1 zone:(id)arg2 error:(id)arg3 ;
-(void)callCompletion:(/*^block*/id)arg1 error:(id)arg2 dictionary:(id)arg3 ;
-(void)callCompletion:(/*^block*/id)arg1 invitations:(id)arg2 error:(id)arg3 ;
-(void)callCompletion:(/*^block*/id)arg1 value:(BOOL)arg2 error:(id)arg3 ;
-(void)callCompletion:(/*^block*/id)arg1 room:(id)arg2 error:(id)arg3 ;
-(void)callCompletion:(/*^block*/id)arg1 array:(id)arg2 additionalAccessoryInfo:(id)arg3 error:(id)arg4 ;
-(void)callCompletion:(/*^block*/id)arg1 errorString:(id)arg2 ;
-(void)callCompletion:(/*^block*/id)arg1 array:(id)arg2 ;
-(void)callCompletion:(/*^block*/id)arg1 value:(BOOL)arg2 conflictName:(id)arg3 error:(id)arg4 ;
-(void)callCompletion:(/*^block*/id)arg1 error:(id)arg2 proxiedDevice:(id)arg3 ;
-(void)callCompletion:(/*^block*/id)arg1 home:(id)arg2 error:(id)arg3 ;
@end

