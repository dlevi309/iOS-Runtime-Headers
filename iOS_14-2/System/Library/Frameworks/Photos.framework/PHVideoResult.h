/*
* Generated on Thursday, January 14, 2021 at 2:22:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/PHCompositeMediaResult.h>

@class NSURL, NSString;

@interface PHVideoResult : PHCompositeMediaResult {

	NSURL* _videoURL;
	NSString* _uniformTypeIdentifier;

}

@property (nonatomic,retain) NSURL * videoURL;                            //@synthesize videoURL=_videoURL - In the implementation block
@property (nonatomic,copy) NSString * uniformTypeIdentifier;              //@synthesize uniformTypeIdentifier=_uniformTypeIdentifier - In the implementation block
-(void)setVideoURL:(NSURL *)arg1 ;
-(NSString *)uniformTypeIdentifier;
-(id)videoAdjustmentData;
-(void)setVideoAdjustmentData:(id)arg1 ;
-(id)allowedInfoKeys;
-(void)setUniformTypeIdentifier:(NSString *)arg1 ;
-(BOOL)containsValidData;
-(NSURL *)videoURL;
@end

