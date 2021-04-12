/*
* Generated on Thursday, January 14, 2021 at 2:22:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/

#import <LinkPresentation/LPFetcherResponse.h>

@class NSURL;

@interface LPFetcherURLResponse : LPFetcherResponse {

	NSURL* _URL;

}

@property (nonatomic,copy,readonly) NSURL * URL;              //@synthesize URL=_URL - In the implementation block
-(id)initWithURL:(id)arg1 fetcher:(id)arg2 ;
-(NSURL *)URL;
@end

