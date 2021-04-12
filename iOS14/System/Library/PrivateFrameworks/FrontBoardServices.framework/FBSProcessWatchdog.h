/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
*/

#import <libobjc.A.dylib/FBSProcessExecutionProvisionDelegate.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@protocol FBSProcessInternal;
@class NSString, FBSProcessWatchdogPolicy;

@interface FBSProcessWatchdog : NSObject <FBSProcessExecutionProvisionDelegate, BSDescriptionProviding> {

	NSString* _name;
	id<FBSProcessInternal> _process;
	FBSProcessWatchdogPolicy* _policy;
	BOOL _active;
	BOOL _invalidated;
	/*^block*/id _completion;

}

@property (nonatomic,copy,readonly) NSString * name;                                //@synthesize name=_name - In the implementation block
@property (nonatomic,__weak,readonly) id<FBSProcess> process;                       //@synthesize process=_process - In the implementation block
@property (nonatomic,copy,readonly) FBSProcessWatchdogPolicy * policy;              //@synthesize policy=_policy - In the implementation block
@property (nonatomic,copy) id completion;                                           //@synthesize completion=_completion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<FBSProcess>)process;
-(id)succinctDescription;
-(void)setCompletion:(id)arg1 ;
-(FBSProcessWatchdogPolicy *)policy;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)completion;
-(void)deactivate;
-(void)activate;
-(NSString *)name;
-(NSString *)description;
-(void)_beginMonitoringConstraints;
-(void)_stopMonitoringConstraints;
-(void)provision:(id)arg1 wasViolatedWithError:(id)arg2 ;
-(id)initWithName:(id)arg1 process:(id)arg2 policy:(id)arg3 ;
-(void)invalidate;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(void)dealloc;
@end

