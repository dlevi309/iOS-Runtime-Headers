/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@protocol FBSProcess;
@class NSString, FBSProcessExecutionPolicy, BKSProcessAssertion;

@interface FBSProcessAssertion : NSObject <BSDescriptionProviding> {

	NSString* _name;
	id<FBSProcess> _process;
	FBSProcessExecutionPolicy* _policy;
	unsigned long long _activationCount;
	BOOL _invalidated;
	BKSProcessAssertion* _assertion;

}

@property (nonatomic,readonly) BKSProcessAssertion * assertion;                    //@synthesize assertion=_assertion - In the implementation block
@property (nonatomic,readonly) unsigned long long activationCount;                 //@synthesize activationCount=_activationCount - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                               //@synthesize name=_name - In the implementation block
@property (nonatomic,__weak,readonly) id<FBSProcess> process;                      //@synthesize process=_process - In the implementation block
@property (nonatomic,readonly) FBSProcessExecutionPolicy * policy;                 //@synthesize policy=_policy - In the implementation block
@property (getter=isActivated,nonatomic,readonly) BOOL activated; 
@property (getter=isInvalidated,nonatomic,readonly) BOOL invalidated;              //@synthesize invalidated=_invalidated - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)description;
-(NSString *)name;
-(void)invalidate;
-(BOOL)isInvalidated;
-(FBSProcessExecutionPolicy *)policy;
-(BKSProcessAssertion *)assertion;
-(id<FBSProcess>)process;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)activate;
-(void)deactivate;
-(unsigned long long)activationCount;
-(id)initWithName:(id)arg1 process:(id)arg2 policy:(id)arg3 ;
-(BOOL)isActivated;
@end

