/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)groupID;
-(NSData *)pushToken;
-(NSString *)alias;
-(id)destinationURIs;
-(id)initWithAlias:(id)arg1 pushToken:(id)arg2 ;
@end

