/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class NSString;

@interface TSUZipWriterEntry : NSObject {

	unsigned _CRC;
	NSString* _name;
	unsigned long long _size;
	unsigned long long _offset;

}

@property (nonatomic,copy) NSString * name;                          //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) unsigned long long size;                //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) unsigned long long offset;              //@synthesize offset=_offset - In the implementation block
@property (assign,nonatomic) unsigned CRC;                           //@synthesize CRC=_CRC - In the implementation block
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(unsigned long long)size;
-(void)setOffset:(unsigned long long)arg1 ;
-(void)setSize:(unsigned long long)arg1 ;
-(unsigned long long)offset;
-(void)setCRC:(unsigned)arg1 ;
-(unsigned)CRC;
@end

