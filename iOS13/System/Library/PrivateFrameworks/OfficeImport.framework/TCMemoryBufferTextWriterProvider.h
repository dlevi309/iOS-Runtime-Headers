/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/TCXmlTextWriterProvider.h>

@class NSMutableData;

@interface TCMemoryBufferTextWriterProvider : TCXmlTextWriterProvider {

	NSMutableData* _memoryBuffer;

}

@property (nonatomic,retain,readonly) NSMutableData * memoryBuffer;              //@synthesize memoryBuffer=_memoryBuffer - In the implementation block
-(BOOL)setUp;
-(id)initWithMemoryBuffer:(id)arg1 ;
-(NSMutableData *)memoryBuffer;
@end

