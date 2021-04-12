/*
* Generated on Thursday, January 14, 2021 at 2:21:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Security.framework/Security
*/

#import <libobjc.A.dylib/OS_sec_experiment.h>

@class SecExperiment, NSString;

@interface SecExpConcrete_sec_experiment : NSObject <OS_sec_experiment> {

	SecExperiment* innerExperiment;
	unsigned long long numRuns;
	unsigned long long successRuns;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithInnerExperiment:(id)arg1 ;
-(BOOL)experimentIsAllowedForProcess;
-(BOOL)isSamplingDisabledWithDefault:(BOOL)arg1 ;
-(BOOL)isSamplingDisabled;
-(id)copyExperimentConfiguration;
-(const char*)name;
-(id)initWithName:(const char*)arg1 ;
-(const char*)identifier;
@end

