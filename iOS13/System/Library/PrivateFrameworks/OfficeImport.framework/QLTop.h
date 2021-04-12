/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <libobjc.A.dylib/OCDReaderDelegate.h>

@class CMMapper, CMState, CMArchiveManager, OCDDocument, NSString;

@interface QLTop : NSObject <OCDReaderDelegate> {

	CMMapper* _mapper;
	CMState* _state;
	CMArchiveManager* _archiver;
	OCDDocument* _document;
	NSString* _fileName;
	unsigned long long _format;
	BOOL _forIndexing;

}

@property (readonly) CMMapper * mapper;                             //@synthesize mapper=_mapper - In the implementation block
@property (readonly) CMState * state;                               //@synthesize state=_state - In the implementation block
@property (assign) BOOL forIndexing;                                //@synthesize forIndexing=_forIndexing - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsProgressiveMapping;
+(void)fillHTMLArchiveForOfficeFile:(id)arg1 dataFormat:(unsigned long long)arg2 archiver:(id)arg3 ;
+(void)fillHTMLArchiveForOfficeData:(id)arg1 fileName:(id)arg2 dataFormat:(unsigned long long)arg3 archiver:(id)arg4 ;
+(void)fillHTMLArchiveForOfficeFile:(id)arg1 orData:(id)arg2 dataFileName:(id)arg3 dataFormat:(unsigned long long)arg4 archiver:(id)arg5 ;
+(id)metadataForBinaryOfficeFileAtURL:(id)arg1 error:(id*)arg2 ;
-(CMState *)state;
-(CMMapper *)mapper;
-(Class)stateClass;
-(void)initializeClasses;
-(Class)readerClassForBinaryDocuments;
-(Class)readerClassForXMLDocuments;
-(Class)mapperClassForIndexing:(BOOL)arg1 ;
-(void)readFile:(id)arg1 orData:(id)arg2 dataFileName:(id)arg3 format:(unsigned long long)arg4 archiver:(id)arg5 forIndexing:(BOOL)arg6 ;
-(void)readerDidStartDocument:(id)arg1 withElementCount:(long long)arg2 ;
-(void)readerDidReadElement:(id)arg1 atIndex:(unsigned long long)arg2 inDocument:(id)arg3 isLastElement:(BOOL)arg4 ;
-(void)readerDidEndDocument:(id)arg1 ;
-(id)documentWithFile:(id)arg1 orData:(id)arg2 isXML:(BOOL)arg3 archiver:(id)arg4 ;
-(void)setupMappingStateWithDocument:(id)arg1 ;
-(BOOL)forIndexing;
-(void)setForIndexing:(BOOL)arg1 ;
@end

