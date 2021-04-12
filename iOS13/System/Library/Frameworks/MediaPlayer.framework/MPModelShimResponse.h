/*
* Generated on Monday, March 1, 2021 at 2:31:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPResponse.h>

@class MPModelResponse;

@interface MPModelShimResponse : MPResponse {

	MPModelResponse* _modelResponse;

}

@property (nonatomic,retain) MPModelResponse * modelResponse;              //@synthesize modelResponse=_modelResponse - In the implementation block
+(id)builderProtocol;
-(id)initWithRequest:(id)arg1 middleware:(id)arg2 ;
-(void)setModelResponse:(MPModelResponse *)arg1 ;
-(MPModelResponse *)modelResponse;
@end

