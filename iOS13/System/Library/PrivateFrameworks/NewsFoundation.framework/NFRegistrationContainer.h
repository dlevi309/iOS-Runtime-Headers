/*
* Generated on Monday, March 1, 2021 at 2:32:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsFoundation.framework/NewsFoundation
*/


@protocol NFRegistrationContainer <NSObject>
@required
-(id)registerClass:(Class)arg1 name:(id)arg2 factory:(/*^block*/id)arg3;
-(id)registerProtocol:(id)arg1 name:(id)arg2 factory:(/*^block*/id)arg3;
-(id)registerKey:(id)arg1 factory:(/*^block*/id)arg2;
-(id)registerClass:(Class)arg1 factory:(/*^block*/id)arg2;
-(id)registerProtocol:(id)arg1 factory:(/*^block*/id)arg2;
-(id)unsafeRegisterForKey:(id)arg1 name:(id)arg2 factory:(/*^block*/id)arg3;

@end

