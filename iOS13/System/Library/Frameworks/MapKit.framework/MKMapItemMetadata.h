/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


@class GEOBusiness, NSMutableDictionary;

@interface MKMapItemMetadata : NSObject {

	GEOBusiness* _business;
	NSMutableDictionary* _imageCache;

}

@property (nonatomic,retain) NSMutableDictionary * imageCache;              //@synthesize imageCache=_imageCache - In the implementation block
@property (nonatomic,readonly) GEOBusiness * business;                      //@synthesize business=_business - In the implementation block
-(id)description;
-(NSMutableDictionary *)imageCache;
-(void)setImageCache:(NSMutableDictionary *)arg1 ;
-(GEOBusiness *)business;
-(id)imageForURL:(id)arg1 ;
-(id)initWithBusiness:(id)arg1 ;
-(void)addImage:(id)arg1 forURL:(id)arg2 ;
@end

