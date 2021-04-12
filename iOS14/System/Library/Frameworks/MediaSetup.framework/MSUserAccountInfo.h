/*
* Generated on Thursday, January 14, 2021 at 2:26:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaSetup.framework/MediaSetup
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface MSUserAccountInfo : NSObject <NSSecureCoding> {

	NSString* _homeUserID;
	NSString* _sharedUserID;

}

@property (nonatomic,copy,readonly) NSString * homeUserID;                //@synthesize homeUserID=_homeUserID - In the implementation block
@property (nonatomic,copy,readonly) NSString * sharedUserID;              //@synthesize sharedUserID=_sharedUserID - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)sharedUserID;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)homeUserID;
-(id)initWithHomeUserID:(id)arg1 sharedUserID:(id)arg2 ;
@end

