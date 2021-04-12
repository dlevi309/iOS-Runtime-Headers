/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/MTLArgumentInternal.h>

@class MTLStructTypeInternal;

@interface MTLImageBlockDataArgument : MTLArgumentInternal {

	unsigned _dataSize;
	MTLStructTypeInternal* _masterStructMembers;
	BOOL _aliasImplicitImageBlock;
	unsigned _aliasImplicitImageBlockRenderTarget;

}
-(void)dealloc;
-(void)setStructType:(id)arg1 ;
-(id)initWithName:(id)arg1 type:(unsigned long long)arg2 access:(unsigned long long)arg3 isActive:(BOOL)arg4 index:(unsigned long long)arg5 dataSize:(unsigned)arg6 masterStructMembers:(id)arg7 aliasImplicitImageBlock:(BOOL)arg8 aliasImplicitImageBlockRenderTarget:(unsigned)arg9 ;
-(unsigned long long)imageBlockDataSize;
-(id)imageBlockMasterStructMembers;
-(BOOL)aliasImplicitImageBlock;
-(unsigned long long)aliasImplicitImageBlockRenderTarget;
@end

