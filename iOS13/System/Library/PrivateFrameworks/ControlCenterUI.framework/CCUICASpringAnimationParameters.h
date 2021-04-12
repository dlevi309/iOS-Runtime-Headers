/*
* Generated on Monday, March 1, 2021 at 2:34:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(double)mass;
-(double)stiffness;
-(double)damping;
-(id<CCUIAnimationTimingFunctionDescription>)timingFunction;
-(id)_initWithAnimationParameters:(id)arg1 ;
@end

