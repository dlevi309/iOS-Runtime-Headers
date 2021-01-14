/*
* Generated on Thursday, January 14, 2021 at 2:24:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

