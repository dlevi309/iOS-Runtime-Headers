/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
*/

#import <libobjc.A.dylib/EFLoggable.h>

@class EMRemoteConnection, NSString;

@interface EMSearchableIndex : NSObject <EFLoggable> {

	EMRemoteConnection* _connection;

}

@property (retain) EMRemoteConnection * connection;                 //@synthesize connection=_connection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)log;
+(id)remoteInterface;
-(EMRemoteConnection *)connection;
-(void)setConnection:(EMRemoteConnection *)arg1 ;
-(void)reindexSearchableItemsWithIdentifiers:(id)arg1 acknowledgementHandler:(/*^block*/id)arg2 ;
-(void)reindexAllSearchableItemsWithAcknowledgementHandler:(/*^block*/id)arg1 ;
-(id)initWithRemoteConnection:(id)arg1 ;
@end

