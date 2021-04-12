/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SPOwner.framework/SPOwner
*/

#import <SPOwner/SPOwner-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface SPHandle : NSObject <NSCopying, NSSecureCoding> {

	long long _type;
	NSString* _destination;

}

@property (assign,nonatomic) long long type;                    //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * destination;              //@synthesize destination=_destination - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)handleWithEmailAddress:(id)arg1 ;
+(id)handleWithString:(id)arg1 ;
+(id)handleWithPhoneNumber:(id)arg1 ;
-(void)setDestination:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(void)setType:(long long)arg1 ;
-(id)description;
-(id)initWithType:(long long)arg1 destination:(id)arg2 ;
-(long long)type;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)destination;
-(BOOL)isEqual:(id)arg1 ;
@end

