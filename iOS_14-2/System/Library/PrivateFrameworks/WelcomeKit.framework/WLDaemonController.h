/*
* Generated on Thursday, January 14, 2021 at 2:28:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

