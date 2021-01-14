/*
* Generated on Thursday, January 14, 2021 at 2:21:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <libobjc.A.dylib/GEOPictureItem.h>
@class NSString;


@protocol GEOPictureItem
@property (nonatomic,readonly) id<GEOMapItemPhoto> photo; 
@property (nonatomic,readonly) int pictureItemPhotoType; 
@property (nonatomic,readonly) NSString * primaryText; 
@property (nonatomic,readonly) NSString * secondaryText; 
@required
-(id<GEOMapItemPhoto>)photo;
-(NSString *)primaryText;
-(int)pictureItemPhotoType;
-(NSString *)secondaryText;

@end


@protocol GEOMapItemPhoto;
@class NSString;

@interface GEOPictureItem : NSObject <GEOPictureItem> {

	id<GEOMapItemPhoto> _photo;
	int _pictureItemPhotoType;
	NSString* _primaryText;
	NSString* _secondaryText;

}

@property (nonatomic,readonly) id<GEOMapItemPhoto> photo;              //@synthesize photo=_photo - In the implementation block
@property (nonatomic,readonly) int pictureItemPhotoType;               //@synthesize pictureItemPhotoType=_pictureItemPhotoType - In the implementation block
@property (nonatomic,readonly) NSString * primaryText;                 //@synthesize primaryText=_primaryText - In the implementation block
@property (nonatomic,readonly) NSString * secondaryText;               //@synthesize secondaryText=_secondaryText - In the implementation block
-(id<GEOMapItemPhoto>)photo;
-(id)init;
-(id)initWithPictureItem:(id)arg1 ;
-(NSString *)primaryText;
-(id)initWithPhoto:(id)arg1 pictureItemPhotoType:(int)arg2 primaryText:(id)arg3 secondaryText:(id)arg4 ;
-(int)pictureItemPhotoType;
-(NSString *)secondaryText;
@end

