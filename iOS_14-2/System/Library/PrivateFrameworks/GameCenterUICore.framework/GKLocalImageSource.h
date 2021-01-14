/*
* Generated on Thursday, January 14, 2021 at 2:27:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUICore.framework/GameCenterUICore
*/

#import <GameCenterUICore/GameCenterUICore-Structs.h>
#import <GameCenterUICore/GKImageSource.h>

@class NSMapTable;

@interface GKLocalImageSource : GKImageSource {

	NSMapTable* _keysForSizes;

}

@property (nonatomic,retain) NSMapTable * keysForSizes;              //@synthesize keysForSizes=_keysForSizes - In the implementation block
-(void)cachedImageFromGamedWithSubdirectory:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)deleteImageUsingGamedWithSubdirectory:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)cacheImageUsingGamed:(id)arg1 cacheSubdirectory:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(id)keyForImageSize:(CGSize)arg1 ;
-(id)imageForImageSize:(CGSize)arg1 ;
-(NSMapTable *)keysForSizes;
-(void)setKeysForSizes:(NSMapTable *)arg1 ;
@end

