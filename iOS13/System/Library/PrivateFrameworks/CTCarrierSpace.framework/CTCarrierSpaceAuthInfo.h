/*
* Generated on Monday, March 1, 2021 at 2:32:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CTCarrierSpace.framework/CTCarrierSpace
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSDate;

@interface CTCarrierSpaceAuthInfo : NSObject <NSSecureCoding> {

	BOOL _shouldCache;
	NSData* _accessToken;
	NSData* _refreshToken;
	NSDate* _expiresAt;

}

@property (nonatomic,retain) NSData * accessToken;               //@synthesize accessToken=_accessToken - In the implementation block
@property (nonatomic,retain) NSData * refreshToken;              //@synthesize refreshToken=_refreshToken - In the implementation block
@property (nonatomic,retain) NSDate * expiresAt;                 //@synthesize expiresAt=_expiresAt - In the implementation block
@property (assign,nonatomic) BOOL shouldCache;                   //@synthesize shouldCache=_shouldCache - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)shouldCache;
-(NSDate *)expiresAt;
-(void)setAccessToken:(NSData *)arg1 ;
-(NSData *)accessToken;
-(void)setShouldCache:(BOOL)arg1 ;
-(NSData *)refreshToken;
-(void)setExpiresAt:(NSDate *)arg1 ;
-(void)setRefreshToken:(NSData *)arg1 ;
@end

