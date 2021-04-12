/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
*/

#import <CoreData/NSXPCStoreServer.h>

@interface RCXPCStoreServer : NSXPCStoreServer {

	/*^block*/id _shouldAcceptDatabaseConnection;

}

@property (nonatomic,copy) id shouldAcceptDatabaseConnection;              //@synthesize shouldAcceptDatabaseConnection=_shouldAcceptDatabaseConnection - In the implementation block
-(id)shouldAcceptDatabaseConnection;
-(void)setShouldAcceptDatabaseConnection:(id)arg1 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
@end

