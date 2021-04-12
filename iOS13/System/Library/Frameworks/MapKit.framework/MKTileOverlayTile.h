/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


#import <MapKit/MapKit-Structs.h>
@class NSData;

@interface MKTileOverlayTile : NSObject {

	SCD_Struct_MK42 _path;
	SCD_Struct_MK6 _frame;
	double _scale;
	NSData* _image;

}

@property (assign,nonatomic) SCD_Struct_MK42 path;              //@synthesize path=_path - In the implementation block
@property (assign,nonatomic) SCD_Struct_MK6 frame;              //@synthesize frame=_frame - In the implementation block
@property (assign,nonatomic) double scale;                      //@synthesize scale=_scale - In the implementation block
@property (nonatomic,retain) NSData * image;                    //@synthesize image=_image - In the implementation block
-(id)description;
-(SCD_Struct_MK42)path;
-(void)setPath:(SCD_Struct_MK42)arg1 ;
-(double)scale;
-(NSData *)image;
-(void)setImage:(NSData *)arg1 ;
-(SCD_Struct_MK6)frame;
-(void)setScale:(double)arg1 ;
-(void)setFrame:(SCD_Struct_MK6)arg1 ;
@end

