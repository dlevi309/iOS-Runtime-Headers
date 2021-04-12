/*
* Generated on Monday, March 1, 2021 at 2:32:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
*/

@class NSString;


@protocol RPAuthenticatable
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> dispatchQueue; 
@property (assign,nonatomic) unsigned pairSetupFlags; 
@property (assign,nonatomic) unsigned pairVerifyFlags; 
@property (nonatomic,copy) NSString * password; 
@property (assign,nonatomic) int passwordType; 
@property (nonatomic,readonly) int passwordTypeActual; 
@property (nonatomic,copy) id authCompletionHandler; 
@property (nonatomic,copy) id showPasswordHandler; 
@property (nonatomic,copy) id hidePasswordHandler; 
@property (nonatomic,copy) id promptForPasswordHandler; 
@required
-(NSString *)password;
-(void)setPassword:(id)arg1;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(int)passwordType;
-(void)tryPassword:(id)arg1;
-(unsigned)pairSetupFlags;
-(void)setPairSetupFlags:(unsigned)arg1;
-(unsigned)pairVerifyFlags;
-(void)setPairVerifyFlags:(unsigned)arg1;
-(void)setPasswordType:(int)arg1;
-(int)passwordTypeActual;
-(id)authCompletionHandler;
-(void)setAuthCompletionHandler:(/*^block*/id)arg1;
-(id)showPasswordHandler;
-(void)setShowPasswordHandler:(/*^block*/id)arg1;
-(id)hidePasswordHandler;
-(void)setHidePasswordHandler:(/*^block*/id)arg1;
-(id)promptForPasswordHandler;
-(void)setPromptForPasswordHandler:(/*^block*/id)arg1;

@end

