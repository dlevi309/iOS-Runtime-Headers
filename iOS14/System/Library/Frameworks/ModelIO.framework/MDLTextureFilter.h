/*
* Generated on Thursday, January 14, 2021 at 2:26:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
*/


@interface MDLTextureFilter : NSObject {

	unsigned long long sWrapMode;
	unsigned long long tWrapMode;
	unsigned long long rWrapMode;
	unsigned long long minFilter;
	unsigned long long magFilter;
	unsigned long long mipFilter;

}

@property (assign,nonatomic) unsigned long long sWrapMode; 
@property (assign,nonatomic) unsigned long long tWrapMode; 
@property (assign,nonatomic) unsigned long long rWrapMode; 
@property (assign,nonatomic) unsigned long long minFilter; 
@property (assign,nonatomic) unsigned long long magFilter; 
@property (assign,nonatomic) unsigned long long mipFilter; 
-(void)setMipFilter:(unsigned long long)arg1 ;
-(id)init;
-(void)setMagFilter:(unsigned long long)arg1 ;
-(unsigned long long)mipFilter;
-(unsigned long long)minFilter;
-(void)setMinFilter:(unsigned long long)arg1 ;
-(unsigned long long)magFilter;
-(unsigned long long)sWrapMode;
-(void)setSWrapMode:(unsigned long long)arg1 ;
-(unsigned long long)tWrapMode;
-(void)setTWrapMode:(unsigned long long)arg1 ;
-(unsigned long long)rWrapMode;
-(void)setRWrapMode:(unsigned long long)arg1 ;
@end

