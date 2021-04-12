/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/SXMediaEvent.h>

@interface SXMediaEngageCompleteEvent : SXMediaEvent {

	double _mediaFrameRate;
	double _mediaDuration;
	double _mediaTimePlayed;

}

@property (assign,nonatomic) double mediaFrameRate;               //@synthesize mediaFrameRate=_mediaFrameRate - In the implementation block
@property (assign,nonatomic) double mediaDuration;                //@synthesize mediaDuration=_mediaDuration - In the implementation block
@property (assign,nonatomic) double mediaTimePlayed;              //@synthesize mediaTimePlayed=_mediaTimePlayed - In the implementation block
-(double)mediaDuration;
-(void)setMediaDuration:(double)arg1 ;
-(void)setMediaTimePlayed:(double)arg1 ;
-(double)mediaTimePlayed;
-(double)mediaFrameRate;
-(void)setMediaFrameRate:(double)arg1 ;
@end

