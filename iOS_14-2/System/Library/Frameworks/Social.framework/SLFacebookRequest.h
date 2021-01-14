/*
* Generated on Thursday, January 14, 2021 at 2:26:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Social.framework/Social
*/

#import <Social/SLRequest.h>

@class NSString;

@interface SLFacebookRequest : SLRequest

@property (retain) NSString * accessToken; 
@property (assign) int responseDataFormat; 
-(NSString *)accessToken;
-(void)setAccessToken:(NSString *)arg1 ;
-(id)preparedURLRequest;
-(void)setResponseDataFormat:(int)arg1 ;
-(void)preflightRequest;
-(id)initWithURL:(id)arg1 parameters:(id)arg2 requestMethod:(long long)arg3 ;
-(int)responseDataFormat;
@end

