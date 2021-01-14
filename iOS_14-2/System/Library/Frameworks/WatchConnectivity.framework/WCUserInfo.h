/*
* Generated on Thursday, January 14, 2021 at 2:27:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WatchConnectivity.framework/WatchConnectivity
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSDictionary;

@interface WCUserInfo : NSObject <NSSecureCoding> {

	NSData* _userInfoData;
	NSDictionary* _userInfo;
	NSDictionary* _clientUserInfo;

}

@property (nonatomic,copy) NSDictionary * userInfo;                    //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,copy) NSDictionary * clientUserInfo;              //@synthesize clientUserInfo=_clientUserInfo - In the implementation block
@property (copy) NSData * userInfoData;                                //@synthesize userInfoData=_userInfoData - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDictionary *)clientUserInfo;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(void)setClientUserInfo:(NSDictionary *)arg1 ;
-(NSDictionary *)userInfo;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSData *)userInfoData;
-(void)setUserInfoData:(NSData *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)updateUserInfoData:(id)arg1 error:(id*)arg2 ;
-(BOOL)updateUserInfo:(id)arg1 error:(id*)arg2 ;
-(BOOL)verifyUserInfo;
@end

