/*
* Generated on Thursday, January 14, 2021 at 2:28:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiVelocity.framework/WiFiVelocity
*/

#import <WiFiVelocity/WiFiVelocity-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSDictionary;

@interface W5LogItemRequest : NSObject <NSCopying, NSSecureCoding> {

	NSUUID* _uuid;
	long long _itemID;
	NSDictionary* _configuration;

}

@property (nonatomic,copy) NSUUID * uuid;                             //@synthesize uuid=_uuid - In the implementation block
@property (assign,nonatomic) long long itemID;                        //@synthesize itemID=_itemID - In the implementation block
@property (nonatomic,copy) NSDictionary * configuration;              //@synthesize configuration=_configuration - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)requestWithItemID:(long long)arg1 configuration:(id)arg2 ;
-(void)setItemID:(long long)arg1 ;
-(NSUUID *)uuid;
-(id)init;
-(BOOL)conformsToProtocol:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(long long)itemID;
-(NSDictionary *)configuration;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setUuid:(NSUUID *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)setConfiguration:(NSDictionary *)arg1 ;
-(BOOL)isEqualToLogItemRequest:(id)arg1 ;
@end

