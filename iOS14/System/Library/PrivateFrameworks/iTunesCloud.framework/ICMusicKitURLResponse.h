/*
* Generated on Thursday, January 14, 2021 at 2:22:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/ICURLResponse.h>

@class NSString;

@interface ICMusicKitURLResponse : ICURLResponse {

	NSString* _serverCorrelationKey;
	NSString* _serverEnvironment;

}

@property (nonatomic,copy,readonly) NSString * serverCorrelationKey;              //@synthesize serverCorrelationKey=_serverCorrelationKey - In the implementation block
@property (nonatomic,copy,readonly) NSString * serverEnvironment;                 //@synthesize serverEnvironment=_serverEnvironment - In the implementation block
-(id)initWithURLResponse:(id)arg1 urlRequest:(id)arg2 bodyData:(id)arg3 performanceMetrics:(id)arg4 ;
-(id)description;
-(NSString *)serverEnvironment;
-(void)_initializeMusicKitURLResponse;
-(id)initWithURLResponse:(id)arg1 urlRequest:(id)arg2 bodyDataURL:(id)arg3 performanceMetrics:(id)arg4 ;
-(NSString *)serverCorrelationKey;
@end

