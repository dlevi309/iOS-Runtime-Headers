/*
* Generated on Thursday, January 14, 2021 at 2:26:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned)gid;
-(void)setGid:(unsigned)arg1 ;
-(id)initWithData:(const void*)arg1 length:(int)arg2 ;
-(id<MTLTexture>)mtlTexture;
-(void)setMtlTexture:(id<MTLTexture>)arg1 ;
@end

