/*
* Generated on Thursday, January 14, 2021 at 2:23:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppSSO.framework/AppSSO
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSHTTPURLResponse, NSData;

@interface SOAuthorizationCredential : NSObject <NSSecureCoding> {

	NSDictionary* _httpAuthorizationHeaders;
	NSHTTPURLResponse* _httpResponse;
	NSData* _httpBody;

}

@property (nonatomic,retain) NSDictionary * httpAuthorizationHeaders;              //@synthesize httpAuthorizationHeaders=_httpAuthorizationHeaders - In the implementation block
@property (nonatomic,copy) NSHTTPURLResponse * httpResponse;                       //@synthesize httpResponse=_httpResponse - In the implementation block
@property (nonatomic,retain) NSData * httpBody;                                    //@synthesize httpBody=_httpBody - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setHttpResponse:(NSHTTPURLResponse *)arg1 ;
-(NSHTTPURLResponse *)httpResponse;
-(void)setHttpAuthorizationHeaders:(NSDictionary *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSData *)httpBody;
-(NSDictionary *)httpAuthorizationHeaders;
-(void)setHttpBody:(NSData *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

