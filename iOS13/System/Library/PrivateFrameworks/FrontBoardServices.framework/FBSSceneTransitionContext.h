/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
*/

#import <FrontBoardServices/FrontBoardServices-Structs.h>
#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class FBSceneUpdateContext, FBWatchdogTransitionContext, BSAnimationSettings, BKSAnimationFenceHandle, NSSet, BSProcessHandle, BSMutableSettings, NSString;

@interface FBSSceneTransitionContext : NSObject <BSXPCCoding, BSDescriptionProviding, NSCopying, NSMutableCopying> {

	FBSceneUpdateContext* _updateContext;
	FBWatchdogTransitionContext* _watchdogTransitionContext;
	BOOL _allowCPUThrottling;
	BSAnimationSettings* _animationSettings;
	BKSAnimationFenceHandle* _animationFence;
	NSSet* _actions;
	BSProcessHandle* _originatingProcess;
	BSMutableSettings* _otherSettings;
	BSMutableSettings* _transientLocalClientSettings;

}

@property (nonatomic,retain) FBSceneUpdateContext * updateContext; 
@property (nonatomic,retain) FBWatchdogTransitionContext * watchdogTransitionContext; 
@property (nonatomic,copy) BSAnimationSettings * animationSettings;                                //@synthesize animationSettings=_animationSettings - In the implementation block
@property (nonatomic,retain) BKSAnimationFenceHandle * animationFence;                             //@synthesize animationFence=_animationFence - In the implementation block
@property (nonatomic,copy) NSSet * actions;                                                        //@synthesize actions=_actions - In the implementation block
@property (nonatomic,retain) BSProcessHandle * originatingProcess;                                 //@synthesize originatingProcess=_originatingProcess - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)transitionContext;
-(BOOL)isUISubclass;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(BOOL)_isEmpty;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3 ;
-(NSSet *)actions;
-(void)setAnimationFence:(BKSAnimationFenceHandle *)arg1 ;
-(BKSAnimationFenceHandle *)animationFence;
-(BSAnimationSettings *)animationSettings;
-(void)setAnimationSettings:(BSAnimationSettings *)arg1 ;
-(id)otherSettings;
-(void)setActions:(NSSet *)arg1 ;
-(void)setOriginatingProcess:(BSProcessHandle *)arg1 ;
-(BSProcessHandle *)originatingProcess;
-(id)transientLocalClientSettings;
@end

