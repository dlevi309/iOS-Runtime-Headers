/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)setUp;
-(NSString *)entryName;
-(OISFUZipArchiveOutputStream *)outputStream;
-(BOOL)isCompressed;
-(id)initWithEntryName:(id)arg1 outputStream:(id)arg2 isCompressed:(BOOL)arg3 ;
@end

