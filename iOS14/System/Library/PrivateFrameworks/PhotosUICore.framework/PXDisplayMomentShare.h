/*
* Generated on Thursday, January 14, 2021 at 2:22:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

@class NSURL, NSDate, NSString;


@protocol PXDisplayMomentShare <PXDisplayAssetCollection,PXMediaTypeAggregating>
@property (nonatomic,readonly) unsigned short status; 
@property (nonatomic,readonly) unsigned long long assetCount; 
@property (nonatomic,readonly) unsigned long long photosCount; 
@property (nonatomic,readonly) unsigned long long videosCount; 
@property (nonatomic,readonly) unsigned long long uploadedPhotosCount; 
@property (nonatomic,readonly) unsigned long long uploadedVideosCount; 
@property (nonatomic,readonly) NSURL * shareURL; 
@property (nonatomic,readonly) NSDate * expiryDate; 
@property (nonatomic,readonly) NSString * localizedTitle; 
@property (nonatomic,readonly) NSDate * startDate; 
@property (nonatomic,readonly) NSDate * endDate; 
@property (nonatomic,readonly) long long px_momentShareType; 
@required
-(unsigned long long)videosCount;
-(NSString *)localizedTitle;
-(NSDate *)endDate;
-(NSURL *)shareURL;
-(unsigned long long)photosCount;
-(NSDate *)startDate;
-(unsigned long long)assetCount;
-(long long)px_momentShareType;
-(NSDate *)expiryDate;
-(unsigned long long)uploadedPhotosCount;
-(unsigned long long)uploadedVideosCount;
-(unsigned short)status;

@end

