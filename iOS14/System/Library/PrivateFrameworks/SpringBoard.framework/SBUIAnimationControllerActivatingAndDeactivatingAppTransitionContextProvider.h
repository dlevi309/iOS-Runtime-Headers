/*
* Generated on Thursday, January 14, 2021 at 2:25:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBUIAnimationControllerTransitionContextProvider.h>

@class SBApplicationSceneEntity, NSSet, NSString;

@interface SBUIAnimationControllerActivatingAndDeactivatingAppTransitionContextProvider : NSObject <SBUIAnimationControllerTransitionContextProvider> {

	SBApplicationSceneEntity* _toAppSceneEntity;
	SBApplicationSceneEntity* _fromAppSceneEntity;
	SBApplicationSceneEntity* _toApplicationSceneEntity;
	SBApplicationSceneEntity* _fromApplicationSceneEntity;

}

@property (nonatomic,retain) SBApplicationSceneEntity * activatingAppSceneEntity;                  //@synthesize toAppSceneEntity=_toAppSceneEntity - In the implementation block
@property (nonatomic,retain) SBApplicationSceneEntity * deactivatingAppSceneEntity;                //@synthesize fromAppSceneEntity=_fromAppSceneEntity - In the implementation block
@property (nonatomic,copy,readonly) NSSet * toApplicationSceneEntities; 
@property (nonatomic,readonly) SBApplicationSceneEntity * toApplicationSceneEntity;                //@synthesize toApplicationSceneEntity=_toApplicationSceneEntity - In the implementation block
@property (nonatomic,copy,readonly) NSSet * fromApplicationSceneEntities; 
@property (nonatomic,readonly) SBApplicationSceneEntity * fromApplicationSceneEntity;              //@synthesize fromApplicationSceneEntity=_fromApplicationSceneEntity - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)transitionContextProviderWithToApplicationSceneEntity:(id)arg1 fromApplicationSceneEntity:(id)arg2 ;
-(NSSet *)fromApplicationSceneEntities;
-(NSSet *)toApplicationSceneEntities;
-(SBApplicationSceneEntity *)toApplicationSceneEntity;
-(SBApplicationSceneEntity *)fromApplicationSceneEntity;
-(id)initWithToApplicationSceneEntity:(id)arg1 fromApplicationSceneEntity:(id)arg2 ;
-(SBApplicationSceneEntity *)activatingAppSceneEntity;
-(void)setActivatingAppSceneEntity:(SBApplicationSceneEntity *)arg1 ;
-(SBApplicationSceneEntity *)deactivatingAppSceneEntity;
-(void)setDeactivatingAppSceneEntity:(SBApplicationSceneEntity *)arg1 ;
@end

