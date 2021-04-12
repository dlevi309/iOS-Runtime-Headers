/*
* Generated on Monday, March 1, 2021 at 2:30:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <PhotoLibraryServices/PLManagedObject.h>

@class NSDate, PLManagedAsset;

@interface PLMediaAnalysisAssetAttributes : PLManagedObject

@property (nonatomic,retain) NSDate * mediaAnalysisTimeStamp; 
@property (assign,nonatomic) unsigned long long mediaAnalysisVersion; 
@property (assign,nonatomic) int bestVideoRangeDurationTimeScale; 
@property (assign,nonatomic) long long bestVideoRangeDurationValue; 
@property (assign,nonatomic) int bestVideoRangeStartTimeScale; 
@property (assign,nonatomic) long long bestVideoRangeStartValue; 
@property (assign,nonatomic) int bestKeyFrameTimeScale; 
@property (assign,nonatomic) long long bestKeyFrameValue; 
@property (assign,nonatomic) long long packedBestPlaybackRect; 
@property (assign,nonatomic) float blurrinessScore; 
@property (assign,nonatomic) float exposureScore; 
@property (assign,nonatomic) float autoplaySuggestionScore; 
@property (assign,nonatomic) float videoScore; 
@property (assign,nonatomic) float activityScore; 
@property (assign,nonatomic) unsigned long long faceCount; 
@property (assign,nonatomic) short audioClassification; 
@property (nonatomic,retain) PLManagedAsset * asset; 
+(id)fetchRequest;
+(id)entityName;
-(void)willSave;
-(void)setBestKeyFrameTime:(SCD_Struct_PL14)arg1 ;
-(SCD_Struct_PL14)bestKeyFrameTime;
-(void)setBestVideoTimeRange:(SCD_Struct_PL37)arg1 ;
-(SCD_Struct_PL37)bestVideoTimeRange;
@end

