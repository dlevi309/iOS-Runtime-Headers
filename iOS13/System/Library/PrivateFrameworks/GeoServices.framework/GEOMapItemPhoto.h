/*
* Generated on Monday, March 1, 2021 at 2:30:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

@class NSString, NSURL;


@protocol GEOMapItemPhoto <NSObject>
@property (nonatomic,readonly) NSString * author; 
@property (nonatomic,readonly) NSString * caption; 
@property (nonatomic,readonly) NSString * licenseDescription; 
@property (nonatomic,readonly) NSURL * licenseURL; 
@property (nonatomic,readonly) BOOL displayFullScreenPhotoGallery; 
@property (nonatomic,readonly) BOOL useGallery; 
@property (nonatomic,readonly) NSString * uid; 
@property (nonatomic,readonly) double sizeRatio; 
@property (nonatomic,readonly) BOOL highQuality; 
@property (nonatomic,readonly) BOOL businessProvided; 
@required
-(NSString *)uid;
-(NSString *)author;
-(id)bestPhotoForSize:(CGSize)arg1 allowSmaller:(BOOL)arg2;
-(NSString *)caption;
-(NSString *)licenseDescription;
-(BOOL)displayFullScreenPhotoGallery;
-(BOOL)useGallery;
-(BOOL)highQuality;
-(id)largestPhoto;
-(NSURL *)licenseURL;
-(double)sizeRatio;
-(BOOL)businessProvided;

@end

