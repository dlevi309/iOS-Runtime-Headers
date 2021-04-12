/*
* Generated on Thursday, January 14, 2021 at 2:21:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
*/

#import <RunningBoardServices/RunningBoardServices-Structs.h>
#import <libobjc.A.dylib/RBSXPCSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_xpc_object;
@class NSObject, NSMutableDictionary, RBSProcessHandle, NSSet, NSString;

@interface RBSProcessState : NSObject <RBSXPCSecureCoding, NSCopying> {

	NSObject*<OS_xpc_object> _codedState;
	unsigned long long _codedValues;
	NSMutableDictionary* _codedStateCache;
	os_unfair_lock_s _lock;
	unsigned char _taskState;
	unsigned char _debugState;
	unsigned char _terminationResistance;
	BOOL _preventedFromLaunching;
	RBSProcessHandle* _process;
	NSSet* _endowmentNamespaces;
	NSSet* _tags;
	NSSet* _legacyAssertions;
	NSSet* _primitiveAssertions;

}

@property (assign,nonatomic) unsigned char taskState;                                                    //@synthesize taskState=_taskState - In the implementation block
@property (assign,nonatomic) unsigned char debugState;                                                   //@synthesize debugState=_debugState - In the implementation block
@property (assign,nonatomic) unsigned char terminationResistance;                                        //@synthesize terminationResistance=_terminationResistance - In the implementation block
@property (nonatomic,copy) NSSet * endowmentNamespaces;                                                  //@synthesize endowmentNamespaces=_endowmentNamespaces - In the implementation block
@property (nonatomic,copy) NSSet * tags;                                                                 //@synthesize tags=_tags - In the implementation block
@property (nonatomic,copy) NSSet * legacyAssertions;                                                     //@synthesize legacyAssertions=_legacyAssertions - In the implementation block
@property (nonatomic,copy) NSSet * primitiveAssertions;                                                  //@synthesize primitiveAssertions=_primitiveAssertions - In the implementation block
@property (getter=isEmptyState,nonatomic,readonly) BOOL emptyState; 
@property (nonatomic,copy,readonly) NSObject*<OS_xpc_object> codedState;                                 //@synthesize codedState=_codedState - In the implementation block
@property (nonatomic,readonly) RBSProcessHandle * process;                                               //@synthesize process=_process - In the implementation block
@property (getter=isRunning,nonatomic,readonly) BOOL running; 
@property (getter=isDebugging,nonatomic,readonly) BOOL debugging; 
@property (getter=isPreventedFromLaunching,nonatomic,readonly) BOOL preventedFromLaunching;              //@synthesize preventedFromLaunching=_preventedFromLaunching - In the implementation block
@property (nonatomic,copy,readonly) NSSet * assertions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsRBSXPCSecureCoding;
+(id)stateWithProcess:(id)arg1 ;
+(void)setActiveStateDescriptor:(id)arg1 ;
-(RBSProcessHandle *)process;
-(NSSet *)assertions;
-(id)initWithRBSXPCCoder:(id)arg1 ;
-(NSSet *)tags;
-(void)setLegacyAssertions:(NSSet *)arg1 ;
-(void)encodeWithRBSXPCCoder:(id)arg1 ;
-(id)init;
-(void)setTaskState:(unsigned char)arg1 ;
-(BOOL)isPreventedFromLaunching;
-(NSSet *)legacyAssertions;
-(unsigned char)taskState;
-(unsigned char)debugState;
-(void)setTerminationResistance:(unsigned char)arg1 ;
-(void)encodeWithPreviousState:(id)arg1 ;
-(BOOL)isDebugging;
-(NSString *)description;
-(unsigned char)terminationResistance;
-(void)setTags:(NSSet *)arg1 ;
-(void)setEndowmentNamespaces:(NSSet *)arg1 ;
-(unsigned long long)hash;
-(void)setDebugState:(unsigned char)arg1 ;
-(BOOL)isRunning;
-(BOOL)isEmptyState;
-(BOOL)isDifferentFromState:(id)arg1 significantly:(out BOOL*)arg2 ;
-(NSSet *)endowmentNamespaces;
-(NSSet *)primitiveAssertions;
-(NSObject*<OS_xpc_object>)codedState;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPrimitiveAssertions:(NSSet *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

