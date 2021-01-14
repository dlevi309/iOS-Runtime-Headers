/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class NSString, NSDate;

@interface TSUZipWriterEntry : NSObject {

	unsigned _CRC;
	NSString* _name;
	NSDate* _lastModificationDate;
	unsigned long long _size;
	unsigned long long _offset;

}

@property (nonatomic,copy) NSString * name;                              //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSDate * lastModificationDate;              //@synthesize lastModificationDate=_lastModificationDate - In the implementation block
@property (assign,nonatomic) unsigned long long size;                    //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) unsigned long long offset;                  //@synthesize offset=_offset - In the implementation block
@property (assign,nonatomic) unsigned CRC;                               //@synthesize CRC=_CRC - In the implementation block
-(unsigned)CRC;
-(NSDate *)lastModificationDate;
-(unsigned long long)size;
-(void)setSize:(unsigned long long)arg1 ;
-(NSString *)name;
-(unsigned long long)offset;
-(void)setCRC:(unsigned)arg1 ;
-(void)setOffset:(unsigned long long)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)setLastModificationDate:(NSDate *)arg1 ;
@end

