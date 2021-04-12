/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

#import <libobjc.A.dylib/SVVideoPlaybackPolicy.h>

@protocol SVVideoPlaybackPolicy <NSObject>
@property (assign,getter=isPlaybackAllowedToStart,nonatomic) BOOL playbackIsAllowedToStart; 
@property (assign,nonatomic) BOOL playbackRequested; 
@required
-(BOOL)isPlaybackAllowedToStart;
-(void)setPlaybackIsAllowedToStart:(BOOL)arg1;
-(BOOL)playbackRequested;
-(void)setPlaybackRequested:(BOOL)arg1;

@end


@class NSString;

@interface SVVideoPlaybackPolicy : NSObject <SVVideoPlaybackPolicy> {

	BOOL _playbackIsAllowedToStart;
	BOOL playbackRequested;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isPlaybackAllowedToStart,nonatomic) BOOL playbackIsAllowedToStart;              //@synthesize playbackIsAllowedToStart=_playbackIsAllowedToStart - In the implementation block
@property (assign,nonatomic) BOOL playbackRequested; 
-(id)init;
-(BOOL)isPlaybackAllowedToStart;
-(void)setPlaybackIsAllowedToStart:(BOOL)arg1 ;
-(BOOL)playbackRequested;
-(void)setPlaybackRequested:(BOOL)arg1 ;
@end

