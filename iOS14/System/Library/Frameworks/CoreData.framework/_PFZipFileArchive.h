/*
* Generated on Thursday, January 14, 2021 at 2:21:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


#import <CoreData/CoreData-Structs.h>
@class NSDictionary, NSData, NSString, NSArray, NSMutableDictionary, NSMutableArray, PFZipEndOfCentralDirectoryRecord;

@interface _PFZipFileArchive : NSObject {

	NSDictionary* _contents;
	NSData* _data;
	id _provider;
	long long _desc;
	NSString* _path;
	NSArray* _names;
	NSDictionary* _properties;
	NSMutableDictionary* _cachedContents;
	struct {
		unsigned providerSuppliesContents : 1;
		unsigned providerSuppliesStreams : 1;
		unsigned providerSuppliesProperties : 1;
		unsigned noContentsCaching : 1;
		unsigned fileOpen : 1;
		unsigned reserved : 27;
	}  _zFlags;
	NSMutableDictionary* _entryNameToData;
	NSMutableDictionary* _entryNameToLocalFileHeader;
	NSMutableDictionary* _entryNameToCentralDirectoryFileHeader;
	NSMutableArray* _localFileHeaders;
	NSMutableArray* _centralDirectoryEntries;
	PFZipEndOfCentralDirectoryRecord* _endRecord;

}
-(void)finalize;
-(id)init;
-(void)dealloc;
@end

