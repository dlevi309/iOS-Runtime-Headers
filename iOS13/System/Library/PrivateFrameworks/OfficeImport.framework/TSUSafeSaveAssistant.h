/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class NSURL;

@interface TSUSafeSaveAssistant : NSObject {

	NSURL* _saveURL;
	NSURL* _temporaryDirectoryURL;
	NSURL* _writeURL;

}

@property (nonatomic,readonly) NSURL * writeURL;              //@synthesize writeURL=_writeURL - In the implementation block
+(id)temporaryDirectoryURLForWritingToURL:(id)arg1 error:(id*)arg2 ;
+(BOOL)finishWritingToURL:(id)arg1 byMovingItemAtURL:(id)arg2 addingAttributes:(id)arg3 error:(id*)arg4 ;
+(void)removeTemporaryDirectoryAtURL:(id)arg1 ;
+(void)writeAttributes:(id)arg1 toURL:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(void)removeTemporaryDirectory;
-(BOOL)endSaveWithSuccess:(BOOL)arg1 toURL:(id)arg2 addingAttributes:(id)arg3 error:(id*)arg4 ;
-(id)initForSavingToURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)endSaveWithSuccess:(BOOL)arg1 addingAttributes:(id)arg2 error:(id*)arg3 ;
-(NSURL *)writeURL;
@end

