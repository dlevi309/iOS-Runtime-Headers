/*
* Generated on Thursday, January 14, 2021 at 2:26:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ExposureNotificationDaemon.framework/ExposureNotificationDaemon
*/


@class NSString;

@interface ENSecureArchiveFileWrapper : NSObject {

	int _fileDescriptor;
	NSString* _path;

}

@property (nonatomic,copy,readonly) NSString * path;              //@synthesize path=_path - In the implementation block
-(void)close;
-(id)initWithPath:(id)arg1 ;
-(BOOL)openWithError:(id*)arg1 ;
-(NSString *)path;
-(BOOL)readObject:(id*)arg1 ofClass:(Class)arg2 error:(id*)arg3 ;
-(BOOL)saveObject:(id)arg1 error:(id*)arg2 ;
-(BOOL)_writeObject:(id)arg1 toFileDescriptor:(int)arg2 error:(id*)arg3 ;
@end

