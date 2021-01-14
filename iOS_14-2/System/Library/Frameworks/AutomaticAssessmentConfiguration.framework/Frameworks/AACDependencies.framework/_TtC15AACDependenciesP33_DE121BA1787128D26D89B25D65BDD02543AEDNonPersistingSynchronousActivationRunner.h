/*
* Generated on Thursday, January 14, 2021 at 2:26:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AutomaticAssessmentConfiguration.framework/Frameworks/AACDependencies.framework/AACDependencies
*/

#import <libobjc.A.dylib/AEPolicyActivation.h>

@class NSString;

@interface _TtC15AACDependenciesP33_DE121BA1787128D26D89B25D65BDD02543AEDNonPersistingSynchronousActivationRunner : _UKNOWN_SUPERCLASS_ <AEPolicyActivation> {

	 activation;

}

@property (readonly,nonatomic) NSString * identifier; 
@property (readonly,nonatomic) long long event; 
-(long long)event;
-(NSString *)identifier;
-(void)prepareForActivationWithScratchpad:(id)arg1 ;
-(id)deactivationForScratchpad:(id)arg1 ;
-(void)activateWithInvalidationHandler:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
@end

