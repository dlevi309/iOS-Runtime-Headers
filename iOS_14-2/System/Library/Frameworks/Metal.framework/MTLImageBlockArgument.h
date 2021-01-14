/*
* Generated on Thursday, January 14, 2021 at 2:23:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/MTLArgumentInternal.h>

@class MTLStructTypeInternal;

@interface MTLImageBlockArgument : MTLArgumentInternal {

	unsigned long long _kind;
	unsigned _dataSize;
	MTLStructTypeInternal* _masterStructMembers;
	BOOL _aliasImplicitImageBlock;
	unsigned _aliasImplicitImageBlockRenderTarget;

}
-(id)imageBlockMasterStructMembers;
-(void)setStructType:(id)arg1 ;
-(BOOL)aliasImplicitImageBlock;
-(unsigned long long)aliasImplicitImageBlockRenderTarget;
-(unsigned long long)imageBlockDataSize;
-(id)initWithName:(id)arg1 type:(unsigned long long)arg2 access:(unsigned long long)arg3 isActive:(BOOL)arg4 index:(unsigned long long)arg5 kind:(unsigned long long)arg6 dataSize:(unsigned)arg7 masterStructMembers:(id)arg8 aliasImplicitImageBlock:(BOOL)arg9 aliasImplicitImageBlockRenderTarget:(unsigned)arg10 ;
-(unsigned long long)imageBlockKind;
-(void)dealloc;
@end

