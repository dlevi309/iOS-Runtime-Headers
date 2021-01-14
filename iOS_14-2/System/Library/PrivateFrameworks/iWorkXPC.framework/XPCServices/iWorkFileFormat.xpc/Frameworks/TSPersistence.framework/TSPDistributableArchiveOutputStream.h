/*
* Generated on Thursday, January 14, 2021 at 2:28:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/


@protocol SFUSimpleOutputStream;
#import <TSPersistence/TSPersistence-Structs.h>
@interface TSPDistributableArchiveOutputStream : NSObject {

	id<SFUSimpleOutputStream> _outputStream;
	long long _offset;
	BOOL _doneWritingObjectEntries;
	BOOL _doneWritingFileDescriptorProtos;
	BOOL _doneWritingClassInfoMap;
	BOOL _descriptorsEnabled;
	BOOL _tocEnabled;

}
-(id)initWithOutputStream:(id)arg1 checkCrc:(unsigned)arg2 enableDescriptors:(BOOL)arg3 enableToc:(BOOL)arg4 closedCleanly:(BOOL)arg5 archivedVersions:(SCD_Struct_TS0)arg6 ;
-(BOOL)writeEntry:(id)arg1 offset:(long long*)arg2 headerLength:(unsigned*)arg3 error:(id*)arg4 ;
@end

