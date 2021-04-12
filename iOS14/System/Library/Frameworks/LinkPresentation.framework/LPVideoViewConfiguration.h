/*
* Generated on Thursday, January 14, 2021 at 2:22:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/

#import <LinkPresentation/LinkPresentation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface LPVideoViewConfiguration : NSObject <NSCopying> {

	BOOL _disablePlayback;
	BOOL _disablePlaybackControls;
	BOOL _disableAutoPlay;
	BOOL _allowsLoadingMediaWithAutoPlayDisabled;
	double _fullScreenTransitionCornerRadius;

}

@property (assign,nonatomic) BOOL disablePlayback;                                     //@synthesize disablePlayback=_disablePlayback - In the implementation block
@property (assign,nonatomic) BOOL disablePlaybackControls;                             //@synthesize disablePlaybackControls=_disablePlaybackControls - In the implementation block
@property (assign,nonatomic) BOOL disableAutoPlay;                                     //@synthesize disableAutoPlay=_disableAutoPlay - In the implementation block
@property (assign,nonatomic) BOOL allowsLoadingMediaWithAutoPlayDisabled;              //@synthesize allowsLoadingMediaWithAutoPlayDisabled=_allowsLoadingMediaWithAutoPlayDisabled - In the implementation block
@property (assign,nonatomic) double fullScreenTransitionCornerRadius;                  //@synthesize fullScreenTransitionCornerRadius=_fullScreenTransitionCornerRadius - In the implementation block
-(BOOL)disableAutoPlay;
-(BOOL)disablePlayback;
-(void)setDisablePlayback:(BOOL)arg1 ;
-(BOOL)disablePlaybackControls;
-(void)setDisablePlaybackControls:(BOOL)arg1 ;
-(void)setDisableAutoPlay:(BOOL)arg1 ;
-(BOOL)allowsLoadingMediaWithAutoPlayDisabled;
-(void)setAllowsLoadingMediaWithAutoPlayDisabled:(BOOL)arg1 ;
-(double)fullScreenTransitionCornerRadius;
-(void)setFullScreenTransitionCornerRadius:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

