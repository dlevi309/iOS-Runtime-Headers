/*
* Generated on Monday, March 1, 2021 at 2:35:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
*/

#import <CoreData/NSXPCStoreServer.h>

@interface RCXPCStoreServer : NSXPCStoreServer {

	/*^block*/id _shouldAcceptDatabaseConnection;

}

@property (nonatomic,copy) id shouldAcceptDatabaseConnection;              //@synthesize shouldAcceptDatabaseConnection=_shouldAcceptDatabaseConnection - In the implementation block
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(id)shouldAcceptDatabaseConnection;
-(void)setShouldAcceptDatabaseConnection:(id)arg1 ;
@end

