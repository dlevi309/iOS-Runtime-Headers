/*
* Generated on Thursday, January 14, 2021 at 2:22:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
*/

#import <PhotoFoundation/PhotoFoundation-Structs.h>
#import <PhotoFoundation/PFLoggerBackendAdapter.h>

@class NSDateFormatter, NSFileHandle;

@interface PFLoggerBackendFile : PFLoggerBackendAdapter {

	NSDateFormatter* _dateFormatter;
	BOOL _shouldCloseFileHandle;
	BOOL _isStandardErrorFileBackend;
	NSFileHandle* _fileHandle;

}

@property (retain) NSFileHandle * fileHandle;                    //@synthesize fileHandle=_fileHandle - In the implementation block
@property (assign) BOOL shouldCloseFileHandle;                   //@synthesize shouldCloseFileHandle=_shouldCloseFileHandle - In the implementation block
@property (assign) BOOL isStandardErrorFileBackend;              //@synthesize isStandardErrorFileBackend=_isStandardErrorFileBackend - In the implementation block
+(id)backendsFromUserDefaultsWithLogLevel:(int)arg1 ;
+(id)standardErrorFileBackend;
-(void)logFromCodeLocation:(SCD_Struct_PF5*)arg1 facility:(id)arg2 subsystem:(id)arg3 level:(int)arg4 message:(id)arg5 format:(id)arg6 args:(char*)arg7 ;
-(id)initWithFileHandle:(id)arg1 ;
-(BOOL)outputsToDebuggerConsole;
-(NSFileHandle *)fileHandle;
-(id)initWithLogFileURL:(id)arg1 ;
-(id)writeOpenFileAtURL:(id)arg1 ;
-(BOOL)shouldCloseFileHandle;
-(void)setShouldCloseFileHandle:(BOOL)arg1 ;
-(BOOL)isStandardErrorFileBackend;
-(void)setIsStandardErrorFileBackend:(BOOL)arg1 ;
-(void)dealloc;
-(void)setFileHandle:(NSFileHandle *)arg1 ;
@end

