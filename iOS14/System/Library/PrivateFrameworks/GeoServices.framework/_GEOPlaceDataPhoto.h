/*
* Generated on Thursday, January 14, 2021 at 2:21:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/GEOMapItemPhoto.h>

@protocol GEOPhotoInfoSource;
@class NSString, NSURL, GEOPDPhoto, GEOPDCaptionedPhoto;

@interface _GEOPlaceDataPhoto : NSObject <GEOMapItemPhoto> {

	GEOPDPhoto* _photo;
	GEOPDCaptionedPhoto* _captionedPhoto;
	id<GEOPhotoInfoSource> _photoInfoSource;

}

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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)uid;
-(NSString *)caption;
-(NSString *)author;
-(id)initWithCaptionedPhoto:(id)arg1 ;
-(NSString *)licenseDescription;
-(BOOL)useGallery;
-(BOOL)displayFullScreenPhotoGallery;
-(id)initWithPhoto:(id)arg1 ;
-(id)largestPhoto;
-(id)bestPhotoForSize:(CGSize)arg1 options:(id)arg2 ;
-(id)bestPhotoForFrameSize:(CGSize)arg1 displayScale:(double)arg2 options:(id)arg3 ;
-(BOOL)businessProvided;
-(NSString *)backgroundJoeColor;
-(double)sizeRatio;
-(BOOL)highQuality;
-(id)bestPhotoForSize:(CGSize)arg1 allowSmaller:(BOOL)arg2 ;
-(NSURL *)licenseURL;
@end

