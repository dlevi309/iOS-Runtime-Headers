/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSFileHandle, NSDateFormatter;

@interface PLModelMigratorLog : NSObject {

	NSFileHandle* _fileHandle;
	NSDateFormatter* _dateFormatter;

}
+(id)setup;
+(id)openWriteFileAtURL:(id)arg1 ;
-(id)new;
-(void)logFromCodeLocation:(SCD_Struct_PL39)arg1 subsystem:(id)arg2 level:(int)arg3 format:(const char*)arg4 ;
-(id)init;
-(id)initWithFileHandle:(id)arg1 ;
-(id)buildFormatString:(const char*)arg1 ;
-(void)logFromCodeLocation:(SCD_Struct_PL39)arg1 subsystem:(id)arg2 level:(int)arg3 message:(id)arg4 ;
-(id)initWithLogFileURL:(id)arg1 ;
@end

