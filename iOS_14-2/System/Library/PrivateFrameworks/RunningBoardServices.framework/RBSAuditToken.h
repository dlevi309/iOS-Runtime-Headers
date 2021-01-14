/*
* Generated on Thursday, January 14, 2021 at 2:21:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
*/

#import <RunningBoardServices/RunningBoardServices-Structs.h>
#import <libobjc.A.dylib/RBSXPCCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface RBSAuditToken : NSObject <RBSXPCCoding, NSCopying, NSSecureCoding> {

	SCD_Struct_RB4 _auditToken;

}

@property (nonatomic,readonly) int pid; 
@property (nonatomic,readonly) SCD_Struct_RB4 realToken;              //@synthesize auditToken=_auditToken - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)tokenFromXPCConnection:(id)arg1 ;
+(id)tokenFromAuditToken:(SCD_Struct_RB4)arg1 ;
+(id)tokenFromAuditTokenRef:(SCD_Struct_RB4*)arg1 ;
-(int)pid;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithAuditToken:(SCD_Struct_RB4)arg1 ;
-(NSString *)description;
-(SCD_Struct_RB4)realToken;
-(id)initWithXPCDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

