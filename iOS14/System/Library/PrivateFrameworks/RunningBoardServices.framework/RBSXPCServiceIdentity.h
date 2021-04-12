/*
* Generated on Thursday, January 14, 2021 at 2:21:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
*/

#import <libobjc.A.dylib/RBSXPCSecureCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class RBSXPCServiceDefinition, NSString, RBSProcessInstance, NSUUID;

@interface RBSXPCServiceIdentity : NSObject <RBSXPCSecureCoding, NSSecureCoding> {

	RBSXPCServiceDefinition* _definition;
	NSString* _sessionID;
	RBSProcessInstance* _host;
	NSUUID* _uuid;

}

@property (nonatomic,readonly) RBSXPCServiceDefinition * definition;              //@synthesize definition=_definition - In the implementation block
@property (nonatomic,copy,readonly) NSString * sessionID;                         //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,readonly) RBSProcessInstance * host;                         //@synthesize host=_host - In the implementation block
@property (nonatomic,readonly) NSUUID * uuid;                                     //@synthesize uuid=_uuid - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(BOOL)supportsRBSXPCSecureCoding;
+(id)identityWithDefinition:(id)arg1 sessionID:(id)arg2 host:(id)arg3 UUID:(id)arg4 ;
-(RBSProcessInstance *)host;
-(NSString *)sessionID;
-(NSUUID *)uuid;
-(id)initWithRBSXPCCoder:(id)arg1 ;
-(void)encodeWithRBSXPCCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(RBSXPCServiceDefinition *)definition;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

