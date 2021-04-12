/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

@property (assign) BOOL finishedDecompressing;              //@synthesize finishedDecompressing=_finishedDecompressing - In the implementation block
@property (readonly) long long orientation; 
-(BOOL)isDecompressing;
-(void)setFinishedDecompressing:(BOOL)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(long long)orientation;
-(BOOL)finishedDecompressing;
-(CGImageRef)CGImage;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithData:(id)arg1 immediateLoadWithMaxSize:(CGSize)arg2 scale:(double)arg3 renderingIntent:(unsigned long long)arg4 cache:(BOOL)arg5 ;
@end

