/*
* Generated on Monday, March 1, 2021 at 2:35:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@protocol VideosExtrasPlaybackDelegate <NSObject>
@optional
-(void)extrasDoneButtonPressed;
-(void)extrasMenuItemSelected:(id)arg1 atIndex:(unsigned long long)arg2;
-(void)extrasBackButtonPressed;

@required
-(void)extrasRequestsMediaPlayback:(id)arg1 isBackground:(BOOL)arg2;
-(void)extrasRequestReloadWithContext:(id)arg1;
-(void)extrasRequestsPlaybackStop;

@end

