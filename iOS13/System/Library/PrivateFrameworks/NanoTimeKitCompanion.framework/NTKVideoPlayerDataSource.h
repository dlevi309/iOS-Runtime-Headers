/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@class UIImage, NTKVideoPlayerListing;

@interface NTKVideoPlayerDataSource : NSObject {

	UIImage* _posterImage;
	NTKVideoPlayerListing* _currentListing;

}

@property (nonatomic,retain) NTKVideoPlayerListing * currentListing;              //@synthesize currentListing=_currentListing - In the implementation block
@property (nonatomic,retain) UIImage * posterImage;                               //@synthesize posterImage=_posterImage - In the implementation block
-(id)init;
-(UIImage *)posterImage;
-(void)setPosterImage:(UIImage *)arg1 ;
-(NTKVideoPlayerListing *)currentListing;
-(void)setCurrentListing:(NTKVideoPlayerListing *)arg1 ;
-(void)advanceToNextListing:(unsigned long long)arg1 ;
-(id)listingsToQueueAfterCurrent;
-(id)listingToQueueOncePlaybackStarts;
@end

