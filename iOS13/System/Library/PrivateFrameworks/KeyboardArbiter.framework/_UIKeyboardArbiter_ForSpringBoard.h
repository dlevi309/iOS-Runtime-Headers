/*
* Generated on Monday, March 1, 2021 at 2:34:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * serviceName; 
@property (assign,nonatomic,__weak) _UIKeyboardArbiter * owner; 
@property (nonatomic,readonly) BOOL isAvailable; 
+(void)launch;
-(void)dealloc;
-(NSString *)description;
-(void)setOwner:(_UIKeyboardArbiter *)arg1 ;
-(NSString *)serviceName;
-(_UIKeyboardArbiter *)owner;
-(BOOL)isAvailable;
-(void)detach:(id)arg1 ;
-(void)attach:(id)arg1 ;
-(void)connectWithQueue:(id)arg1 ;
-(void)createSceneWithCompletion:(/*^block*/id)arg1 ;
-(void)updateSceneSettings;
-(id)_createSceneWithIdentifier:(id)arg1 initialClientSettings:(id)arg2 ;
@end

