/*
* Generated on Monday, March 1, 2021 at 2:34:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
*/


@protocol OS_os_log;
@class DEDController, DEDSharingConnection, NSObject;

@interface DEDSharingInbound : NSObject {

	DEDController* _delegate;
	DEDSharingConnection* _connection;
	NSObject*<OS_os_log> _log;

}

@property (__weak) DEDController * delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (__weak) DEDSharingConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (retain) NSObject*<OS_os_log> log;                       //@synthesize log=_log - In the implementation block
-(id)init;
-(DEDController *)delegate;
-(void)setDelegate:(DEDController *)arg1 ;
-(DEDSharingConnection *)connection;
-(void)setConnection:(DEDSharingConnection *)arg1 ;
-(NSObject*<OS_os_log>)log;
-(void)setLog:(NSObject*<OS_os_log>)arg1 ;
-(id)initWithController:(id)arg1 sharingConnection:(id)arg2 ;
-(void)handleObject:(id)arg1 forSFSession:(id)arg2 ;
-(void)handleObject:(id)arg1 forSFSession:(id)arg2 forBugSession:(id)arg3 callingDevice:(id)arg4 ;
-(void)handleRequest:(id)arg1 forSFSession:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

