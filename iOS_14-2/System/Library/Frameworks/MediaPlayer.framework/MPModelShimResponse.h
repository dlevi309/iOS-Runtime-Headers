/*
* Generated on Thursday, January 14, 2021 at 2:21:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPResponse.h>

@class MPModelResponse;

@interface MPModelShimResponse : MPResponse {

	MPModelResponse* _modelResponse;

}

@property (nonatomic,retain) MPModelResponse * modelResponse;              //@synthesize modelResponse=_modelResponse - In the implementation block
+(id)builderProtocol;
-(void)setModelResponse:(MPModelResponse *)arg1 ;
-(MPModelResponse *)modelResponse;
-(id)initWithRequest:(id)arg1 middleware:(id)arg2 ;
@end

