/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id<FBSProcess>)process;
-(id)succinctDescription;
-(BOOL)isInvalidated;
-(FBSProcessExecutionPolicy *)policy;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(BKSProcessAssertion *)assertion;
-(void)deactivate;
-(void)activate;
-(NSString *)name;
-(NSString *)description;
-(id)initWithName:(id)arg1 process:(id)arg2 policy:(id)arg3 ;
-(BOOL)isActivated;
-(void)invalidate;
-(unsigned long long)activationCount;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(void)dealloc;
@end

