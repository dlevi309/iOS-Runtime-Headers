/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setHttpResponse:(NSHTTPURLResponse *)arg1 ;
-(NSHTTPURLResponse *)httpResponse;
-(NSData *)httpBody;
-(void)setHttpBody:(NSData *)arg1 ;
-(NSDictionary *)httpAuthorizationHeaders;
-(void)setHttpAuthorizationHeaders:(NSDictionary *)arg1 ;
@end

