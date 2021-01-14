/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


#import <PhotosUICore/PhotosUICore-Structs.h>
@interface PXGMetalRenderTextureStore : NSObject {

	SCD_Struct_PX37* _textures;
	long long _count;
	long long _capacity;
	BOOL _sorted;

}
-(void)addTexture:(SCD_Struct_PX37)arg1 ;
-(id)init;
-(void)removeAllTextures;
-(void)_sortIfNeeded;
-(void)drawWithOrder:(unsigned long long)arg1 enumerationBlock:(/*^block*/id)arg2 ;
-(void)dealloc;
@end

