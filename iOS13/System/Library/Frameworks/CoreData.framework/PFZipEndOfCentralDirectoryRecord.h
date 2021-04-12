/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@class NSString;

@interface PFZipEndOfCentralDirectoryRecord : NSObject {

	unsigned short _numberOfDisk;
	unsigned short _diskWhereCentralDirectoryStarts;
	unsigned short _numberOfCentralDirectoryRecordsOnThisDisk;
	unsigned short _totalNumberOfCentralDirectoryRecords;
	unsigned _byteSizeOfCentralDirectory;
	unsigned _centralDirectoryOffset;
	unsigned short _commentLength;
	NSString* _comment;

}

@property (assign,nonatomic) unsigned short numberOfDisk;                                           //@synthesize numberOfDisk=_numberOfDisk - In the implementation block
@property (assign,nonatomic) unsigned short diskWhereCentralDirectoryStarts;                        //@synthesize diskWhereCentralDirectoryStarts=_diskWhereCentralDirectoryStarts - In the implementation block
@property (assign,nonatomic) unsigned short numberOfCentralDirectoryRecordsOnThisDisk;              //@synthesize numberOfCentralDirectoryRecordsOnThisDisk=_numberOfCentralDirectoryRecordsOnThisDisk - In the implementation block
@property (assign,nonatomic) unsigned short totalNumberOfCentralDirectoryRecords;                   //@synthesize totalNumberOfCentralDirectoryRecords=_totalNumberOfCentralDirectoryRecords - In the implementation block
@property (assign,nonatomic) unsigned byteSizeOfCentralDirectory;                                   //@synthesize byteSizeOfCentralDirectory=_byteSizeOfCentralDirectory - In the implementation block
@property (assign,nonatomic) unsigned centralDirectoryOffset;                                       //@synthesize centralDirectoryOffset=_centralDirectoryOffset - In the implementation block
@property (nonatomic,readonly) unsigned short commentLength;                                        //@synthesize commentLength=_commentLength - In the implementation block
@property (nonatomic,retain) NSString * comment;                                                    //@synthesize comment=_comment - In the implementation block
-(id)init;
-(void)dealloc;
-(id)description;
-(NSString *)comment;
-(unsigned long long)loadFromBytes:(const char*)arg1 offset:(unsigned long long)arg2 ;
-(unsigned long long)loadFromData:(id)arg1 offset:(unsigned long long)arg2 ;
-(void)appendToData:(id)arg1 ;
-(void)setComment:(NSString *)arg1 ;
-(unsigned short)numberOfDisk;
-(void)setNumberOfDisk:(unsigned short)arg1 ;
-(unsigned short)diskWhereCentralDirectoryStarts;
-(void)setDiskWhereCentralDirectoryStarts:(unsigned short)arg1 ;
-(unsigned short)numberOfCentralDirectoryRecordsOnThisDisk;
-(void)setNumberOfCentralDirectoryRecordsOnThisDisk:(unsigned short)arg1 ;
-(unsigned short)totalNumberOfCentralDirectoryRecords;
-(void)setTotalNumberOfCentralDirectoryRecords:(unsigned short)arg1 ;
-(unsigned)byteSizeOfCentralDirectory;
-(void)setByteSizeOfCentralDirectory:(unsigned)arg1 ;
-(unsigned)centralDirectoryOffset;
-(void)setCentralDirectoryOffset:(unsigned)arg1 ;
-(unsigned short)commentLength;
@end

