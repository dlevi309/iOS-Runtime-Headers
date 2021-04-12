/*
* Generated on Thursday, January 14, 2021 at 2:28:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface NPKProtoBitmap : PBCodable <NSCopying> {

	unsigned long long _bitsPerComponent;
	unsigned long long _bitsPerPixel;
	unsigned long long _bytesPerRow;
	unsigned long long _height;
	unsigned long long _width;
	NSData* _bitmapData;
	unsigned _bitmapInfo;

}

@property (assign,nonatomic) unsigned long long width;                         //@synthesize width=_width - In the implementation block
@property (assign,nonatomic) unsigned long long height;                        //@synthesize height=_height - In the implementation block
@property (assign,nonatomic) unsigned long long bitsPerComponent;              //@synthesize bitsPerComponent=_bitsPerComponent - In the implementation block
@property (assign,nonatomic) unsigned long long bitsPerPixel;                  //@synthesize bitsPerPixel=_bitsPerPixel - In the implementation block
@property (assign,nonatomic) unsigned long long bytesPerRow;                   //@synthesize bytesPerRow=_bytesPerRow - In the implementation block
@property (assign,nonatomic) unsigned bitmapInfo;                              //@synthesize bitmapInfo=_bitmapInfo - In the implementation block
@property (nonatomic,retain) NSData * bitmapData;                              //@synthesize bitmapData=_bitmapData - In the implementation block
-(void)setHeight:(unsigned long long)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)width;
-(unsigned long long)bytesPerRow;
-(void)setWidth:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSData *)bitmapData;
-(unsigned long long)height;
-(id)description;
-(unsigned long long)bitsPerComponent;
-(void)setBitsPerComponent:(unsigned long long)arg1 ;
-(void)setBytesPerRow:(unsigned long long)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned)bitmapInfo;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)bitsPerPixel;
-(void)setBitsPerPixel:(unsigned long long)arg1 ;
-(void)setBitmapInfo:(unsigned)arg1 ;
-(void)setBitmapData:(NSData *)arg1 ;
@end

