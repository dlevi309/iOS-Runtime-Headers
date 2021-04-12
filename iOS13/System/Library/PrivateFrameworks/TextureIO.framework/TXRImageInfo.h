/*
* Generated on Monday, March 1, 2021 at 2:35:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextureIO.framework/TextureIO
*/


@protocol TXRBuffer;
@class NSError;

@interface TXRImageInfo : NSObject {

	unsigned long long _offset;
	id<TXRBuffer> _buffer;
	unsigned long long _bytesPerRow;
	unsigned long long _bytesPerImage;
	NSError* _error;

}

@property (assign,nonatomic) unsigned long long offset;                     //@synthesize offset=_offset - In the implementation block
@property (nonatomic,retain) id<TXRBuffer> buffer;                          //@synthesize buffer=_buffer - In the implementation block
@property (assign,nonatomic) unsigned long long bytesPerRow;                //@synthesize bytesPerRow=_bytesPerRow - In the implementation block
@property (assign,nonatomic) unsigned long long bytesPerImage;              //@synthesize bytesPerImage=_bytesPerImage - In the implementation block
@property (retain) NSError * error;                                         //@synthesize error=_error - In the implementation block
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(unsigned long long)bytesPerRow;
-(void)setBytesPerRow:(unsigned long long)arg1 ;
-(void)setOffset:(unsigned long long)arg1 ;
-(void)setBuffer:(id<TXRBuffer>)arg1 ;
-(id<TXRBuffer>)buffer;
-(unsigned long long)offset;
-(unsigned long long)bytesPerImage;
-(void)setBytesPerImage:(unsigned long long)arg1 ;
@end

