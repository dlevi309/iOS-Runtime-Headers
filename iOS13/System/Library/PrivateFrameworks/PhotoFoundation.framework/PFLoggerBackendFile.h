/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
*/

#import <PhotoFoundation/PhotoFoundation-Structs.h>
#import <PhotoFoundation/PFLoggerBackendAdapter.h>

@class NSDateFormatter, NSFileHandle, NSData;

@interface PFLoggerBackendFile : PFLoggerBackendAdapter {

	NSDateFormatter* _dateFormatter;
	BOOL _shouldCloseFileHandle;
	BOOL _isStandardErrorFileBackend;
	NSFileHandle* _fileHandle;
	NSData* _lineTerminator;

}

@property (retain) NSFileHandle * fileHandle;                    //@synthesize fileHandle=_fileHandle - In the implementation block
@property (retain) NSData * lineTerminator;                      //@synthesize lineTerminator=_lineTerminator - In the implementation block
@property (assign) BOOL shouldCloseFileHandle;                   //@synthesize shouldCloseFileHandle=_shouldCloseFileHandle - In the implementation block
@property (assign) BOOL isStandardErrorFileBackend;              //@synthesize isStandardErrorFileBackend=_isStandardErrorFileBackend - In the implementation block
+(id)backendsFromUserDefaultsWithLogLevel:(int)arg1 ;
+(id)standardErrorFileBackend;
-(void)dealloc;
-(NSFileHandle *)fileHandle;
-(void)logFromCodeLocation:(SCD_Struct_PF5*)arg1 facility:(id)arg2 subsystem:(id)arg3 level:(int)arg4 message:(id)arg5 format:(id)arg6 args:(char*)arg7 ;
-(BOOL)outputsToDebuggerConsole;
-(id)initWithLogFileURL:(id)arg1 ;
-(id)initWithFileHandle:(id)arg1 ;
-(id)writeOpenFileAtURL:(id)arg1 ;
-(void)setFileHandle:(NSFileHandle *)arg1 ;
-(NSData *)lineTerminator;
-(void)setLineTerminator:(NSData *)arg1 ;
-(BOOL)shouldCloseFileHandle;
-(void)setShouldCloseFileHandle:(BOOL)arg1 ;
-(BOOL)isStandardErrorFileBackend;
-(void)setIsStandardErrorFileBackend:(BOOL)arg1 ;
@end

