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

@interface CCUICABasicAnimationParameters : NSObject <CCUIAnimationParameters, NSMutableCopying> {

	double _duration;
	id<CCUIAnimationTimingFunctionDescription> _timingFunction;

}

@property (nonatomic,readonly) double duration;                                                             //@synthesize duration=_duration - In the implementation block
@property (nonatomic,copy,readonly) id<CCUIAnimationTimingFunctionDescription> timingFunction;              //@synthesize timingFunction=_timingFunction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_initWithAnimationParameters:(id)arg1 ;
-(id)init;
-(id<CCUIAnimationTimingFunctionDescription>)timingFunction;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(unsigned long long)hash;
-(double)duration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

