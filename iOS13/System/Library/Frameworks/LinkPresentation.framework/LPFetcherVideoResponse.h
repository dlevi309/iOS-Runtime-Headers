/*
* Generated on Monday, March 1, 2021 at 2:31:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/

#import <LinkPresentation/LPFetcherResponse.h>

@class LPVideo;

@interface LPFetcherVideoResponse : LPFetcherResponse {

	LPVideo* _video;

}

@property (nonatomic,retain,readonly) LPVideo * video;              //@synthesize video=_video - In the implementation block
+(id)videoPropertiesForFetcher:(id)arg1 ;
-(LPVideo *)video;
-(id)initWithVideo:(id)arg1 fetcher:(id)arg2 ;
@end

