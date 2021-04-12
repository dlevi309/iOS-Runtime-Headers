/*
* Generated on Thursday, January 14, 2021 at 2:23:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SPOwner.framework/SPOwner
*/

#import <SPOwner/SPOwner-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface SPBeaconUpdates : NSObject <NSCopying, NSSecureCoding> {

	NSString* _name;
	long long _roleId;
	NSString* _emoji;

}

@property (nonatomic,copy) NSString * name;                 //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) long long roleId;              //@synthesize roleId=_roleId - In the implementation block
@property (nonatomic,copy) NSString * emoji;                //@synthesize emoji=_emoji - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)emoji;
-(long long)roleId;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(NSString *)name;
-(void)setEmoji:(NSString *)arg1 ;
-(void)setRoleId:(long long)arg1 ;
-(id)initWithName:(id)arg1 roleId:(long long)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

