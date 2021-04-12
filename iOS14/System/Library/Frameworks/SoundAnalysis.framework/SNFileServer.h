/*
* Generated on Thursday, January 14, 2021 at 2:27:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
*/


@protocol OS_dispatch_queue;
@class CUFileServer, NSObject, RPCompanionLinkClient, NSString;

@interface SNFileServer : NSObject {

	CUFileServer* _server;
	NSObject*<OS_dispatch_queue> _queue;
	RPCompanionLinkClient* _link;
	NSString* _rootDirectory;

}

@property (nonatomic,retain) CUFileServer * server;                           //@synthesize server=_server - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) RPCompanionLinkClient * link;                    //@synthesize link=_link - In the implementation block
@property (nonatomic,retain) NSString * rootDirectory;                        //@synthesize rootDirectory=_rootDirectory - In the implementation block
+(id)createDefaultServer;
-(RPCompanionLinkClient *)link;
-(void)setLink:(RPCompanionLinkClient *)arg1 ;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(void)setServer:(CUFileServer *)arg1 ;
-(CUFileServer *)server;
-(NSString *)rootDirectory;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)initWithRootDirectory:(id)arg1 ;
-(void)setRootDirectory:(NSString *)arg1 ;
@end

