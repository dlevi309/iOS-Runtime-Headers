/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)type;
-(unsigned long long)method;
-(NSDictionary *)properties;
-(void)setMethod:(unsigned long long)arg1 ;
-(void)setProperties:(NSDictionary *)arg1 ;
-(id)initWithMethod:(unsigned long long)arg1 ;
-(BOOL)isCertificate;
-(BOOL)isUserNamePassword;
@end

