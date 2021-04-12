/*
* Generated on Monday, March 1, 2021 at 2:30:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <libobjc.A.dylib/GEOPictureItemContainer.h>
@class NSArray;


@protocol GEOPictureItemContainer
@property (nonatomic,readonly) NSArray * pictureItems; 
@property (nonatomic,readonly) BOOL allowFullScreenPhoto; 
@required
-(NSArray *)pictureItems;
-(BOOL)allowFullScreenPhoto;

@end


@class NSArray;

@interface GEOPictureItemContainer : NSObject <GEOPictureItemContainer> {

	NSArray* _pictureItems;
	BOOL _allowFullScreenPhoto;

}

@property (nonatomic,readonly) NSArray * pictureItems;                 //@synthesize pictureItems=_pictureItems - In the implementation block
@property (nonatomic,readonly) BOOL allowFullScreenPhoto;              //@synthesize allowFullScreenPhoto=_allowFullScreenPhoto - In the implementation block
-(id)init;
-(id)initWithPictureItemContainer:(id)arg1 ;
-(NSArray *)pictureItems;
-(BOOL)allowFullScreenPhoto;
-(id)initWithPictureItems:(id)arg1 allowFullScreenPhoto:(BOOL)arg2 ;
@end

