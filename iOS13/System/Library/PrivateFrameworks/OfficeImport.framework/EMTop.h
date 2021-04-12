/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/QLTop.h>
#import <libobjc.A.dylib/OIProgressiveReaderDelegate.h>

@class EMWorkbookMapper;

@interface EMTop : QLTop <OIProgressiveReaderDelegate>

@property (readonly) EMWorkbookMapper * mapper; 
+(BOOL)supportsProgressiveMapping;
-(Class)stateClass;
-(void)initializeClasses;
-(Class)readerClassForBinaryDocuments;
-(Class)readerClassForXMLDocuments;
-(Class)mapperClassForIndexing:(BOOL)arg1 ;
-(void)readFile:(id)arg1 orData:(id)arg2 dataFileName:(id)arg3 format:(unsigned long long)arg4 archiver:(id)arg5 forIndexing:(BOOL)arg6 ;
-(void)readerDidStartDocument:(id)arg1 withElementCount:(long long)arg2 ;
@end

