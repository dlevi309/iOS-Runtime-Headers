/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WelcomeKit.framework/WelcomeKit
*/


@class WLDaemonConnection;

@interface WLDaemonController : NSObject {

	WLDaemonConnection* _connection;

}

@property (nonatomic,retain) WLDaemonConnection * connection;              //@synthesize connection=_connection - In the implementation block
+(id)sharedInstance;
-(id)init;
-(WLDaemonConnection *)connection;
-(void)setConnection:(WLDaemonConnection *)arg1 ;
-(void)importLocalContent;
-(void)setStashDataLocally:(BOOL)arg1 ;
-(void)getLocalImportOptionsWithCompletion:(/*^block*/id)arg1 ;
@end

