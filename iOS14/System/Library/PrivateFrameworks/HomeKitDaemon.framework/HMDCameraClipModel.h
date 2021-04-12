/*
* Generated on Thursday, January 14, 2021 at 2:25:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitBackingStore/HMBModel.h>

@class NSNumber, NSDate, NSString, NSData, HMBStreamingAsset, NSArray;

@interface HMDCameraClipModel : HMBModel

@property (nonatomic,retain) NSNumber * feedbackStatusField; 
@property (nonatomic,retain) NSDate * startDate; 
@property (nonatomic,retain) NSNumber * isComplete; 
@property (assign) unsigned long long feedbackStatus; 
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
+(id)hmbExternalRecordType;
+(id)hmbProperties;
+(id)hmbQueries;
+(id)sentinelParentUUID;
+(id)clipsBetweenDatesQueryWithIsAscending:(BOOL)arg1 ;
+(id)incompleteClipsQuery;
+(id)countOfClipsBetweenDatesQuery;
+(id)clipsWithNeedsUploadFeedbackStatusQuery;
-(id)createClipWithSignificantEvents:(id)arg1 ;
-(unsigned long long)feedbackStatus;
-(void)setFeedbackStatus:(unsigned long long)arg1 ;
@end

