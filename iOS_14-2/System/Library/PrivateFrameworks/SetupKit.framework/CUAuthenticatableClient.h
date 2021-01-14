/*
* Generated on Thursday, January 14, 2021 at 2:29:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SetupKit.framework/SetupKit
*/

@class NSString;


@protocol CUAuthenticatableClient <NSObject>
@property (nonatomic,copy) id authCompletionHandler; 
@property (nonatomic,copy) id authPromptForPasswordHandler; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue; 
@property (nonatomic,copy) NSString * password; 
@required
-(void)setAuthCompletionHandler:(/*^block*/id)arg1;
-(void)tryPassword:(id)arg1;
-(void)setDispatchQueue:(id)arg1;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(NSString *)password;
-(void)setPassword:(id)arg1;
-(id)authCompletionHandler;
-(id)authPromptForPasswordHandler;
-(void)setAuthPromptForPasswordHandler:(/*^block*/id)arg1;

@end

