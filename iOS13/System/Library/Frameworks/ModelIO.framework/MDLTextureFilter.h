/*
* Generated on Monday, March 1, 2021 at 2:31:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)setMinFilter:(unsigned long long)arg1 ;
-(void)setMagFilter:(unsigned long long)arg1 ;
-(void)setMipFilter:(unsigned long long)arg1 ;
-(unsigned long long)sWrapMode;
-(void)setSWrapMode:(unsigned long long)arg1 ;
-(unsigned long long)tWrapMode;
-(void)setTWrapMode:(unsigned long long)arg1 ;
-(unsigned long long)rWrapMode;
-(void)setRWrapMode:(unsigned long long)arg1 ;
-(unsigned long long)minFilter;
-(unsigned long long)magFilter;
-(unsigned long long)mipFilter;
@end

