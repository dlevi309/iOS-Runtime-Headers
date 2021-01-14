/*
* Generated on Thursday, January 14, 2021 at 2:28:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSUtility.framework/TSUtility
*/


@class NSString, NSDate;

@interface TSUZipEntry : NSObject {

	BOOL _compressed;
	unsigned short _nameLength;
	unsigned short _extraFieldsLength;
	unsigned _CRC;
	NSString* _name;
	NSDate* _lastModificationDate;
	unsigned long long _size;
	NSString* _collapsedName;
	unsigned long long _compressedSize;
	unsigned long long _offset;
	unsigned long long _fileHeaderLength;

}

@property (nonatomic,copy) NSString * name;                                    //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * collapsedName;                           //@synthesize collapsedName=_collapsedName - In the implementation block
@property (assign,getter=isCompressed,nonatomic) BOOL compressed;              //@synthesize compressed=_compressed - In the implementation block
@property (nonatomic,copy) NSDate * lastModificationDate;                      //@synthesize lastModificationDate=_lastModificationDate - In the implementation block
@property (assign,nonatomic) unsigned long long size;                          //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) unsigned long long compressedSize;                //@synthesize compressedSize=_compressedSize - In the implementation block
@property (assign,nonatomic) unsigned long long offset;                        //@synthesize offset=_offset - In the implementation block
@property (assign,nonatomic) unsigned CRC;                                     //@synthesize CRC=_CRC - In the implementation block
@property (assign,nonatomic) unsigned short nameLength;                        //@synthesize nameLength=_nameLength - In the implementation block
@property (assign,nonatomic) unsigned short extraFieldsLength;                 //@synthesize extraFieldsLength=_extraFieldsLength - In the implementation block
@property (assign,nonatomic) unsigned long long fileHeaderLength;              //@synthesize fileHeaderLength=_fileHeaderLength - In the implementation block
-(unsigned)CRC;
-(NSDate *)lastModificationDate;
-(unsigned long long)size;
-(void)setSize:(unsigned long long)arg1 ;
-(NSString *)name;
-(unsigned long long)offset;
-(id)description;
-(void)setCompressed:(BOOL)arg1 ;
-(void)setCRC:(unsigned)arg1 ;
-(void)setOffset:(unsigned long long)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(BOOL)isCompressed;
-(unsigned long long)compressedSize;
-(void)setLastModificationDate:(NSDate *)arg1 ;
-(void)setNameLength:(unsigned short)arg1 ;
-(void)setCompressedSize:(unsigned long long)arg1 ;
-(NSString *)collapsedName;
-(unsigned short)extraFieldsLength;
-(void)setCollapsedName:(NSString *)arg1 ;
-(unsigned short)nameLength;
-(void)setExtraFieldsLength:(unsigned short)arg1 ;
-(unsigned long long)fileHeaderLength;
-(void)setFileHeaderLength:(unsigned long long)arg1 ;
@end

