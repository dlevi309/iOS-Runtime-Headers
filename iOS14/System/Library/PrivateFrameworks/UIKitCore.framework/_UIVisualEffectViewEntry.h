/*
* Generated on Thursday, January 14, 2021 at 2:20:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIVisualEffectDiffable.h>

@class NSString;

@interface _UIVisualEffectViewEntry : NSObject <_UIVisualEffectDiffable> {

	long long _requirements;

}

@property (assign,nonatomic) long long requirements;                //@synthesize requirements=_requirements - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)canTransitionToEffect:(id)arg1 ;
-(void)convertToIdentity;
-(void)addEffectToView:(id)arg1 ;
-(void)removeEffectFromView:(id)arg1 ;
-(long long)requirements;
-(NSString *)description;
-(id)copyForTransitionOut;
-(BOOL)isSameTypeOfEffect:(id)arg1 ;
-(void)applyEffectAsRequested:(BOOL)arg1 toView:(id)arg2 ;
-(id)copyForTransitionToEffect:(id)arg1 ;
-(void)applyIdentityEffectToView:(id)arg1 ;
-(void)applyRequestedEffectToView:(id)arg1 ;
-(void)setRequirements:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)shouldAnimateProperty:(id)arg1 ;
@end

