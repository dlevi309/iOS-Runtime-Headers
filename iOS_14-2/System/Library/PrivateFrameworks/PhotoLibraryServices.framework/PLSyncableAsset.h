/*
* Generated on Thursday, January 14, 2021 at 2:22:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,readonly) BOOL hasAdjustments; 
@required
-(long long)width;
-(long long)height;
-(NSString *)syncedAdjustmentFingerprint;
-(id)syncDescription;
-(id)faceAdjustmentVersion;
-(BOOL)hasAdjustments;
-(void)markForNeedingFaceDetection;
-(BOOL)faceDetectionComplete;
-(NSDate *)dateForComparingAdjustmentVersions;
-(NSString *)cloudIdentifier;
-(NSSet *)detectedFaces;
-(void)setDetectedFaces:(id)arg1;

@end

