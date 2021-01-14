/*
* Generated on Thursday, January 14, 2021 at 2:22:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


@class GEOBusiness, NSMutableDictionary;

@interface MKMapItemMetadata : NSObject {

	GEOBusiness* _business;
	NSMutableDictionary* _imageCache;

}

@property (nonatomic,retain) NSMutableDictionary * imageCache;              //@synthesize imageCache=_imageCache - In the implementation block
@property (nonatomic,readonly) GEOBusiness * business;                      //@synthesize business=_business - In the implementation block
-(id)imageForURL:(id)arg1 ;
-(void)addImage:(id)arg1 forURL:(id)arg2 ;
-(GEOBusiness *)business;
-(id)description;
-(NSMutableDictionary *)imageCache;
-(void)setImageCache:(NSMutableDictionary *)arg1 ;
-(id)initWithBusiness:(id)arg1 ;
@end

