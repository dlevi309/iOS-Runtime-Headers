/*
* Generated on Monday, March 1, 2021 at 2:34:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/KeyboardArbiter.framework/KeyboardArbiter
*/

@class NSString, _UIKeyboardArbiter;


@protocol _UIKeyboardArbiterLink <NSObject>
@property (nonatomic,readonly) NSString * serviceName; 
@property (assign,nonatomic,__weak) _UIKeyboardArbiter * owner; 
@property (nonatomic,readonly) BOOL isAvailable; 
@required
-(void)setOwner:(id)arg1;
-(NSString *)serviceName;
-(_UIKeyboardArbiter *)owner;
-(BOOL)isAvailable;
-(void)detach:(id)arg1;
-(void)attach:(id)arg1;
-(void)connectWithQueue:(id)arg1;
-(void)createSceneWithCompletion:(/*^block*/id)arg1;
-(void)updateSceneSettings;

@end

