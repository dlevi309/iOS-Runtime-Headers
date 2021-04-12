/*
* Generated on Thursday, January 14, 2021 at 2:26:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setPosterImage:(UIImage *)arg1 ;
-(UIImage *)posterImage;
-(NTKVideoPlayerListing *)currentListing;
-(void)setCurrentListing:(NTKVideoPlayerListing *)arg1 ;
-(void)advanceToNextListing:(unsigned long long)arg1 ;
-(id)listingsToQueueAfterCurrent;
-(id)listingToQueueOncePlaybackStarts;
@end

