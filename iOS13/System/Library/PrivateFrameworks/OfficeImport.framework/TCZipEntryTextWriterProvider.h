/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/TCXmlTextWriterProvider.h>

@class NSString, OISFUZipArchiveOutputStream;

@interface TCZipEntryTextWriterProvider : TCXmlTextWriterProvider {

	BOOL _isCompressed;
	NSString* _entryName;
	OISFUZipArchiveOutputStream* _outputStream;

}

@property (nonatomic,copy,readonly) NSString * entryName;                               //@synthesize entryName=_entryName - In the implementation block
@property (nonatomic,readonly) OISFUZipArchiveOutputStream * outputStream;              //@synthesize outputStream=_outputStream - In the implementation block
@property (nonatomic,readonly) BOOL isCompressed;                                       //@synthesize isCompressed=_isCompressed - In the implementation block
-(OISFUZipArchiveOutputStream *)outputStream;
-(BOOL)setUp;
-(BOOL)isCompressed;
-(NSString *)entryName;
-(id)initWithEntryName:(id)arg1 outputStream:(id)arg2 isCompressed:(BOOL)arg3 ;
@end

