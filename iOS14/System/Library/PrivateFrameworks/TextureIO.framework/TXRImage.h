/*
* Generated on Thursday, January 14, 2021 at 2:28:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextureIO.framework/TextureIO
*/

#import <TextureIO/TextureIO-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol TXRBuffer, TXRDataSourceProvider;
@class NSError;

@interface TXRImage : NSObject <NSCopying> {

	id<TXRBuffer> _buffer;
	unsigned long long _offset;
	unsigned long long _bytesPerImage;
	unsigned long long _bytesPerRow;
	NSError* _error;
	long long _face;
	unsigned long long _element;
	unsigned long long _level;
	id<TXRDataSourceProvider> _dataSourceProvider;

}

@property (readonly) unsigned long long offset;                     //@synthesize offset=_offset - In the implementation block
@property (readonly) id<TXRBuffer> buffer;                          //@synthesize buffer=_buffer - In the implementation block
@property (readonly) unsigned long long bytesPerRow; 
@property (readonly) unsigned long long bytesPerImage; 
@property (readonly) NSError * error;                               //@synthesize error=_error - In the implementation block
-(unsigned long long)bytesPerRow;
-(NSError *)error;
-(unsigned long long)offset;
-(id<TXRBuffer>)buffer;
-(unsigned long long)bytesPerImage;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)deferredProvide;
-(id)initWithBytesPerRow:(unsigned long long)arg1 bytesPerImage:(unsigned long long)arg2 buffer:(id)arg3 offset:(unsigned long long)arg4 ;
-(id)initAsLevel:(unsigned long long)arg1 element:(unsigned long long)arg2 face:(unsigned long long)arg3 dataSourceProvider:(id)arg4 ;
@end

