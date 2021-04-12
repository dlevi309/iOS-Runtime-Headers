/*
* Generated on Thursday, January 14, 2021 at 2:22:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <libobjc.A.dylib/PUTilingCoordinateSystem.h>

@protocol PUTilingCoordinateSystem;
@class NSString;

@interface PUTilingLayoutCoordinateSystem : NSObject <PUTilingCoordinateSystem> {

	id<PUTilingCoordinateSystem> _parentCoordinateSystem;
	CGPoint _coordinateSystemOrigin;

}

@property (assign,nonatomic,__weak) id<PUTilingCoordinateSystem> parentCoordinateSystem;              //@synthesize parentCoordinateSystem=_parentCoordinateSystem - In the implementation block
@property (assign,nonatomic) CGPoint coordinateSystemOrigin;                                          //@synthesize coordinateSystemOrigin=_coordinateSystemOrigin - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGPoint)coordinateSystemOrigin;
-(id<PUTilingCoordinateSystem>)parentCoordinateSystem;
-(void)setCoordinateSystemOrigin:(CGPoint)arg1 ;
-(void)setParentCoordinateSystem:(id<PUTilingCoordinateSystem>)arg1 ;
@end

