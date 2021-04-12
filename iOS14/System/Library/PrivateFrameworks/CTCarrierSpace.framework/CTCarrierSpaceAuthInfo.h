/*
* Generated on Thursday, January 14, 2021 at 2:27:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)shouldCache;
-(NSData *)accessToken;
-(id)init;
-(NSData *)refreshToken;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSDate *)expiresAt;
-(id)initWithCoder:(id)arg1 ;
-(void)setExpiresAt:(NSDate *)arg1 ;
-(void)setAccessToken:(NSData *)arg1 ;
-(void)setShouldCache:(BOOL)arg1 ;
-(void)setRefreshToken:(NSData *)arg1 ;
@end

