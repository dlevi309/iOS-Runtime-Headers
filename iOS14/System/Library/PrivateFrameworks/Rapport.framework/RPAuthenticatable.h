/*
* Generated on Thursday, January 14, 2021 at 2:24:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setPasswordType:(int)arg1;
-(void)setAuthCompletionHandler:(/*^block*/id)arg1;
-(void)tryPassword:(id)arg1;
-(int)passwordTypeActual;
-(id)promptForPasswordHandler;
-(int)passwordType;
-(unsigned)pairVerifyFlags;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(NSString *)password;
-(void)setPairVerifyFlags:(unsigned)arg1;
-(void)setPassword:(id)arg1;
-(void)setHidePasswordHandler:(/*^block*/id)arg1;
-(id)hidePasswordHandler;
-(void)setPairSetupFlags:(unsigned)arg1;
-(id)authCompletionHandler;
-(void)setPromptForPasswordHandler:(/*^block*/id)arg1;
-(unsigned)pairSetupFlags;
-(id)showPasswordHandler;
-(void)setShowPasswordHandler:(/*^block*/id)arg1;

@end

