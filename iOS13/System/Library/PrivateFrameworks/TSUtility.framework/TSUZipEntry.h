/*
* Generated on Monday, March 1, 2021 at 2:33:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
*/


@class NSString;

@interface TSUZipEntry : NSObject {

	BOOL _compressed;
	unsigned short _nameLength;
	unsigned short _extraFieldLength;
	unsigned _CRC;
	NSString* _name;
	unsigned long long _size;
	unsigned long long _compressedSize;
	unsigned long long _offset;

}

@property (nonatomic,copy) NSString * name;                                    //@synthesize name=_name - In the implementation block
@property (assign,getter=isCompressed,nonatomic) BOOL compressed;              //@synthesize compressed=_compressed - In the implementation block
@property (assign,nonatomic) unsigned long long size;                          //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) unsigned long long compressedSize;                //@synthesize compressedSize=_compressedSize - In the implementation block
@property (assign,nonatomic) unsigned long long offset;                        //@synthesize offset=_offset - In the implementation block
@property (assign,nonatomic) unsigned CRC;                                     //@synthesize CRC=_CRC - In the implementation block
@property (assign,nonatomic) unsigned short nameLength;                        //@synthesize nameLength=_nameLength - In the implementation block
@property (assign,nonatomic) unsigned short extraFieldLength;                  //@synthesize extraFieldLength=_extraFieldLength - In the implementation block
-(id)description;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(unsigned long long)size;
-(void)setOffset:(unsigned long long)arg1 ;
-(void)setSize:(unsigned long long)arg1 ;
-(unsigned long long)offset;
-(unsigned long long)compressedSize;
-(void)setCompressedSize:(unsigned long long)arg1 ;
-(unsigned short)extraFieldLength;
-(void)setCompressed:(BOOL)arg1 ;
-(BOOL)isCompressed;
-(void)setCRC:(unsigned)arg1 ;
-(void)setNameLength:(unsigned short)arg1 ;
-(void)setExtraFieldLength:(unsigned short)arg1 ;
-(unsigned)CRC;
-(unsigned short)nameLength;
@end

