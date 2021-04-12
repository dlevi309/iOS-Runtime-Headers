/*
* Generated on Monday, March 1, 2021 at 2:33:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(NSDictionary *)userInfo;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(NSData *)userInfoData;
-(void)setUserInfoData:(NSData *)arg1 ;
-(NSDictionary *)clientUserInfo;
-(void)setClientUserInfo:(NSDictionary *)arg1 ;
-(BOOL)updateUserInfoData:(id)arg1 error:(id*)arg2 ;
-(BOOL)updateUserInfo:(id)arg1 error:(id*)arg2 ;
-(BOOL)verifyUserInfo;
@end

