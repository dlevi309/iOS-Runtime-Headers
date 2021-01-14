/*
* Generated on Thursday, January 14, 2021 at 2:21:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)init;
-(id)description;
-(void)dealloc;
@end

