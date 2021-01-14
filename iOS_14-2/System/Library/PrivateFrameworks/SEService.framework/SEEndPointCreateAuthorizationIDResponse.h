/*
* Generated on Thursday, January 14, 2021 at 2:28:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SEService.framework/SEService
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSNumber;

@interface SEEndPointCreateAuthorizationIDResponse : NSObject <NSSecureCoding> {

	NSData* _authorizationID;
	NSNumber* _authorizationInterval;
	NSNumber* _authorizationCount;

}

@property (nonatomic,retain) NSData * authorizationID;                      //@synthesize authorizationID=_authorizationID - In the implementation block
@property (nonatomic,retain) NSNumber * authorizationInterval;              //@synthesize authorizationInterval=_authorizationInterval - In the implementation block
@property (nonatomic,retain) NSNumber * authorizationCount;                 //@synthesize authorizationCount=_authorizationCount - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)withAuthorizationID:(id)arg1 authorizationInterval:(double)arg2 authorizationCount:(unsigned long long)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)authorizationID;
-(void)setAuthorizationID:(NSData *)arg1 ;
-(void)setAuthorizationInterval:(NSNumber *)arg1 ;
-(void)setAuthorizationCount:(NSNumber *)arg1 ;
-(NSNumber *)authorizationInterval;
-(NSNumber *)authorizationCount;
@end

