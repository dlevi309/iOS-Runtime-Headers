/*
* Generated on Thursday, January 14, 2021 at 2:28:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoKit.framework/NeutrinoKit
*/

#import <NeutrinoKit/NeutrinoKit-Structs.h>
#import <QuartzCore/CALayer.h>
#import <libobjc.A.dylib/CALayerDelegate.h>

@protocol NUTextureImage;
@class NUImageGeometry, NSMutableArray, NSString;

@interface NUTiledImageLayer : CALayer <CALayerDelegate> {

	CGColorRef _debugColor;
	id<NUTextureImage> __image;
	NUImageGeometry* __geometry;
	NSMutableArray* __tileLayers;
	SCD_Struct_NU3 _validRegionInsets;

}

@property (retain) id<NUTextureImage> _image;                               //@synthesize _image=__image - In the implementation block
@property (retain) NUImageGeometry * _geometry;                             //@synthesize _geometry=__geometry - In the implementation block
@property (retain) NSMutableArray * _tileLayers;                            //@synthesize _tileLayers=__tileLayers - In the implementation block
@property (retain) id<NUTextureImage> image; 
@property (retain) NUImageGeometry * geometry; 
@property (nonatomic,readonly) BOOL nu_contentsAreFlipped; 
@property (retain) CGColorRef debugColor;                                   //@synthesize debugColor=_debugColor - In the implementation block
@property (assign,nonatomic) SCD_Struct_NU3 validRegionInsets;              //@synthesize validRegionInsets=_validRegionInsets - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultActionForKey:(id)arg1 ;
-(NUImageGeometry *)geometry;
-(id<NUTextureImage>)_image;
-(void)layoutSublayers;
-(void)setImage:(id<NUTextureImage>)arg1 ;
-(id)init;
-(id<NUTextureImage>)image;
-(id)actionForLayer:(id)arg1 forKey:(id)arg2 ;
-(NUImageGeometry *)_geometry;
-(void)setGeometry:(NUImageGeometry *)arg1 ;
-(void)dealloc;
-(CGColorRef)debugColor;
-(BOOL)nu_contentsAreFlipped;
-(void)setDebugColor:(CGColorRef)arg1 ;
-(SCD_Struct_NU3)validRegionInsets;
-(void)setValidRegionInsets:(SCD_Struct_NU3)arg1 ;
-(void)set_image:(id<NUTextureImage>)arg1 ;
-(void)set_geometry:(NUImageGeometry *)arg1 ;
-(void)_updateSublayers;
-(NSMutableArray *)_tileLayers;
-(void)set_tileLayers:(NSMutableArray *)arg1 ;
@end

