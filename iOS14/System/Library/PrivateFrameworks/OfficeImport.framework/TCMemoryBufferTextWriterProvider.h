/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

