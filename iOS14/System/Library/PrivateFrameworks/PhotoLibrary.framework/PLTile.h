/*
* Generated on Thursday, January 14, 2021 at 2:28:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
*/


#import <PhotoLibrary/PhotoLibrary-Structs.h>
@interface PLTile : NSObject {

	IOSurfaceRef _decodedSurface;
	CGRect _imageRect;
	id _tileId;
	BOOL _visible;

}
-(id)tileId;
-(void)setVisible:(BOOL)arg1 ;
-(BOOL)visible;
-(void)setTileId:(id)arg1 ;
-(void)setDecodedSurface:(IOSurfaceRef)arg1 ;
-(IOSurfaceRef)decodedSurface;
-(void)setImageRect:(CGRect)arg1 ;
-(CGRect)imageRect;
-(void)dealloc;
@end

