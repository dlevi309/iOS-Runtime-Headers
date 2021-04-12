/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <libobjc.A.dylib/NUSurfaceTile.h>

@class NUIOSurface, NSString;

@interface NUSurfaceTileAdapter : NSObject <NUSurfaceTile> {

	NUIOSurface* _surface;
	SCD_Struct_NU8 _frameRect;
	SCD_Struct_NU8 _contentRect;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SCD_Struct_NU8 frameRect;                //@synthesize frameRect=_frameRect - In the implementation block
@property (nonatomic,readonly) SCD_Struct_NU8 contentRect;              //@synthesize contentRect=_contentRect - In the implementation block
@property (nonatomic,readonly) NUIOSurface * surface;                   //@synthesize surface=_surface - In the implementation block
-(id)init;
-(NUIOSurface *)surface;
-(SCD_Struct_NU8)contentRect;
-(SCD_Struct_NU8)frameRect;
-(id)initWithFrameRect:(SCD_Struct_NU8)arg1 contentRect:(SCD_Struct_NU8)arg2 surface:(id)arg3 ;
@end

