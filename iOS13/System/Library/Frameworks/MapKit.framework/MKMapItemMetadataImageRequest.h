/*
* Generated on Monday, March 1, 2021 at 2:31:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)handleError:(id)arg1 ;
-(id)url;
-(GEOPhotoInfo *)info;
-(void)setInfo:(GEOPhotoInfo *)arg1 ;
-(void)handleData:(id)arg1 ;
-(void)setImageHandler:(id)arg1 ;
-(id)imageHandler;
@end

