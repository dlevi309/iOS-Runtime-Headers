/*
* Generated on Thursday, January 14, 2021 at 2:28:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
*/


@class NSFileHandle, NSString;

@interface UNSFileHandleWrapper : NSObject {

	NSFileHandle* _fileHandle;
	NSString* _path;

}

@property (nonatomic,retain) NSFileHandle * fileHandle;              //@synthesize fileHandle=_fileHandle - In the implementation block
@property (nonatomic,copy) NSString * path;                          //@synthesize path=_path - In the implementation block
-(void)setPath:(NSString *)arg1 ;
-(NSString *)path;
-(NSFileHandle *)fileHandle;
-(void)setFileHandle:(NSFileHandle *)arg1 ;
@end

