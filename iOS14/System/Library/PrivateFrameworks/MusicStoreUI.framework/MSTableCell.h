/*
* Generated on Thursday, January 14, 2021 at 2:28:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MusicStoreUI.framework/MusicStoreUI
*/

#import <iTunesStoreUI/SUTableCell.h>

@class UIImageView, UIView, MSAudioProgressView, SUPlayerStatus;

@interface MSTableCell : SUTableCell {

	UIImageView* _backsideSnapshotView;
	UIView* _previewContainerView;
	MSAudioProgressView* _previewProgressView;
	SUPlayerStatus* _previewStatus;

}

@property (nonatomic,retain) SUPlayerStatus * previewStatus;              //@synthesize previewStatus=_previewStatus - In the implementation block
-(void)dealloc;
-(void)setPreviewStatus:(SUPlayerStatus *)arg1 ;
-(void)setPreviewStatus:(id)arg1 animated:(BOOL)arg2 ;
-(void)_flipFromPreviewProgressView;
-(void)_destroyPreviewProgressView;
-(void)_flipToPreviewProgressView;
-(SUPlayerStatus *)previewStatus;
@end

