/*
* Generated on Thursday, January 14, 2021 at 2:27:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
*/

#import <VideoSubscriberAccount/VideoSubscriberAccount-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface VSAccountProviderResponse : NSObject <NSCopying, NSSecureCoding> {

	NSString* _authenticationScheme;
	NSString* _status;
	NSString* _body;

}

@property (nonatomic,copy) NSString * authenticationScheme;              //@synthesize authenticationScheme=_authenticationScheme - In the implementation block
@property (nonatomic,copy) NSString * status;                            //@synthesize status=_status - In the implementation block
@property (nonatomic,copy) NSString * body;                              //@synthesize body=_body - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setBody:(NSString *)arg1 ;
-(NSString *)body;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setStatus:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)status;
-(NSString *)authenticationScheme;
-(void)setAuthenticationScheme:(NSString *)arg1 ;
@end

