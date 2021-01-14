/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
*/

#import <TextInput/TextInput-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface TIImageCacheItem : NSObject <NSSecureCoding> {

	unsigned char _format;
	double _scale;
	CGColorRef _formatColor;
	NSData* _data;
	/*^block*/id _dataReleaseHandler;
	CGSize _size;

}

@property (assign,nonatomic) CGSize size;                         //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) unsigned char format;                //@synthesize format=_format - In the implementation block
@property (assign,nonatomic) CGColorRef formatColor;              //@synthesize formatColor=_formatColor - In the implementation block
@property (assign,nonatomic) double scale;                        //@synthesize scale=_scale - In the implementation block
@property (nonatomic,retain) NSData * data;                       //@synthesize data=_data - In the implementation block
@property (nonatomic,copy) id dataReleaseHandler;                 //@synthesize dataReleaseHandler=_dataReleaseHandler - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)cacheItemWithSize:(CGSize)arg1 format:(unsigned char)arg2 formatColor:(CGColorRef)arg3 scale:(double)arg4 data:(id)arg5 ;
+(id)cacheItemWithSize:(CGSize)arg1 format:(unsigned char)arg2 formatColor:(CGColorRef)arg3 scale:(double)arg4 data:(id)arg5 dataReleaseHandler:(/*^block*/id)arg6 ;
-(void)setFormat:(unsigned char)arg1 ;
-(unsigned char)format;
-(CGColorRef)formatColor;
-(CGSize)size;
-(double)scale;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setSize:(CGSize)arg1 ;
-(void)setData:(NSData *)arg1 ;
-(void)setFormatColor:(CGColorRef)arg1 ;
-(id)dataReleaseHandler;
-(NSData *)data;
-(void)setScale:(double)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_callDataReleaseHandler;
-(void)setDataReleaseHandler:(id)arg1 ;
-(void)dealloc;
@end

