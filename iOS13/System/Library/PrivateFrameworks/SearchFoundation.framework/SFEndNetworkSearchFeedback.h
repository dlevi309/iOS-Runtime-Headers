/*
* Generated on Monday, March 1, 2021 at 2:30:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <SearchFoundation/SFEndSearchFeedback.h>

@class NSDictionary;

@interface SFEndNetworkSearchFeedback : SFEndSearchFeedback {

	long long _responseSize;
	long long _statusCode;
	NSDictionary* _networkTimingData;

}

@property (assign,nonatomic) long long responseSize;                      //@synthesize responseSize=_responseSize - In the implementation block
@property (assign,nonatomic) long long statusCode;                        //@synthesize statusCode=_statusCode - In the implementation block
@property (nonatomic,copy) NSDictionary * networkTimingData;              //@synthesize networkTimingData=_networkTimingData - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)statusCode;
-(void)setStatusCode:(long long)arg1 ;
-(id)initWithStartSearch:(id)arg1 responseSize:(long long)arg2 statusCode:(long long)arg3 networkTimingData:(id)arg4 ;
-(long long)responseSize;
-(void)setResponseSize:(long long)arg1 ;
-(NSDictionary *)networkTimingData;
-(void)setNetworkTimingData:(NSDictionary *)arg1 ;
@end

