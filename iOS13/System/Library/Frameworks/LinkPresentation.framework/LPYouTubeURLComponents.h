/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/


@class NSString;

@interface LPYouTubeURLComponents : NSObject {

	NSString* _videoID;
	double _startTime;

}

@property (nonatomic,copy) NSString * videoID;              //@synthesize videoID=_videoID - In the implementation block
@property (assign,nonatomic) double startTime;              //@synthesize startTime=_startTime - In the implementation block
+(BOOL)parseYouTubeTimeFormat:(id)arg1 outTime:(double*)arg2 ;
+(id)formatAsYouTubeTime:(double)arg1 ;
-(double)startTime;
-(void)setStartTime:(double)arg1 ;
-(NSString *)videoID;
-(void)setVideoID:(NSString *)arg1 ;
@end

