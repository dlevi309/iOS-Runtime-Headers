/*
* Generated on Thursday, January 14, 2021 at 2:28:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PrintKit.framework/PrintKit
*/


@class NSXPCConnection;

@interface _PK_OneShotXPC : NSObject {

	NSXPCConnection* _pkBrowseConnection;

}

@property (nonatomic,retain) NSXPCConnection * pkBrowseConnection;              //@synthesize pkBrowseConnection=_pkBrowseConnection - In the implementation block
+(BOOL)withTimeout:(int)arg1 doSyncronousOneShot:(/*^block*/id)arg2 ;
+(void)doOneShot:(/*^block*/id)arg1 ;
-(id)init;
-(void)dealloc;
-(NSXPCConnection *)pkBrowseConnection;
-(void)setPkBrowseConnection:(NSXPCConnection *)arg1 ;
@end

