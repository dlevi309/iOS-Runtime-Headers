/*
* Generated on Thursday, January 14, 2021 at 2:28:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/


@protocol OS_dispatch_queue;
@class TSUManagedTemporaryDirectory, NSMutableDictionary, NSObject;

@interface TSPDataBookmarkContext : NSObject {

	TSUManagedTemporaryDirectory* _temporaryDirectory;
	NSMutableDictionary* _bookmarkDataURLsForFilenames;
	NSMutableDictionary* _digestStringsForFilenames;
	NSObject*<OS_dispatch_queue> _queue;

}
-(id)init;
-(id)makeBookmarkDataForData:(id)arg1 filename:(id)arg2 options:(unsigned long long)arg3 error:(out id*)arg4 ;
-(BOOL)bookmarkDataNeedsWriteForData:(id)arg1 ;
-(BOOL)isEncryptedDataStorate:(id)arg1 ;
@end

