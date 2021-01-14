/*
* Generated on Thursday, January 14, 2021 at 2:25:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/KeyboardArbiter.framework/KeyboardArbiter
*/

#import <libobjc.A.dylib/_UIKeyboardArbiterLink.h>

@protocol OS_dispatch_queue;
@class NSString, _UIKeyboardArbiter, FBSScene, FBSSceneClientSettings, NSObject;

@interface _UIKeyboardArbiter_ForSpringBoard : NSObject <_UIKeyboardArbiterLink> {

	FBSScene* _scene;
	FBSSceneClientSettings* _clientSettings;
	NSObject*<OS_dispatch_queue> _queue;
	_UIKeyboardArbiter* owner;

}

@property (nonatomic,readonly) NSString * serviceName; 
@property (assign,nonatomic,__weak) _UIKeyboardArbiter * owner; 
@property (nonatomic,readonly) BOOL isAvailable; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)launch;
-(BOOL)isAvailable;
-(void)detach:(id)arg1 ;
-(_UIKeyboardArbiter *)owner;
-(void)createSceneWithCompletion:(/*^block*/id)arg1 ;
-(id)_createSceneWithIdentifier:(id)arg1 initialClientSettings:(id)arg2 ;
-(NSString *)description;
-(void)connectWithQueue:(id)arg1 ;
-(void)setOwner:(_UIKeyboardArbiter *)arg1 ;
-(NSString *)serviceName;
-(void)attach:(id)arg1 ;
-(void)updateSceneSettings;
-(void)dealloc;
@end

