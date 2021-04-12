/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/


@protocol MPCPlayerChangeItemCommand <MPCPlayerCommand>
@required
-(id)previousItem;
-(id)nextItem;
-(id)previousItemDeferringToPlaybackQueuePosition;
-(id)previousSection;
-(id)previousChapter;
-(id)nextSection;
-(id)nextChapter;
-(id)changeToSection:(id)arg1;
-(id)changeToItem:(id)arg1;

@end

