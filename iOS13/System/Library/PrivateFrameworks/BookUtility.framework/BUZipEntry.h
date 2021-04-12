/*
* Generated on Monday, March 1, 2021 at 2:34:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BookUtility.framework/BookUtility
*/


#import <BookUtility/BookUtility-Structs.h>
@class NSString, NSDate;

@interface BUZipEntry : NSObject {

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
-(id)description;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(unsigned long long)size;
-(void)setOffset:(unsigned long long)arg1 ;
-(void)setSize:(unsigned long long)arg1 ;
-(unsigned long long)offset;
-(unsigned long long)compressedSize;
-(void)setCompressedSize:(unsigned long long)arg1 ;
-(NSDate *)lastModificationDate;
-(void)setCompressed:(BOOL)arg1 ;
-(BOOL)isCompressed;
-(void)setCRC:(unsigned)arg1 ;
-(void)setNameLength:(unsigned short)arg1 ;
-(unsigned)CRC;
-(unsigned short)nameLength;
-(id)plistFromArchive:(id)arg1 ;
-(xmlDoc*)xmlDocumentFromArchive:(id)arg1 ;
-(id)extractFromArchive:(id)arg1 ;
-(void)setLastModificationDate:(NSDate *)arg1 ;
-(NSString *)collapsedName;
-(unsigned short)extraFieldsLength;
-(void)setCollapsedName:(NSString *)arg1 ;
-(void)setExtraFieldsLength:(unsigned short)arg1 ;
-(unsigned long long)fileHeaderLength;
-(void)setFileHeaderLength:(unsigned long long)arg1 ;
-(id)_dataFromArchive:(id)arg1 error:(id*)arg2 ;
-(id)stringFromArchive:(id)arg1 ;
-(id)dataFromArchive:(id)arg1 ;
@end

