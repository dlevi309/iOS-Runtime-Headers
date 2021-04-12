/*
* Generated on Monday, March 1, 2021 at 2:34:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
*/


@class NSFileHandle, NSString;

@interface UNSFileHandleWrapper : NSObject {

	NSFileHandle* _fileHandle;
	NSString* _path;

}

@property (nonatomic,retain) NSFileHandle * fileHandle;              //@synthesize fileHandle=_fileHandle - In the implementation block
@property (nonatomic,copy) NSString * path;                          //@synthesize path=_path - In the implementation block
-(NSString *)path;
-(void)setPath:(NSString *)arg1 ;
-(NSFileHandle *)fileHandle;
-(void)setFileHandle:(NSFileHandle *)arg1 ;
@end

