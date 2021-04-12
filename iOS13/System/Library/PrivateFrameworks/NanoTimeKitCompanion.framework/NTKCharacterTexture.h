/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@protocol MTLTexture;
@interface NTKCharacterTexture : NSObject {

	unsigned _gid;
	const void* _data;
	int _length;
	id<MTLTexture> _mtlTexture;

}

@property (nonatomic,retain) id<MTLTexture> mtlTexture;              //@synthesize mtlTexture=_mtlTexture - In the implementation block
@property (assign,nonatomic) unsigned gid;                           //@synthesize gid=_gid - In the implementation block
@property (nonatomic,readonly) const void* data;                     //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) int length;                           //@synthesize length=_length - In the implementation block
-(int)length;
-(const void*)data;
-(void)setGid:(unsigned)arg1 ;
-(unsigned)gid;
-(void)setMtlTexture:(id<MTLTexture>)arg1 ;
-(id<MTLTexture>)mtlTexture;
-(id)initWithData:(const void*)arg1 length:(int)arg2 ;
@end

