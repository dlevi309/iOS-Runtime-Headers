/*
* Generated on Thursday, January 14, 2021 at 2:27:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/


@protocol PMMovieProviderDelegate <NSObject>
@optional
-(void)resultWasUpdated:(id)arg1;
-(void)progressDidChange:(double)arg1 description:(id)arg2 stageDescription:(id)arg3;
-(void)didSaveSuccessfully:(BOOL)arg1;

@required
-(void)didRefreshPlayerItem:(id)arg1 downloadError:(id)arg2;
-(CGSize*)naturalSizeForPlayback;

@end

