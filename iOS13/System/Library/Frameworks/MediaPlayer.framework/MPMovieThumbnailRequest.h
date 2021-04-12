/*
* Generated on Monday, March 1, 2021 at 2:31:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@class NSArray;

@interface MPMovieThumbnailRequest : NSObject {

	NSArray* _times;
	long long _timeOption;

}

@property (nonatomic,retain) NSArray * times;                   //@synthesize times=_times - In the implementation block
@property (assign,nonatomic) long long timeOption;              //@synthesize timeOption=_timeOption - In the implementation block
-(void)setTimeOption:(long long)arg1 ;
-(void)setTimes:(NSArray *)arg1 ;
-(NSArray *)times;
-(long long)timeOption;
@end

