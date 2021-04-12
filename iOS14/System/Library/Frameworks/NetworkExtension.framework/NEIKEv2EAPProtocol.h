/*
* Generated on Thursday, January 14, 2021 at 2:22:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary;

@interface NEIKEv2EAPProtocol : NSObject <NSCopying> {

	unsigned long long _method;
	NSDictionary* _properties;

}

@property (readonly) unsigned type; 
@property (readonly) BOOL isUserNamePassword; 
@property (readonly) BOOL isCertificate; 
@property (assign) unsigned long long method;              //@synthesize method=_method - In the implementation block
@property (retain) NSDictionary * properties;              //@synthesize properties=_properties - In the implementation block
-(NSDictionary *)properties;
-(BOOL)isCertificate;
-(unsigned long long)method;
-(BOOL)isUserNamePassword;
-(id)description;
-(id)initWithMethod:(unsigned long long)arg1 ;
-(unsigned)type;
-(unsigned long long)hash;
-(void)setMethod:(unsigned long long)arg1 ;
-(void)setProperties:(NSDictionary *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

