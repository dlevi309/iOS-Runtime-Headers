/*
* Generated on Thursday, January 14, 2021 at 2:28:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/

#import <TSReading/TSPFileDataStorage.h>

@class NSURL, NSData, TSPObjectContext;

@interface TSPExternalReferenceDataStorage : TSPFileDataStorage {

	NSURL* _URL;
	NSData* _bookmarkData;
	TSPObjectContext* _context;

}

@property (getter=isReadable,nonatomic,readonly) BOOL readable; 
-(BOOL)isReadable;
-(id)initWithURL:(id)arg1 ;
-(id)storageForDataCopyFromOtherContext;
-(void)performReadWithAccessor:(/*^block*/id)arg1 ;
-(id)initWithBookmarkData:(id)arg1 context:(id)arg2 ;
-(id)bookmarkDataForArchiver:(id)arg1 ;
@end

