/*
* Generated on Thursday, January 14, 2021 at 2:27:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/


@protocol PMMovieContainerViewControllerDelegate <NSObject>
@optional
-(void)playerDidPlayToEnd;
-(void)playerProgressDidChange:(SCD_Struct_PM8)arg1;
-(void)toggleControlVisibility;
-(void)airPlayDidStart;
-(void)setAirPlayIsAvailable:(BOOL)arg1;
-(void)playerRateChanged;
-(void)playerReadyForDisplay;
-(void)playerDidDoContentChange;
-(void)playerWillDoContentChange;
-(void)playerWillRefreshMovie;
-(void)playerContentChangeFailed;
-(void)playerDidGenerateNewPosters;
-(void)playerNotReadyForDisplay;

@required
-(void)airPlayDidEnd;

@end

