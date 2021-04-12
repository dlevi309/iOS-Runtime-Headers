/*
* Generated on Monday, March 1, 2021 at 2:30:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <PhotoLibraryServices/_PLManagedAdjustment.h>

@class NSString, NSDictionary, PLManagedAsset, NSNumber;

@interface PLManagedAdjustment : _PLManagedAdjustment

@property (assign,nonatomic) int adjustmentType; 
@property (nonatomic,copy) NSString * filterName; 
@property (nonatomic,copy) NSDictionary * filterSettings; 
@property (nonatomic,retain) PLManagedAsset * asset; 
@property (nonatomic,copy) NSNumber * identifier; 
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
+(id)entityName;
+(id)ciFiltersForAdjustmentsOnManagedAsset:(id)arg1 forDestinationImageSize:(CGSize)arg2 ;
+(void)fixupAssetSizeFromAdjustments:(id)arg1 ;
+(id)insertInPhotoLibrary:(id)arg1 ;
+(CGRect)convertCropRect:(CGRect)arg1 fromImageSize:(CGSize)arg2 toImageSize:(CGSize)arg3 ;
+(void)convertAffineTransform:(CGAffineTransform)arg1 andCropRect:(CGRect)arg2 toStraightenAngle:(double*)arg3 andCropRect:(CGRect*)arg4 ;
+(void)convertStraightenAngle:(double)arg1 andCropRect:(CGRect)arg2 toAffineTransform:(CGAffineTransform*)arg3 andCropRect:(CGRect*)arg4 ;
+(id)ciFiltersForAdjustmentsOnManagedAsset:(id)arg1 forDestinationImageSize:(CGSize)arg2 effectFilterCount:(unsigned long long*)arg3 ;
+(id)ciFiltersForAdjustmentsOnManagedAsset:(id)arg1 forDestinationImageSize:(CGSize)arg2 withOriginalImageSize:(CGSize)arg3 effectFilterCount:(unsigned long long*)arg4 ;
-(id)metadataProperties;
-(int)adjustmentType;
-(void)setAdjustmentType:(int)arg1 ;
@end

