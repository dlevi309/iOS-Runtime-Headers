/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSURL *)videoURL;
-(void)setVideoURL:(NSURL *)arg1 ;
-(double)skipDuration;
-(void)setSkipDuration:(double)arg1 ;
-(void)setPrerollAdMetadata:(id<SXPrerollAdMetadata>)arg1 ;
-(id<SXPrerollAdMetadata>)prerollAdMetadata;
@end

