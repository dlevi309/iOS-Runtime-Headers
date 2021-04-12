/*
* Generated on Monday, March 1, 2021 at 2:30:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)primaryText;
-(id<GEOMapItemPhoto>)photo;
-(NSString *)secondaryText;
-(int)pictureItemPhotoType;

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
-(id)init;
-(NSString *)primaryText;
-(id)initWithPictureItem:(id)arg1 ;
-(id<GEOMapItemPhoto>)photo;
-(NSString *)secondaryText;
-(id)initWithPhoto:(id)arg1 pictureItemPhotoType:(int)arg2 primaryText:(id)arg3 secondaryText:(id)arg4 ;
-(int)pictureItemPhotoType;
@end

