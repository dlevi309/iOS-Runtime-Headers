/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitBackingStore/HMBModel.h>

@class NSDate, NSNumber, NSString, NSData, HMBStreamingAsset, NSArray;

@interface HMDCameraClipModel : HMBModel

@property (nonatomic,retain) NSDate * startDate; 
@property (nonatomic,retain) NSNumber * isComplete; 
@property (nonatomic,retain) NSNumber * duration; 
@property (nonatomic,retain) NSNumber * targetFragmentDuration; 
@property (nonatomic,retain) NSNumber * maximumClipDuration; 
@property (nonatomic,retain) NSNumber * recordedLocally; 
@property (nonatomic,retain) NSString * streamingAssetVersion; 
@property (nonatomic,retain) NSData * encryptionKey; 
@property (nonatomic,retain) NSNumber * encryptionScheme; 
@property (nonatomic,retain) HMBStreamingAsset * videoStreamingAsset; 
@property (nonatomic,retain) NSArray * videoMetadata; 
@property (nonatomic,retain) NSArray * videoMetadataArray; 
@property (nonatomic,retain) HMBStreamingAsset * posterFramesStreamingAsset; 
@property (nonatomic,retain) NSArray * posterFramesMetadata; 
@property (nonatomic,retain) NSArray * posterFramesMetadataArray; 
+(void)load;
+(id)hmbProperties;
+(id)hmbExternalRecordType;
+(id)hmbQueries;
+(id)clipsBetweenDatesQuery;
+(id)clipsAfterDateQuery;
+(id)clipsBeforeDateQuery;
+(id)countOfClipsBetweenDatesQuery;
+(id)countOfClipsAfterDateQuery;
+(id)countOfClipsBeforeDateQuery;
+(id)countOfClipsQuery;
+(id)incompleteClipsQuery;
+(id)sentinelParentUUID;
-(id)createClipWithSignificantEvents:(id)arg1 ;
-(id)createClip;
@end

