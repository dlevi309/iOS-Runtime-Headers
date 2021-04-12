/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIImageCGImageContent.h>

@class _UICGImageDecompressor;

@interface _UIImageAsyncCGImageContent : _UIImageCGImageContent {

	long long _orientation;
	BOOL _finishedDecompressing;
	_UICGImageDecompressor* _decompressor;

}

@property (setter=_setDecompressor:,retain) _UICGImageDecompressor * _decompressor;              //@synthesize decompressor=_decompressor - In the implementation block
@property (assign) BOOL finishedDecompressing;                                                   //@synthesize finishedDecompressing=_finishedDecompressing - In the implementation block
@property (readonly) long long orientation; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(long long)orientation;
-(CGImageRef)CGImage;
-(BOOL)isDecompressing;
-(_UICGImageDecompressor *)_decompressor;
-(void)_setDecompressor:(id)arg1 ;
-(id)initWithData:(id)arg1 immediateLoadWithMaxSize:(CGSize)arg2 scale:(double)arg3 renderingIntent:(unsigned long long)arg4 cache:(BOOL)arg5 ;
-(BOOL)finishedDecompressing;
-(void)setFinishedDecompressing:(BOOL)arg1 ;
@end

