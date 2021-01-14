/*
* Generated on Thursday, January 14, 2021 at 2:24:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/


#import <Silex/Silex-Structs.h>
@interface SXMosaicGalleryLayoutItem : NSObject {

	int _tileType;
	CGSize _dimensions;

}

@property (nonatomic,readonly) CGSize dimensions;              //@synthesize dimensions=_dimensions - In the implementation block
@property (nonatomic,readonly) int tileType;                   //@synthesize tileType=_tileType - In the implementation block
-(CGSize)dimensions;
-(double)aspectRatio;
-(id)description;
-(int)tileType;
-(id)initWithDimensions:(CGSize)arg1 ;
@end

