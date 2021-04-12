/*
* Generated on Thursday, January 14, 2021 at 2:22:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/

#import <LinkPresentation/LPFetcherResponse.h>

@class LPVideo;

@interface LPFetcherVideoResponse : LPFetcherResponse {

	LPVideo* _video;

}

@property (nonatomic,retain,readonly) LPVideo * video;              //@synthesize video=_video - In the implementation block
+(id)videoPropertiesForFetcher:(id)arg1 ;
-(id)initWithVideo:(id)arg1 fetcher:(id)arg2 ;
-(LPVideo *)video;
@end

