/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


@protocol GEOMapItemPhoto;
#import <MapKit/MapKit-Structs.h>
@class NSString, NSURL;

@interface MKMapItemPhoto : NSObject {

	NSString* _title;
	NSString* _subtitle;
	id<GEOMapItemPhoto> _geoMapItemPhoto;

}

@property (nonatomic,copy) NSString * title;                                     //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                                  //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,readonly) NSString * license; 
@property (nonatomic,readonly) NSURL * largestPhotoURL; 
@property (nonatomic,readonly) NSString * photoID; 
@property (nonatomic,readonly) BOOL useGallery; 
@property (nonatomic,readonly) long long format; 
@property (nonatomic,readonly) BOOL displayFullScreenPhotoGallery; 
@property (nonatomic,readonly) id<GEOMapItemPhoto> geoMapItemPhoto;              //@synthesize geoMapItemPhoto=_geoMapItemPhoto - In the implementation block
-(long long)format;
-(NSString *)subtitle;
-(void)setTitle:(NSString *)arg1 ;
-(NSURL *)largestPhotoURL;
-(NSString *)photoID;
-(id)initWithPictureItem:(id)arg1 ;
-(id)initWithGeoMapItemPhoto:(id)arg1 title:(id)arg2 subtitle:(id)arg3 ;
-(BOOL)useGallery;
-(BOOL)displayFullScreenPhotoGallery;
-(id)initWithGeoMapItemPhoto:(id)arg1 ;
-(NSString *)license;
-(id)urlForBestPhotoForSize:(CGSize)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(id<GEOMapItemPhoto>)geoMapItemPhoto;
-(NSString *)title;
@end

