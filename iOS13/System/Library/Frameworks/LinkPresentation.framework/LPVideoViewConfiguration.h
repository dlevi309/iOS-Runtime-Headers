/*
* Generated on Monday, March 1, 2021 at 2:31:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/

#import <LinkPresentation/LinkPresentation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface LPVideoViewConfiguration : NSObject <NSCopying> {

	BOOL _disablePlayback;
	BOOL _disablePlaybackControls;
	BOOL _disableAutoPlay;
	double _fullScreenTransitionCornerRadius;

}

@property (assign,nonatomic) BOOL disablePlayback;                                 //@synthesize disablePlayback=_disablePlayback - In the implementation block
@property (assign,nonatomic) BOOL disablePlaybackControls;                         //@synthesize disablePlaybackControls=_disablePlaybackControls - In the implementation block
@property (assign,nonatomic) BOOL disableAutoPlay;                                 //@synthesize disableAutoPlay=_disableAutoPlay - In the implementation block
@property (assign,nonatomic) double fullScreenTransitionCornerRadius;              //@synthesize fullScreenTransitionCornerRadius=_fullScreenTransitionCornerRadius - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)disableAutoPlay;
-(BOOL)disablePlayback;
-(void)setDisablePlayback:(BOOL)arg1 ;
-(BOOL)disablePlaybackControls;
-(void)setDisablePlaybackControls:(BOOL)arg1 ;
-(void)setDisableAutoPlay:(BOOL)arg1 ;
-(double)fullScreenTransitionCornerRadius;
-(void)setFullScreenTransitionCornerRadius:(double)arg1 ;
@end

