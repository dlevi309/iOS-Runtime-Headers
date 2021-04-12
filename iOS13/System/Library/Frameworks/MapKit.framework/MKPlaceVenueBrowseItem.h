/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


@class NSString, UIImage, GEOSearchCategory;

@interface MKPlaceVenueBrowseItem : NSObject {

	NSString* _title;
	UIImage* _image;
	GEOSearchCategory* _searchCategory;

}

@property (nonatomic,readonly) NSString * title;                                //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) UIImage * image;                                 //@synthesize image=_image - In the implementation block
@property (nonatomic,readonly) GEOSearchCategory * searchCategory;              //@synthesize searchCategory=_searchCategory - In the implementation block
+(id)browseItemWithCategory:(id)arg1 nightMode:(BOOL)arg2 ;
+(id)imageWithSearchCategory:(id)arg1 nightMode:(BOOL)arg2 ;
-(NSString *)title;
-(UIImage *)image;
-(GEOSearchCategory *)searchCategory;
-(id)initWithTitle:(id)arg1 image:(id)arg2 searchCategory:(id)arg3 ;
@end

