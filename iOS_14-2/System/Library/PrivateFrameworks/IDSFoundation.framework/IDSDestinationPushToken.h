/*
* Generated on Thursday, January 14, 2021 at 2:22:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/

#import <IDSFoundation/IDSFoundation-Structs.h>
#import <IDSFoundation/IDSDestination.h>

@class NSString, NSData;

@interface IDSDestinationPushToken : IDSDestination {

	NSString* _alias;
	NSData* _pushToken;

}

@property (nonatomic,readonly) NSString * alias;                //@synthesize alias=_alias - In the implementation block
@property (nonatomic,readonly) NSData * pushToken;              //@synthesize pushToken=_pushToken - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)alias;
-(NSData *)pushToken;
-(id)groupID;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)destinationURIs;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithAlias:(id)arg1 pushToken:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

