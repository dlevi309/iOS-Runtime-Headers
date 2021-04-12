/*
* Generated on Thursday, January 14, 2021 at 2:25:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/KeyboardArbiter.framework/KeyboardArbiter
*/

@class NSString, _UIKeyboardArbiter;


@protocol _UIKeyboardArbiterLink <NSObject>
@property (nonatomic,readonly) NSString * serviceName; 
@property (assign,nonatomic,__weak) _UIKeyboardArbiter * owner; 
@property (nonatomic,readonly) BOOL isAvailable; 
@required
-(BOOL)isAvailable;
-(void)detach:(id)arg1;
-(_UIKeyboardArbiter *)owner;
-(void)createSceneWithCompletion:(/*^block*/id)arg1;
-(void)connectWithQueue:(id)arg1;
-(void)setOwner:(id)arg1;
-(NSString *)serviceName;
-(void)attach:(id)arg1;
-(void)updateSceneSettings;

@end

