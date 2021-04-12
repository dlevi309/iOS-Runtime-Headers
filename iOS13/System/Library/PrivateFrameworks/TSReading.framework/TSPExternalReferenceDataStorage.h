/*
* Generated on Monday, March 1, 2021 at 2:33:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSPFileDataStorage.h>

@class NSURL, NSData, TSPObjectContext;

@interface TSPExternalReferenceDataStorage : TSPFileDataStorage {

	NSURL* _URL;
	NSData* _bookmarkData;
	TSPObjectContext* _context;

}

@property (getter=isReadable,nonatomic,readonly) BOOL readable; 
-(id)initWithURL:(id)arg1 ;
-(BOOL)isReadable;
-(id)storageForDataCopyFromOtherContext;
-(void)performReadWithAccessor:(/*^block*/id)arg1 ;
-(id)initWithBookmarkData:(id)arg1 context:(id)arg2 ;
-(id)bookmarkDataForArchiver:(id)arg1 ;
@end

