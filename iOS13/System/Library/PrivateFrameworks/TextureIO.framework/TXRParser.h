/*
* Generated on Monday, March 1, 2021 at 2:35:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextureIO.framework/TextureIO
*/

@class TXRTextureInfo;


@protocol TXRParser <NSObject>
@property (nonatomic,readonly) TXRTextureInfo * textureInfo; 
@required
+(BOOL)handlesData:(id)arg1;
-(BOOL)parseData:(id)arg1 bufferAllocator:(id)arg2 options:(id)arg3 error:(id*)arg4;
-(TXRTextureInfo *)textureInfo;
-(id)parsedImageAtLevel:(unsigned long long)arg1 element:(unsigned long long)arg2 face:(unsigned long long)arg3;

@end

