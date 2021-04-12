/*
* Generated on Monday, March 1, 2021 at 2:30:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

@class NSString, NSSet, NSDate;


@protocol PLSyncableAsset <NSObject,PLSyncableObject>
@property (nonatomic,retain,readonly) NSString * cloudIdentifier; 
@property (nonatomic,retain) NSSet * detectedFaces; 
@property (nonatomic,readonly) long long width; 
@property (nonatomic,readonly) long long height; 
@property (nonatomic,readonly) BOOL faceDetectionComplete; 
@property (nonatomic,copy,readonly) NSDate * dateForComparingAdjustmentVersions; 
@property (nonatomic,readonly) id faceAdjustmentVersion; 
@property (nonatomic,copy,readonly) NSString * syncedAdjustmentFingerprint; 
@property (nonatomic,readonly) BOOL hasAdjustmentsOrLegacyAdjustments; 
@required
-(long long)width;
-(long long)height;
-(NSString *)cloudIdentifier;
-(id)syncDescription;
-(NSSet *)detectedFaces;
-(id)faceAdjustmentVersion;
-(NSString *)syncedAdjustmentFingerprint;
-(BOOL)hasAdjustmentsOrLegacyAdjustments;
-(void)markForNeedingFaceDetection;
-(void)setDetectedFaces:(id)arg1;
-(BOOL)faceDetectionComplete;
-(NSDate *)dateForComparingAdjustmentVersions;

@end

