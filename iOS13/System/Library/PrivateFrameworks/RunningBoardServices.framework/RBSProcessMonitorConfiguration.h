/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
*/

#import <RunningBoardServices/RunningBoardServices-Structs.h>
#import <libobjc.A.dylib/RBSProcessMonitorConfiguring.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/BSXPCSecureCoding.h>

@class NSHashTable, NSString, NSArray, RBSProcessStateDescriptor;

@interface RBSProcessMonitorConfiguration : NSObject <RBSProcessMonitorConfiguring, NSCopying, BSXPCSecureCoding> {

	NSHashTable* _matchedHandles;
	NSString* _desc;
	int _clientPid;
	unsigned _serviceClass;
	unsigned long long _identifier;
	NSArray* _predicates;
	RBSProcessStateDescriptor* _stateDescriptor;
	/*^block*/id _updateHandler;

}

@property (nonatomic,readonly) unsigned long long identifier;                        //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) int clientPid;                                        //@synthesize clientPid=_clientPid - In the implementation block
@property (nonatomic,copy) NSArray * predicates;                                     //@synthesize predicates=_predicates - In the implementation block
@property (nonatomic,copy) RBSProcessStateDescriptor * stateDescriptor;              //@synthesize stateDescriptor=_stateDescriptor - In the implementation block
@property (assign,nonatomic) unsigned serviceClass;                                  //@synthesize serviceClass=_serviceClass - In the implementation block
@property (nonatomic,copy) id updateHandler;                                         //@synthesize updateHandler=_updateHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)_nextIdentifier;
+(BOOL)supportsBSXPCSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)identifier;
-(void)setPredicates:(NSArray *)arg1 ;
-(void)setUpdateHandler:(id)arg1 ;
-(NSArray *)predicates;
-(RBSProcessStateDescriptor *)stateDescriptor;
-(id)succinctDescription;
-(unsigned)serviceClass;
-(void)setStateDescriptor:(RBSProcessStateDescriptor *)arg1 ;
-(void)setServiceClass:(unsigned)arg1 ;
-(BOOL)matchesProcess:(id)arg1 ;
-(id)updateHandler;
-(id)_initWithIdentifier:(unsigned long long)arg1 andPid:(int)arg2 ;
-(int)clientPid;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)_validate;
-(void)encodeWithBSXPCCoder:(id)arg1 ;
-(id)initWithBSXPCCoder:(id)arg1 ;
-(id)matchedProcesses;
-(id)fullDescription;
@end

