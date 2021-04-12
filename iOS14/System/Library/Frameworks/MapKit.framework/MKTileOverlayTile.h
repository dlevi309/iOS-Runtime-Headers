/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


#import <MapKit/MapKit-Structs.h>
@class NSData;

@interface MKTileOverlayTile : NSObject {

	SCD_Struct_MK48 _path;
	SCD_Struct_MK6 _frame;
	double _scale;
	NSData* _image;

}

@property (assign,nonatomic) SCD_Struct_MK48 path;              //@synthesize path=_path - In the implementation block
@property (assign,nonatomic) SCD_Struct_MK6 frame;              //@synthesize frame=_frame - In the implementation block
@property (assign,nonatomic) double scale;                      //@synthesize scale=_scale - In the implementation block
@property (nonatomic,retain) NSData * image;                    //@synthesize image=_image - In the implementation block
-(void)setImage:(NSData *)arg1 ;
-(double)scale;
-(SCD_Struct_MK6)frame;
-(void)setPath:(SCD_Struct_MK48)arg1 ;
-(SCD_Struct_MK48)path;
-(NSData *)image;
-(id)description;
-(void)setFrame:(SCD_Struct_MK6)arg1 ;
-(void)setScale:(double)arg1 ;
@end

