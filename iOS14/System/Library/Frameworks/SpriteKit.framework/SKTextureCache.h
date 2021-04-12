/*
* Generated on Thursday, January 14, 2021 at 2:27:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
*/


#import <SpriteKit/SpriteKit-Structs.h>
@interface SKTextureCache : NSObject {

	long long filteringMode;
	CGSize size;
	CGSize pixelSize;
	BOOL hasAlpha;
	BOOL isPOT;
	char* pixelData;
	int state;
	opaque_pthread_mutex_t lock;
	shared_ptr<jet_texture>* _backingTexture;
	unsigned _textureFormat;
	int wrapMode;

}

@property (assign,nonatomic) unsigned textureFormat;                                     //@synthesize textureFormat=_textureFormat - In the implementation block
@property (assign,nonatomic) shared_ptr<jet_texture>* backingTexture;                    //@synthesize backingTexture=_backingTexture - In the implementation block
@property (assign,nonatomic) long long filteringMode; 
@property (assign,nonatomic) int wrapMode; 
@property (assign,nonatomic) CGSize size; 
@property (assign,nonatomic) CGSize pixelSize; 
@property (assign,nonatomic) BOOL hasAlpha; 
@property (assign,nonatomic) BOOL isPOT; 
@property (assign,nonatomic) char* pixelData; 
@property (assign,nonatomic) int state; 
@property (getter=getLock,nonatomic,readonly) opaque_pthread_mutex_t* lock; 
-(id)init;
-(CGSize)size;
-(unsigned)textureFormat;
-(void)setTextureFormat:(unsigned)arg1 ;
-(char*)pixelData;
-(BOOL)isPOT;
-(void)setSize:(CGSize)arg1 ;
-(void)setPixelData:(char*)arg1 ;
-(void)setPixelSize:(CGSize)arg1 ;
-(opaque_pthread_mutex_t*)getLock;
-(int)wrapMode;
-(void)setState:(int)arg1 ;
-(int)state;
-(void)_reset;
-(BOOL)hasAlpha;
-(CGSize)pixelSize;
-(void)dealloc;
-(void)setHasAlpha:(BOOL)arg1 ;
-(void)setWrapMode:(int)arg1 ;
-(long long)filteringMode;
-(void)setIsPOT:(BOOL)arg1 ;
-(void)setFilteringMode:(long long)arg1 ;
-(shared_ptr<jet_texture>*)backingTexture;
-(void)setBackingTexture:(shared_ptr<jet_texture>*)arg1 ;
@end

