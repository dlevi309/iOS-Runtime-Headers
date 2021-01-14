/*
* Generated on Thursday, January 14, 2021 at 2:29:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SetupKit.framework/SetupKit
*/

@class NSString;


@protocol CUAuthenticatableServer <NSObject>
@property (nonatomic,copy) id authCompletionHandler; 
@property (nonatomic,copy) id authHidePasswordHandler; 
@property (nonatomic,copy) id authShowPasswordHandler; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue; 
@property (nonatomic,copy) NSString * password; 
@required
-(void)setAuthCompletionHandler:(/*^block*/id)arg1;
-(void)setDispatchQueue:(id)arg1;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(NSString *)password;
-(void)setPassword:(id)arg1;
-(id)authCompletionHandler;
-(id)authHidePasswordHandler;
-(void)setAuthHidePasswordHandler:(/*^block*/id)arg1;
-(id)authShowPasswordHandler;
-(void)setAuthShowPasswordHandler:(/*^block*/id)arg1;

@end

