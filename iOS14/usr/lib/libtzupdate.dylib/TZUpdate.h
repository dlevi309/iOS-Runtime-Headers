/*
* Generated on Thursday, January 14, 2021 at 2:29:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libtzupdate.dylib
*/


@class TZFileSystemInterface, NSXPCConnection;

@interface TZUpdate : NSObject {

	TZFileSystemInterface* _fileSystemInterface;
	NSXPCConnection* _connectionToService;

}

@property (retain) TZFileSystemInterface * fileSystemInterface;              //@synthesize fileSystemInterface=_fileSystemInterface - In the implementation block
@property (retain) NSXPCConnection * connectionToService;                    //@synthesize connectionToService=_connectionToService - In the implementation block
+(id)sharedInstance;
-(id)init;
-(NSXPCConnection *)connectionToService;
-(void)setConnectionToService:(NSXPCConnection *)arg1 ;
-(void)isUpdateWaitingWithCompletion:(/*^block*/id)arg1 ;
-(id)createNewXPCConnection;
-(BOOL)isUpdateWaiting;
-(TZFileSystemInterface *)fileSystemInterface;
-(void)purgeAllAssetsWithCompletion:(/*^block*/id)arg1 ;
-(id)affectedZones;
-(id)currentTZDataVersion;
-(BOOL)alertForAllZones;
-(id)updateTZDataVersion;
-(void)setFileSystemInterface:(TZFileSystemInterface *)arg1 ;
@end

