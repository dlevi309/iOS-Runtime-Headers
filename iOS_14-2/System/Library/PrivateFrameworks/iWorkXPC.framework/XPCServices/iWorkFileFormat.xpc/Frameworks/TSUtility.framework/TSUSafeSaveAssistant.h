/*
* Generated on Thursday, January 14, 2021 at 2:28:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSUtility.framework/TSUtility
*/


@class NSURL, OITSUTemporaryDirectory;

@interface TSUSafeSaveAssistant : NSObject {

	NSURL* _saveURL;
	OITSUTemporaryDirectory* _temporaryDirectory;
	NSURL* _writeURL;

}

@property (nonatomic,readonly) NSURL * writeURL;              //@synthesize writeURL=_writeURL - In the implementation block
+(BOOL)finishWritingToURL:(id)arg1 byMovingOrCopyingItemAtURL:(id)arg2 addingAttributes:(id)arg3 error:(id*)arg4 ;
+(void)writeAttributes:(id)arg1 toURL:(id)arg2 ;
-(id)init;
-(BOOL)endSaveWithSuccess:(BOOL)arg1 toURL:(id)arg2 addingAttributes:(id)arg3 error:(id*)arg4 ;
-(id)initForSavingToURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)endSaveWithSuccess:(BOOL)arg1 addingAttributes:(id)arg2 error:(id*)arg3 ;
-(NSURL *)writeURL;
@end

