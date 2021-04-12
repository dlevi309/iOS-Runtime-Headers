/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/TCXmlTextWriterProvider.h>

@class NSString;

@interface TCFileTextWriterProvider : TCXmlTextWriterProvider {

	NSString* _filePath;

}

@property (nonatomic,copy,readonly) NSString * filePath;              //@synthesize filePath=_filePath - In the implementation block
-(id)initWithFilePath:(id)arg1 ;
-(NSString *)filePath;
-(BOOL)setUp;
@end

