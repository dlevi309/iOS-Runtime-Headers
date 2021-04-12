/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
*/

#import <RunningBoardServices/RunningBoardServices-Structs.h>
#import <libobjc.A.dylib/BSXPCSecureCoding.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_xpc_object;
@class NSObject, NSMutableDictionary, RBSProcessHandle, NSSet, NSString;

@interface RBSProcessState : NSObject <BSXPCSecureCoding, BSDescriptionProviding, NSCopying> {

	os_unfair_lock_s _lock;
	NSObject*<OS_xpc_object> _codedState;
	unsigned long long _codedValues;
	NSMutableDictionary* _codedStateCache;
	unsigned char _taskState;
	unsigned char _debugState;
	unsigned char _preventLaunchState;
	unsigned char _terminationResistance;
	RBSProcessHandle* _process;
	NSSet* _endowmentNamespaces;
	NSSet* _tags;
	NSSet* _legacyAssertions;
	NSSet* _primitiveAssertions;

}

@property (assign,nonatomic) unsigned char taskState;                                                    //@synthesize taskState=_taskState - In the implementation block
@property (assign,nonatomic) unsigned char debugState;                                                   //@synthesize debugState=_debugState - In the implementation block
@property (assign,nonatomic) unsigned char terminationResistance;                                        //@synthesize terminationResistance=_terminationResistance - In the implementation block
@property (assign,nonatomic) unsigned char preventLaunchState;                                           //@synthesize preventLaunchState=_preventLaunchState - In the implementation block
@property (nonatomic,copy) NSSet * endowmentNamespaces;                                                  //@synthesize endowmentNamespaces=_endowmentNamespaces - In the implementation block
@property (nonatomic,copy) NSSet * tags;                                                                 //@synthesize tags=_tags - In the implementation block
@property (nonatomic,copy) NSSet * legacyAssertions;                                                     //@synthesize legacyAssertions=_legacyAssertions - In the implementation block
@property (nonatomic,copy) NSSet * primitiveAssertions;                                                  //@synthesize primitiveAssertions=_primitiveAssertions - In the implementation block
@property (getter=isEmptyState,nonatomic,readonly) BOOL emptyState; 
@property (nonatomic,readonly) RBSProcessHandle * process;                                               //@synthesize process=_process - In the implementation block
@property (getter=isRunning,nonatomic,readonly) BOOL running; 
@property (getter=isDebugging,nonatomic,readonly) BOOL debugging; 
@property (getter=isPreventedFromLaunching,nonatomic,readonly) BOOL preventedFromLaunching; 
@property (nonatomic,copy,readonly) NSSet * assertions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsBSXPCSecureCoding;
+(id)stateWithProcess:(id)arg1 ;
+(void)setActiveStateDescriptor:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isRunning;
-(NSSet *)tags;
-(RBSProcessHandle *)process;
-(unsigned char)taskState;
-(BOOL)isEmptyState;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)encodeWithBSXPCCoder:(id)arg1 ;
-(id)initWithBSXPCCoder:(id)arg1 ;
-(id)initWithProcess:(id)arg1 ;
-(void)_lock_finalizeCodingForValues:(unsigned long long)arg1 ;
-(BOOL)isDifferentFromState:(id)arg1 significantly:(out BOOL*)arg2 ;
-(BOOL)isDebugging;
-(BOOL)isPreventedFromLaunching;
-(id)_lock_encodedStateForDescriptor:(id)arg1 ;
-(void)setTaskState:(unsigned char)arg1 ;
-(void)setDebugState:(unsigned char)arg1 ;
-(void)setPreventLaunchState:(unsigned char)arg1 ;
-(void)setTerminationResistance:(unsigned char)arg1 ;
-(void)setEndowmentNamespaces:(NSSet *)arg1 ;
-(void)setTags:(NSSet *)arg1 ;
-(void)setLegacyAssertions:(NSSet *)arg1 ;
-(void)setPrimitiveAssertions:(NSSet *)arg1 ;
-(NSSet *)assertions;
-(void)encodeWithPreviousState:(id)arg1 ;
-(unsigned char)debugState;
-(unsigned char)preventLaunchState;
-(NSSet *)endowmentNamespaces;
-(NSSet *)legacyAssertions;
-(NSSet *)primitiveAssertions;
-(unsigned char)terminationResistance;
@end

