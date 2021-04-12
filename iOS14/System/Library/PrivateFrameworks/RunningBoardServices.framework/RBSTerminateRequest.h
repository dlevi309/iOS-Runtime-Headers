/*
* Generated on Thursday, January 14, 2021 at 2:21:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
*/

#import <RunningBoardServices/RunningBoardServices-Structs.h>
#import <RunningBoardServices/RBSRequest.h>
#import <libobjc.A.dylib/RBSXPCSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol RBSServiceLocalProtocol;
@class RBSProcessPredicate, RBSTerminateContext, NSString;

@interface RBSTerminateRequest : RBSRequest <RBSXPCSecureCoding, NSCopying> {

	id<RBSServiceLocalProtocol> _service;
	BOOL _targetsAllManagedProcesses;
	RBSProcessPredicate* _predicate;
	RBSTerminateContext* _context;

}

@property (nonatomic,readonly) BOOL targetsAllManagedProcesses;              //@synthesize targetsAllManagedProcesses=_targetsAllManagedProcesses - In the implementation block
@property (nonatomic,retain) RBSProcessPredicate * predicate;                //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,readonly) RBSTerminateContext * context;                //@synthesize context=_context - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsRBSXPCSecureCoding;
-(BOOL)execute:(out id*)arg1 ;
-(id)initWithRBSXPCCoder:(id)arg1 ;
-(void)encodeWithRBSXPCCoder:(id)arg1 ;
-(RBSProcessPredicate *)predicate;
-(void)setPredicate:(RBSProcessPredicate *)arg1 ;
-(id)initWithProcessIdentity:(id)arg1 context:(id)arg2 ;
-(BOOL)targetsAllManagedProcesses;
-(RBSTerminateContext *)context;
-(id)initWithPredicate:(id)arg1 context:(id)arg2 ;
-(NSString *)description;
-(BOOL)execute:(out id*)arg1 error:(out id*)arg2 ;
-(id)initForAllManagedWithReason:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithProcessIdentifier:(id)arg1 context:(id)arg2 ;
-(id)initWithPredicate:(id)arg1 context:(id)arg2 service:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

