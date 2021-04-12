/*
* Generated on Monday, March 1, 2021 at 2:35:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/


@protocol PMMovieProviderDelegate <NSObject>
@optional
-(void)resultWasUpdated:(id)arg1;
-(void)progressDidChange:(double)arg1 description:(id)arg2;
-(void)didSaveSuccessfully:(BOOL)arg1;

@required
-(void)didRefreshPlayerItem:(id)arg1 downloadError:(id)arg2;

@end

