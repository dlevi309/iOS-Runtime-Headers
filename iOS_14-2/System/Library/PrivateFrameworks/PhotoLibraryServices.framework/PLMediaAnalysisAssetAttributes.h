/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (assign,nonatomic) long long packedBestPlaybackRect; 
@property (assign,nonatomic) float blurrinessScore; 
@property (assign,nonatomic) float exposureScore; 
@property (assign,nonatomic) float autoplaySuggestionScore; 
@property (assign,nonatomic) float videoScore; 
@property (assign,nonatomic) float activityScore; 
@property (assign,nonatomic) unsigned long long faceCount; 
@property (assign,nonatomic) short audioClassification; 
@property (nonatomic,retain) PLManagedAsset * asset; 
+(id)entityName;
+(id)fetchRequest;
-(SCD_Struct_PL41)bestVideoTimeRange;
-(void)setBestVideoTimeRange:(SCD_Struct_PL41)arg1 ;
@end

