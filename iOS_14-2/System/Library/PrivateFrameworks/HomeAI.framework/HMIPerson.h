/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HomeAI/HomeAI-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSString, NSSet;

@interface HMIPerson : HMFObject <NSCopying, NSSecureCoding> {

	NSUUID* _UUID;
	NSString* _name;
	NSSet* _personLinks;

}

@property (copy,readonly) NSUUID * UUID;                    //@synthesize UUID=_UUID - In the implementation block
@property (copy,readonly) NSString * name;                  //@synthesize name=_name - In the implementation block
@property (copy,readonly) NSSet * personLinks;              //@synthesize personLinks=_personLinks - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)personFromHomePerson:(id)arg1 ;
-(NSUUID *)UUID;
-(void)encodeWithCoder:(id)arg1 ;
-(NSSet *)personLinks;
-(NSString *)name;
-(id)attributeDescriptions;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithUUID:(id)arg1 name:(id)arg2 ;
-(id)initWithUUID:(id)arg1 name:(id)arg2 personLinks:(id)arg3 ;
@end

