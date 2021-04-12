/*
* Generated on Monday, March 1, 2021 at 2:31:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary;

@interface AFExperimentContext : NSObject <NSCopying, NSSecureCoding> {

	NSDictionary* _experimentsByConfigurationIdentifier;

}

@property (nonatomic,readonly) AFExperiment*<AFExperimentForSiriVOXSounds> experimentForSiriVOXSounds; 
@property (nonatomic,readonly) AFExperiment*<AFExperimentForSiriVOXTapToSiriBehavior> experimentForSiriVOXTapToSiriBehavior; 
@property (nonatomic,readonly) AFExperiment*<AFInvocationFeedbackExperiment> invocationFeedbackExperiment; 
@property (nonatomic,copy,readonly) NSDictionary * experimentsByConfigurationIdentifier;                                                  //@synthesize experimentsByConfigurationIdentifier=_experimentsByConfigurationIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(/*^block*/id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_descriptionWithIndent:(unsigned long long)arg1 ;
-(id)mutatedCopyWithMutator:(/*^block*/id)arg1 ;
-(NSDictionary *)experimentsByConfigurationIdentifier;
-(AFExperiment*<AFExperimentForSiriVOXSounds>)experimentForSiriVOXSounds;
-(id)initWithExperimentsByConfigurationIdentifier:(id)arg1 ;
-(AFExperiment*<AFExperimentForSiriVOXTapToSiriBehavior>)experimentForSiriVOXTapToSiriBehavior;
-(AFExperiment*<AFInvocationFeedbackExperiment>)invocationFeedbackExperiment;
@end

