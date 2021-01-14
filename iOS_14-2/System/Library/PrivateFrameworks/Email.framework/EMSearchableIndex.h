/*
* Generated on Thursday, January 14, 2021 at 2:23:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)attachmentPersistentIDFromItemIdentifier:(id)arg1 ;
-(id)initWithRemoteConnection:(id)arg1 ;
-(void)reindexSearchableItemsWithIdentifiers:(id)arg1 acknowledgementHandler:(/*^block*/id)arg2 ;
-(void)reindexAllSearchableItemsWithAcknowledgementHandler:(/*^block*/id)arg1 ;
-(EMRemoteConnection *)connection;
-(void)setConnection:(EMRemoteConnection *)arg1 ;
@end

