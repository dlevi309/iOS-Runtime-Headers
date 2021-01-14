/*
* Generated on Thursday, January 14, 2021 at 2:23:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/JetEngine.framework/JetEngine
*/


#import <JetEngine/JetEngine-Structs.h>
@interface JEBrotliEncoder : NSObject {

	unsigned _quality;
	unsigned _sizeHint;
	BrotliEncoderStateStructRef _encoder;

}

@property (nonatomic,readonly) BrotliEncoderStateStructRef encoder;              //@synthesize encoder=_encoder - In the implementation block
@property (assign,nonatomic) unsigned quality;                                   //@synthesize quality=_quality - In the implementation block
@property (assign,nonatomic) unsigned sizeHint;                                  //@synthesize sizeHint=_sizeHint - In the implementation block
@property (nonatomic,readonly) BOOL isFinished; 
-(id)init;
-(BOOL)isFinished;
-(unsigned)quality;
-(BrotliEncoderStateStructRef)encoder;
-(void)setQuality:(unsigned)arg1 ;
-(unsigned)sizeHint;
-(void)setSizeHint:(unsigned)arg1 ;
-(BOOL)compressStreamWithOperation:(long long)arg1 availableIn:(unsigned long long*)arg2 nextIn:(const char**)arg3 availableOut:(unsigned long long*)arg4 nextOut:(char**)arg5 ;
-(void)dealloc;
@end

