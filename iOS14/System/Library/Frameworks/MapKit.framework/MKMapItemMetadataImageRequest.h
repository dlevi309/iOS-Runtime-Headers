/*
* Generated on Thursday, January 14, 2021 at 2:22:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MKMapItemMetadataRequest.h>

@class GEOPhotoInfo;

@interface MKMapItemMetadataImageRequest : MKMapItemMetadataRequest {

	GEOPhotoInfo* _info;
	/*^block*/id _imageHandler;

}

@property (nonatomic,copy) id imageHandler;                    //@synthesize imageHandler=_imageHandler - In the implementation block
@property (nonatomic,retain) GEOPhotoInfo * info;              //@synthesize info=_info - In the implementation block
+(id)requestWithMapItem:(id)arg1 info:(id)arg2 ;
-(GEOPhotoInfo *)info;
-(void)handleError:(id)arg1 ;
-(void)handleData:(id)arg1 ;
-(void)setImageHandler:(id)arg1 ;
-(id)imageHandler;
-(id)url;
-(void)setInfo:(GEOPhotoInfo *)arg1 ;
@end

