/*
* Generated on Thursday, January 14, 2021 at 2:22:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <libobjc.A.dylib/PUTilingCoordinateSystem.h>

@class PUTilingView, NSString;

@interface PUTilingViewCoordinateSystem : NSObject <PUTilingCoordinateSystem> {

	PUTilingView* _tilingView;

}

@property (nonatomic,__weak,readonly) PUTilingView * tilingView;                                        //@synthesize tilingView=_tilingView - In the implementation block
@property (nonatomic,__weak,readonly) id<PUTilingCoordinateSystem> parentCoordinateSystem; 
@property (nonatomic,readonly) CGPoint coordinateSystemOrigin; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(CGPoint)coordinateSystemOrigin;
-(id<PUTilingCoordinateSystem>)parentCoordinateSystem;
-(id)initWithTilingView:(id)arg1 ;
-(PUTilingView *)tilingView;
@end

