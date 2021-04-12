/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(NSString *)description;
-(NSString *)name;
-(void)invalidate;
-(FBSProcessWatchdogPolicy *)policy;
-(void)setCompletion:(id)arg1 ;
-(id)completion;
-(id<FBSProcess>)process;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)activate;
-(void)deactivate;
-(void)_beginMonitoringConstraints;
-(void)_stopMonitoringConstraints;
-(void)provision:(id)arg1 wasViolatedWithError:(id)arg2 ;
-(id)initWithName:(id)arg1 process:(id)arg2 policy:(id)arg3 ;
@end

