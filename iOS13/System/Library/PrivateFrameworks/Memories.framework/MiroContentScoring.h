/*
* Generated on Monday, March 1, 2021 at 2:35:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/


@interface MiroContentScoring : NSObject
+(int)isPortrait;
+(int)hasSmile;
+(int)isLandscape;
+(int)posterAsset;
+(int)liveValueForKey:(id)arg1 ;
+(int)videoBaseScore;
+(int)videoIsSloMo;
+(int)videoIsTimelapse;
+(int)videoHasVoiceRange;
+(int)videoHasFaceRange;
+(int)videoCloseToIdealDuration;
+(int)videoCloseToIdealPadding;
+(int)videoWithinBlueprintRange;
+(int)videoNotWithinBlueprintRange;
+(int)videoDurationTooShort;
+(int)sloMoHasUserDefinedRange;
+(int)nonPhotoAssetScore;
+(int)assetResolutionTooSmall;
+(int)imageBaseScore;
+(int)imageIsPanorama;
+(int)imageIsLandscapePanorama;
+(int)imageIsPortraitPanorama;
+(int)imageHDR;
+(int)imageNonHDRofPair;
+(int)imageIsBlurry;
+(int)imageIsBurst;
+(int)burstAutoPick;
+(int)burstUserPick;
+(int)burstRepresentativePick;
+(int)photoIsFavorite;
+(int)photoIsHidden;
+(int)photoIsUserEdited;
+(int)userAlbumPick;
+(int)assetWasShared;
+(int)assetWasUserAdded;
+(int)assetWasUserRemoved;
+(int)hasWink;
+(int)hasBlink;
+(int)hasCloseUpFace;
+(int)assetWithTheGreatestNumberOfDesirableRanges;
+(int)numberOfDesirableRangesToBoostScore;
+(int)multipleDesirableRangesBoost;
+(int)clusterBestVideo;
+(int)clusterBestBurst;
+(int)clusterBestVideoFoundCounterweight;
+(int)clusterBest;
+(int)clusterSecond;
+(int)clusterThird;
+(int)clusterFourth;
+(int)clusterFifth;
+(int)clusterOther;
+(int)minTheoriticalScore;
+(int)maxTheoriticalScore;
@end

