/*
* Generated on Thursday, January 14, 2021 at 2:28:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setBuffer:(id<TXRBuffer>)arg1 ;
-(unsigned long long)bytesPerRow;
-(void)setBytesPerImage:(unsigned long long)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(unsigned long long)offset;
-(id<TXRBuffer>)buffer;
-(unsigned long long)bytesPerImage;
-(void)setBytesPerRow:(unsigned long long)arg1 ;
-(void)setOffset:(unsigned long long)arg1 ;
@end

