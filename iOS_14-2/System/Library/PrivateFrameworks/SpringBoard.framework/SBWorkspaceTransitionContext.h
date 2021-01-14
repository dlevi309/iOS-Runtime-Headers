/*
* Generated on Thursday, January 14, 2021 at 2:25:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class SBWorkspaceTransitionRequest, NSMutableDictionary, BSAnimationSettings, NSMutableArray, NSSet, NSString;

@interface SBWorkspaceTransitionContext : NSObject <BSDescriptionProviding> {

	SBWorkspaceTransitionRequest* _request;
	NSMutableDictionary* _entities;
	NSMutableDictionary* _previousEntities;
	BOOL _animationDisabled;
	BSAnimationSettings* _animationSettings;
	NSMutableArray* _finalizeBlocks;
	BOOL _finalized;

}

@property (assign,nonatomic,__weak) SBWorkspaceTransitionRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,copy,readonly) NSSet * entities; 
@property (nonatomic,copy,readonly) NSSet * previousEntities; 
@property (getter=isFinalized,nonatomic,readonly) BOOL finalized;                        //@synthesize finalized=_finalized - In the implementation block
@property (assign,nonatomic) BOOL animationDisabled;                                     //@synthesize animationDisabled=_animationDisabled - In the implementation block
@property (nonatomic,retain) BSAnimationSettings * animationSettings;                    //@synthesize animationSettings=_animationSettings - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)context;
-(void)setEntity:(id)arg1 forKey:(id)arg2 ;
-(void)addFinalizeBlock:(/*^block*/id)arg1 ;
-(id)succinctDescription;
-(NSSet *)entities;
-(BOOL)isFinalized;
-(id)compactDescriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)previousEntityForKey:(id)arg1 ;
-(BSAnimationSettings *)animationSettings;
-(void)finalize;
-(NSSet *)previousEntities;
-(id)entityForIdentifier:(id)arg1 ;
-(id)init;
-(void)setAnimationDisabled:(BOOL)arg1 ;
-(id)previousEntityForIdentifier:(id)arg1 ;
-(void)setPreviousEntity:(id)arg1 forKey:(id)arg2 ;
-(id)entityForKey:(id)arg1 ;
-(BOOL)animationDisabled;
-(void)setAnimationSettings:(BSAnimationSettings *)arg1 ;
-(void)setRequest:(SBWorkspaceTransitionRequest *)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(SBWorkspaceTransitionRequest *)request;
-(NSString *)description;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
@end

