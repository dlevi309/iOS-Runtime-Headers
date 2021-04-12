/*
* Generated on Monday, March 1, 2021 at 2:30:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/PHCompositeMediaResult.h>

@class NSURL;

@interface PHVideoResult : PHCompositeMediaResult {

	NSURL* _videoURL;

}

@property (nonatomic,retain) NSURL * videoURL;              //@synthesize videoURL=_videoURL - In the implementation block
-(NSURL *)videoURL;
-(BOOL)containsValidData;
-(id)videoAdjustmentData;
-(void)setVideoAdjustmentData:(id)arg1 ;
-(void)setVideoURL:(NSURL *)arg1 ;
@end

