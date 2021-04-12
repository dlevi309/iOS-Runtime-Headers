/*
* Generated on Monday, March 1, 2021 at 2:32:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
*/


#import <SpriteKit/SpriteKit-Structs.h>
@interface SKTextureAtlasPacker : NSObject
+(CGImageRef)copyProcessedImageSource:(id)arg1 ;
-(void)generateTextureAtlasImages:(id)arg1 outputDictionary:(id*)arg2 forcePOT:(BOOL)arg3 ;
-(CGRect)calcNonAlphaArea:(CGImageRef)arg1 ;
-(CGImageRef)copyRotateCGImage:(CGImageRef)arg1 direction:(BOOL)arg2 ;
-(BOOL)isFullyOpaque:(CGImageRef)arg1 ;
-(id)partitionTextureFilesByResolution:(id)arg1 ;
-(id)generateMetaData;
-(id)processPackedTextureAtlas:(const vector<CGSize, std::__1::allocator<CGSize> >*)arg1 suffix:(id)arg2 packer:(shared_ptr<MaxRectTexturePacker>*)arg3 sortedTrimArray:(const vector<CGRect, std::__1::allocator<CGRect> >*)arg4 sortedTextureArray:(const vector<TextureInfo, std::__1::allocator<TextureInfo> >*)arg5 ;
-(id)getTextureFileList:(id)arg1 modDate:(id*)arg2 ;
@end

