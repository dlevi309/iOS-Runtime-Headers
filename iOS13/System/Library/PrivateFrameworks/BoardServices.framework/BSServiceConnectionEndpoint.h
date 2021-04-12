/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BoardServices.framework/BoardServices
*/

#import <BoardServices/BoardServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/BSXPCSecureCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_xpc_object;
@class NSObject, NSString;

@interface BSServiceConnectionEndpoint : NSObject <NSCopying, BSXPCCoding, BSXPCSecureCoding, NSSecureCoding> {

	NSObject*<OS_xpc_object> _endpoint;
	NSString* _targetDescription;
	NSString* _service;
	NSString* _instance;
	BOOL _nonLaunching;
	NSString* _machName;

}

@property (nonatomic,readonly) NSString * _machName;                                   //@synthesize machName=_machName - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_xpc_object> _endpoint;                     //@synthesize endpoint=_endpoint - In the implementation block
@property (getter=_isNonLaunching,nonatomic,readonly) BOOL _nonLaunching;              //@synthesize nonLaunching=_nonLaunching - In the implementation block
@property (nonatomic,copy,readonly) NSString * targetDescription; 
@property (nonatomic,copy,readonly) NSString * service;                                //@synthesize service=_service - In the implementation block
@property (nonatomic,copy,readonly) NSString * instance;                               //@synthesize instance=_instance - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(BOOL)supportsBSXPCSecureCoding;
+(id)defaultShellMachName;
+(id)endpointForMachName:(id)arg1 service:(id)arg2 instance:(id)arg3 ;
+(id)_endpointForManager:(id)arg1 domain:(id)arg2 service:(id)arg3 instance:(id)arg4 ;
+(id)_endpointFromEndowmentRepresentation:(id)arg1 ;
+(id)endpointForSystemMachName:(id)arg1 service:(id)arg2 instance:(id)arg3 ;
+(id)nullEndpointForService:(id)arg1 instance:(id)arg2 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)compare:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSObject*<OS_xpc_object>)_endpoint;
-(NSString *)instance;
-(NSString *)service;
-(void)encodeWithBSXPCCoder:(id)arg1 ;
-(id)initWithBSXPCCoder:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(id)_endowmentRepresentation;
-(BOOL)isNullEndpoint;
-(BOOL)_isNonLaunching;
-(NSString *)targetDescription;
-(NSString *)_machName;
-(id)_initWithEndpoint:(id)arg1 isNonLaunching:(BOOL)arg2 targetDescription:(id)arg3 service:(id)arg4 instance:(id)arg5 ;
-(BOOL)isEqualToServiceEndpoint:(id)arg1 ;
@end

