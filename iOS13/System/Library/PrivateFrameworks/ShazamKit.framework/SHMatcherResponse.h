/*
* Generated on Monday, March 1, 2021 at 2:35:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ShazamKit.framework/ShazamKit
*/


@class NSArray;

@interface SHMatcherResponse : NSObject {

	double _recordingIntermission;
	double _retrySeconds;
	NSArray* _mediaItems;

}

@property (assign,nonatomic) double recordingIntermission;              //@synthesize recordingIntermission=_recordingIntermission - In the implementation block
@property (assign,nonatomic) double retrySeconds;                       //@synthesize retrySeconds=_retrySeconds - In the implementation block
@property (nonatomic,retain) NSArray * mediaItems;                      //@synthesize mediaItems=_mediaItems - In the implementation block
-(NSArray *)mediaItems;
-(void)setMediaItems:(NSArray *)arg1 ;
-(double)retrySeconds;
-(double)recordingIntermission;
-(void)setRecordingIntermission:(double)arg1 ;
-(void)setRetrySeconds:(double)arg1 ;
@end

