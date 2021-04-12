/*
* Generated on Thursday, January 14, 2021 at 2:28:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/

#import <TSPersistence/TSPersistence-Structs.h>
#import <TSUtility/SFUDataRepresentation.h>

@class TSPDatabase;

@interface TSPDatabaseDataRepresentation : SFUDataRepresentation {

	TSPDatabase* _database;
	long long _identifier;

}
-(long long)dataLength;
-(id)inputStream;
-(BOOL)hasSameLocationAs:(id)arg1 ;
-(id)initWithDatabase:(id)arg1 identifier:(long long)arg2 ;
-(sqlite3_blobRef)_openBlob;
-(ZeroCopyInputStream*)createProtobufInputStream;
@end

