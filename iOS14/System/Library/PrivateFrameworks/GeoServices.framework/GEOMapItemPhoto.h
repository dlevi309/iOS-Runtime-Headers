/*
* Generated on Thursday, January 14, 2021 at 2:21:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,readonly) NSString * backgroundJoeColor; 
@required
-(NSString *)uid;
-(NSString *)caption;
-(NSString *)author;
-(NSString *)licenseDescription;
-(BOOL)useGallery;
-(BOOL)displayFullScreenPhotoGallery;
-(id)largestPhoto;
-(id)bestPhotoForSize:(CGSize)arg1 options:(id)arg2;
-(id)bestPhotoForFrameSize:(CGSize)arg1 displayScale:(double)arg2 options:(id)arg3;
-(BOOL)businessProvided;
-(NSString *)backgroundJoeColor;
-(double)sizeRatio;
-(BOOL)highQuality;
-(id)bestPhotoForSize:(CGSize)arg1 allowSmaller:(BOOL)arg2;
-(NSURL *)licenseURL;

@end

