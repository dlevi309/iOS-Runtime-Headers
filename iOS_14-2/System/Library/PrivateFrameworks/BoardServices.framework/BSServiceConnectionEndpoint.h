/*
* Generated on Thursday, January 14, 2021 at 2:23:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BoardServices.framework/BoardServices
*/

#import <BoardServices/BoardServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/BSXPCSecureCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_xpc_object;
@class NSString, NSObject;

@interface BSServiceConnectionEndpoint : NSObject <NSCopying, BSXPCCoding, BSXPCSecureCoding, NSSecureCoding> {

	NSString* _targetDescription;
	BOOL _nonLaunching;
	NSString* _service;
	NSString* _instance;
	NSString* _machName;
	NSObject*<OS_xpc_object> _endpoint;

}

@property (nonatomic,copy,readonly) NSString * targetDescription; 
@property (nonatomic,copy,readonly) NSString * service;                        //@synthesize service=_service - In the implementation block
@property (nonatomic,copy,readonly) NSString * instance;                       //@synthesize instance=_instance - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)nullEndpointForService:(id)arg1 instance:(id)arg2 ;
+(id)endpointForSystemMachName:(id)arg1 service:(id)arg2 instance:(id)arg3 ;
+(id)defaultShellMachName;
+(id)endpointForMachName:(id)arg1 service:(id)arg2 instance:(id)arg3 ;
+(BOOL)supportsBSXPCSecureCoding;
-(long long)compare:(id)arg1 ;
-(id)init;
-(BOOL)isNullEndpoint;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)instance;
-(void)encodeWithBSXPCCoder:(id)arg1 ;
-(NSString *)description;
-(id)initWithXPCDictionary:(id)arg1 ;
-(BOOL)isEqualToServiceEndpoint:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(NSString *)targetDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)service;
-(id)initWithBSXPCCoder:(id)arg1 ;
@end

