/*
* Generated on Thursday, January 14, 2021 at 2:28:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PDS.framework/PDS
*/

#import <PDS/PDS-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PDSUser : NSObject <NSSecureCoding, NSCopying> {

	char _userType;
	NSString* _userID;

}

@property (nonatomic,readonly) NSString * userID;              //@synthesize userID=_userID - In the implementation block
@property (nonatomic,readonly) char userType;                  //@synthesize userType=_userType - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)userWithDSID:(id)arg1 ;
-(NSString *)userID;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqualToUser:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(char)userType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithUserID:(id)arg1 userType:(char)arg2 ;
@end

