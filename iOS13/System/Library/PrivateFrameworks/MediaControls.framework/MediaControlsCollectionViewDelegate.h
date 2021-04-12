/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
*/


@protocol MediaControlsCollectionViewDelegate <NSObject>
@required
-(void)mediaControlsCollectionViewController:(id)arg1 willDisplayViewController:(id)arg2 forItemAtIndex:(long long)arg3;
-(void)mediaControlsCollectionViewController:(id)arg1 didDisplayViewController:(id)arg2 forItemAtIndex:(long long)arg3;
-(void)mediaControlsCollectionViewController:(id)arg1 didEndDisplayingViewController:(id)arg2 forItemAtIndex:(long long)arg3;
-(BOOL)mediaControlsCollectionViewController:(id)arg1 canSelectItemAtIndex:(long long)arg2;
-(void)mediaControlsCollectionViewController:(id)arg1 willSelectItemAtIndex:(long long)arg2 withReason:(long long)arg3;
-(void)mediaControlsCollectionViewController:(id)arg1 didSelectItemAtIndex:(long long)arg2 withReason:(long long)arg3;

@end

