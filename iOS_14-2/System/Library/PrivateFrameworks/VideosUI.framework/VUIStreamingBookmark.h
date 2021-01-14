/*
* Generated on Thursday, January 14, 2021 at 2:24:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@class NSNumber, NSDate;

@interface VUIStreamingBookmark : NSObject {

	NSNumber* _absoluteResumeTime;
	NSDate* _absoluteBookmarkTimestamp;
	NSNumber* _relativeResumeTime;
	NSDate* _relativeBookmarkTimestamp;

}

@property (nonatomic,retain) NSNumber * absoluteResumeTime;                   //@synthesize absoluteResumeTime=_absoluteResumeTime - In the implementation block
@property (nonatomic,retain) NSDate * absoluteBookmarkTimestamp;              //@synthesize absoluteBookmarkTimestamp=_absoluteBookmarkTimestamp - In the implementation block
@property (nonatomic,retain) NSNumber * relativeResumeTime;                   //@synthesize relativeResumeTime=_relativeResumeTime - In the implementation block
@property (nonatomic,retain) NSDate * relativeBookmarkTimestamp;              //@synthesize relativeBookmarkTimestamp=_relativeBookmarkTimestamp - In the implementation block
-(id)initWithAbsoluteResumeTime:(id)arg1 absoluteTimestamp:(id)arg2 relativeResumeTime:(id)arg3 relativeBookmarkTimestamp:(id)arg4 ;
-(NSNumber *)absoluteResumeTime;
-(void)setAbsoluteResumeTime:(NSNumber *)arg1 ;
-(NSDate *)absoluteBookmarkTimestamp;
-(void)setAbsoluteBookmarkTimestamp:(NSDate *)arg1 ;
-(NSNumber *)relativeResumeTime;
-(void)setRelativeResumeTime:(NSNumber *)arg1 ;
-(NSDate *)relativeBookmarkTimestamp;
-(void)setRelativeBookmarkTimestamp:(NSDate *)arg1 ;
@end

