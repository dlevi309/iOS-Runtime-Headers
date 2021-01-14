/*
* Generated on Thursday, January 14, 2021 at 2:22:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <QuartzCore/CALayer.h>

@class NSArray;

@interface PXGDebugHUDLayer : CALayer {

	NSArray* _graphLayers;
	CGColorRef _green;
	CGColorRef _yellow;
	CGColorRef _red;

}

@property (nonatomic,copy) NSArray * graphLayers;              //@synthesize graphLayers=_graphLayers - In the implementation block
@property (assign,nonatomic) CGColorRef green;                 //@synthesize green=_green - In the implementation block
@property (assign,nonatomic) CGColorRef yellow;                //@synthesize yellow=_yellow - In the implementation block
@property (assign,nonatomic) CGColorRef red;                   //@synthesize red=_red - In the implementation block
-(CGColorRef)yellow;
-(void)setGreen:(CGColorRef)arg1 ;
-(CGColorRef)red;
-(id)init;
-(void)updateDebugHUDWithStats:(SCD_Struct_PX57*)arg1 ;
-(void)updateLayerAtIndex:(long long)arg1 time:(double)arg2 redZone:(double)arg3 yellowZone:(double)arg4 ;
-(NSArray *)graphLayers;
-(void)setGraphLayers:(NSArray *)arg1 ;
-(void)setRed:(CGColorRef)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setYellow:(CGColorRef)arg1 ;
-(CGColorRef)green;
-(void)dealloc;
@end

