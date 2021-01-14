/*
* Generated on Thursday, January 14, 2021 at 2:26:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Social.framework/Social
*/


@interface SLFacebookGraphUtils : NSObject
+(void)fetchLikeStatusForURL:(id)arg1 flags:(id)arg2 account:(id)arg3 completion:(/*^block*/id)arg4 ;
+(void)likeURL:(id)arg1 account:(id)arg2 completion:(/*^block*/id)arg3 ;
+(void)unlikeURL:(id)arg1 account:(id)arg2 completion:(/*^block*/id)arg3 ;
+(void)_likeURL:(id)arg1 requestMethod:(long long)arg2 account:(id)arg3 completion:(/*^block*/id)arg4 ;
+(id)_parseServerResponse:(id)arg1 error:(id*)arg2 ;
+(id)_likeQueryStringForURL:(id)arg1 flags:(unsigned long long)arg2 ;
@end

