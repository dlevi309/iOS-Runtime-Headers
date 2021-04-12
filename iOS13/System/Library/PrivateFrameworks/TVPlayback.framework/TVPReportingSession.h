/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
*/


@protocol TVPMediaItem;
@class NSObject, RTCReporting;

@interface TVPReportingSession : NSObject {

	NSObject*<TVPMediaItem> _mediaItem;
	RTCReporting* _reporter;

}

@property (nonatomic,retain) NSObject*<TVPMediaItem> mediaItem;              //@synthesize mediaItem=_mediaItem - In the implementation block
@property (nonatomic,retain) RTCReporting * reporter;                        //@synthesize reporter=_reporter - In the implementation block
+(void)initialize;
-(NSObject*<TVPMediaItem>)mediaItem;
-(void)setMediaItem:(NSObject*<TVPMediaItem>)arg1 ;
-(id)initWithMediaItem:(id)arg1 ;
-(RTCReporting *)reporter;
-(void)setReporter:(RTCReporting *)arg1 ;
-(void)_sendEvent:(id)arg1 withCategory:(unsigned short)arg2 type:(unsigned short)arg3 values:(id)arg4 ;
-(void)reportDownloadFinishedWithResult:(long long)arg1 error:(id)arg2 ;
@end

