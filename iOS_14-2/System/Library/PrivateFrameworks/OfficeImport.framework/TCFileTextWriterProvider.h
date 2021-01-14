/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/TCXmlTextWriterProvider.h>

@class NSString;

@interface TCFileTextWriterProvider : TCXmlTextWriterProvider {

	NSString* _filePath;

}

@property (nonatomic,copy,readonly) NSString * filePath;              //@synthesize filePath=_filePath - In the implementation block
-(BOOL)setUp;
-(NSString *)filePath;
-(id)initWithFilePath:(id)arg1 ;
@end

