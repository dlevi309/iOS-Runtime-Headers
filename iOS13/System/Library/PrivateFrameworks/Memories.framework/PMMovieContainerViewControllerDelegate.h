/*
* Generated on Monday, March 1, 2021 at 2:35:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/


@protocol PMMovieContainerViewControllerDelegate <NSObject>
@optional
-(void)playerDidPlayToEnd;
-(void)playerProgressDidChange:(SCD_Struct_PM5)arg1;
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

