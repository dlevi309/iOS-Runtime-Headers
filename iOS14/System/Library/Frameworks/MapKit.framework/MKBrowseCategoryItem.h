/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


@class NSString, UIImage, GEOSearchCategory;

@interface MKBrowseCategoryItem : NSObject {

	NSString* _title;
	UIImage* _image;
	GEOSearchCategory* _searchCategory;

}

@property (nonatomic,readonly) NSString * title;                                //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) UIImage * image;                                 //@synthesize image=_image - In the implementation block
@property (nonatomic,readonly) GEOSearchCategory * searchCategory;              //@synthesize searchCategory=_searchCategory - In the implementation block
-(UIImage *)image;
-(id)imageWithSearchCategory:(id)arg1 nightMode:(BOOL)arg2 ;
-(GEOSearchCategory *)searchCategory;
-(id)initWithCategory:(id)arg1 nightMode:(BOOL)arg2 ;
-(NSString *)title;
@end

