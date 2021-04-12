/*
* Generated on Monday, March 1, 2021 at 2:34:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/


@protocol JTMediaItemDelegate <NSObject>
@optional
-(void)mediaItem:(id)arg1 hasAnUpdatedThumbnail:(id)arg2;
-(BOOL)hasAValidThumbnail;
-(id)filtersForClip;
-(id)transformInfoOfClip;
-(id)projectAssetsDirectory;
-(void)setMediaItemRequiresDownload:(id)arg1;

@required
-(void)mediaItemWillLoad:(id)arg1;
-(void)mediaItemDidLoad:(id)arg1 error:(id)arg2;

@end

