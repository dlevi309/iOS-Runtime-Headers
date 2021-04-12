/*
* Generated on Monday, March 1, 2021 at 2:31:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Social.framework/Social
*/

#import <Social/SLRequest.h>

@class NSString;

@interface SLFacebookRequest : SLRequest

@property (retain) NSString * accessToken; 
@property (assign) int responseDataFormat; 
-(void)setAccessToken:(NSString *)arg1 ;
-(NSString *)accessToken;
-(id)preparedURLRequest;
-(id)initWithURL:(id)arg1 parameters:(id)arg2 requestMethod:(long long)arg3 ;
-(void)setResponseDataFormat:(int)arg1 ;
-(void)preflightRequest;
-(int)responseDataFormat;
@end

