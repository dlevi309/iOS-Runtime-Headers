/*
* Generated on Monday, March 1, 2021 at 2:31:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus
*/

#import <Pegasus/Pegasus-Structs.h>
#import <UIKitCore/UIView.h>

@class NSTimer, UIView, _PGPlaybackProgressIndicatorRangesView, PGPlaybackProgress, NSArray;

@interface PGPlaybackProgressIndicator : UIView {

	NSTimer* _playbackProgressTimer;
	double _currentProgress;
	UIView* _containerView;
	_PGPlaybackProgressIndicatorRangesView* _loadedTimeRangesView;
	_PGPlaybackProgressIndicatorRangesView* _playbackProgressView;
	PGPlaybackProgress* _playbackProgress;
	NSArray* _loadedTimeRanges;

}

@property (nonatomic,retain) PGPlaybackProgress * playbackProgress;              //@synthesize playbackProgress=_playbackProgress - In the implementation block
@property (nonatomic,retain) NSArray * loadedTimeRanges;                         //@synthesize loadedTimeRanges=_loadedTimeRanges - In the implementation block
-(void)dealloc;
-(void)setBounds:(CGRect)arg1 ;
-(NSArray *)loadedTimeRanges;
-(void)setLoadedTimeRanges:(NSArray *)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(PGPlaybackProgress *)playbackProgress;
-(void)setPlaybackProgress:(PGPlaybackProgress *)arg1 ;
-(void)_updatePlaybackProgressMaskViewMaskRanges;
-(void)_updatePlaybackProgressTimer;
-(void)_updateLoadedTimeRangesMaskViewMaskRanges;
@end

