/*
* Generated on Monday, March 1, 2021 at 2:35:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/JITAppKit.framework/JITAppKit
*/


#import <JITAppKit/JITAppKit-Structs.h>
@class NSString;

@interface Main : NSObject {

	NSString* _path;
	NSString* _fileName;
	void* _zip;

}

@property (nonatomic,readonly) BOOL open; 
@property (nonatomic,readonly) BOOL close; 
+(BOOL)unzipFileAtPath:(id)arg1 toDestination:(id)arg2 overwrite:(BOOL)arg3 password:(id)arg4 error:(id*)arg5 ;
+(BOOL)unzipFileAtPath:(id)arg1 toDestination:(id)arg2 delegate:(id)arg3 ;
+(BOOL)unzipFileAtPath:(id)arg1 toDestination:(id)arg2 overwrite:(BOOL)arg3 password:(id)arg4 error:(id*)arg5 delegate:(id)arg6 progressHandler:(/*^block*/id)arg7 completionHandler:(/*^block*/id)arg8 ;
+(id)dateWithMicrosoftDOSFormat:(unsigned)arg1 ;
+(BOOL)unzipFileAtPath:(id)arg1 toDestination:(id)arg2 overwrite:(BOOL)arg3 password:(id)arg4 error:(id*)arg5 delegate:(id)arg6 ;
+(BOOL)createZipFileAtPath:(id)arg1 withContentsOfDirectory:(id)arg2 keepParentDirectory:(BOOL)arg3 ;
+(BOOL)unzipFileAtPath:(id)arg1 toDestination:(id)arg2 ;
+(BOOL)unzipFileAtPath:(id)arg1 toDestination:(id)arg2 overwrite:(BOOL)arg3 password:(id)arg4 progressHandler:(/*^block*/id)arg5 completionHandler:(/*^block*/id)arg6 ;
+(BOOL)unzipFileAtPath:(id)arg1 toDestination:(id)arg2 progressHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
+(BOOL)createZipFileAtPath:(id)arg1 withFilesAtPaths:(id)arg2 ;
+(BOOL)createZipFileAtPath:(id)arg1 withContentsOfDirectory:(id)arg2 ;
-(BOOL)open;
-(BOOL)close;
-(id)initWithPath:(id)arg1 ;
-(BOOL)writeFile:(id)arg1 ;
-(BOOL)writeFileAtPath:(id)arg1 withFileName:(id)arg2 ;
-(void)zipInformation:(SCD_Struct_Ma0*)arg1 setDate:(id)arg2 ;
-(BOOL)writeFolderAtPath:(id)arg1 withFolderName:(id)arg2 ;
-(BOOL)writeData:(id)arg1 fileName:(id)arg2 ;
@end

