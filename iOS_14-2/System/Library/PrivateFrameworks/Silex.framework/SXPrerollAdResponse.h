/*
* Generated on Thursday, January 14, 2021 at 2:24:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/SXAdResponse.h>

@protocol SXPrerollAdMetadata;
@class NSURL;

@interface SXPrerollAdResponse : SXAdResponse {

	NSURL* _videoURL;
	double _skipDuration;
	id<SXPrerollAdMetadata> _prerollAdMetadata;

}

@property (nonatomic,retain) NSURL * videoURL;                                       //@synthesize videoURL=_videoURL - In the implementation block
@property (assign,nonatomic) double skipDuration;                                    //@synthesize skipDuration=_skipDuration - In the implementation block
@property (nonatomic,retain) id<SXPrerollAdMetadata> prerollAdMetadata;              //@synthesize prerollAdMetadata=_prerollAdMetadata - In the implementation block
-(void)setVideoURL:(NSURL *)arg1 ;
-(NSURL *)videoURL;
-(void)setSkipDuration:(double)arg1 ;
-(double)skipDuration;
-(id<SXPrerollAdMetadata>)prerollAdMetadata;
-(void)setPrerollAdMetadata:(id<SXPrerollAdMetadata>)arg1 ;
@end

