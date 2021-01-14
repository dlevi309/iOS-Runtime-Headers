/*
* Generated on Thursday, January 14, 2021 at 2:24:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
*/

#import <ControlCenterUI/ControlCenterUI-Structs.h>
#import <libobjc.A.dylib/CCUIAnimationParameters.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@protocol CCUIAnimationTimingFunctionDescription;
@class NSString;

@interface CCUICASpringAnimationParameters : NSObject <CCUIAnimationParameters, NSMutableCopying> {

	double _mass;
	double _stiffness;
	double _damping;
	id<CCUIAnimationTimingFunctionDescription> _timingFunction;

}

@property (nonatomic,readonly) double mass;                                                                 //@synthesize mass=_mass - In the implementation block
@property (nonatomic,readonly) double stiffness;                                                            //@synthesize stiffness=_stiffness - In the implementation block
@property (nonatomic,readonly) double damping;                                                              //@synthesize damping=_damping - In the implementation block
@property (nonatomic,copy,readonly) id<CCUIAnimationTimingFunctionDescription> timingFunction;              //@synthesize timingFunction=_timingFunction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)stiffness;
-(id)_initWithAnimationParameters:(id)arg1 ;
-(double)mass;
-(id)init;
-(double)damping;
-(id<CCUIAnimationTimingFunctionDescription>)timingFunction;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

