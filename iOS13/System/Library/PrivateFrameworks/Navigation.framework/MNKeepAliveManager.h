/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/


@class NSString, NSFileManager;

@interface MNKeepAliveManager : NSObject {

	unsigned long long _counter;
	NSString* _launchdKeepAliveFile;
	NSFileManager* _fileManager;

}

@property (assign) unsigned long long counter;                             //@synthesize counter=_counter - In the implementation block
@property (nonatomic,retain) NSString * launchdKeepAliveFile;              //@synthesize launchdKeepAliveFile=_launchdKeepAliveFile - In the implementation block
@property (nonatomic,retain) NSFileManager * fileManager;                  //@synthesize fileManager=_fileManager - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)checkIn;
-(unsigned long long)counter;
-(NSFileManager *)fileManager;
-(void)setFileManager:(NSFileManager *)arg1 ;
-(void)setCounter:(unsigned long long)arg1 ;
-(void)checkOut;
-(NSString *)launchdKeepAliveFile;
-(void)setLaunchdKeepAliveFile:(NSString *)arg1 ;
@end

