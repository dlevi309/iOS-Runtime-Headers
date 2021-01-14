/*
* Generated on Thursday, January 14, 2021 at 2:27:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
*/

#import <libobjc.A.dylib/BLTPingSubscribing.h>

@class NSXPCConnection, NSString;

@interface BLTSubscriberRemoteClient : NSObject <BLTPingSubscribing> {

	NSXPCConnection* _connection;

}

@property (nonatomic,retain) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)sectionIDs;
-(void)pingWithRecordID:(id)arg1 forSectionID:(id)arg2 ack:(/*^block*/id)arg3 ;
-(id)initWithConnection:(id)arg1 ;
-(id)init;
-(void)pingWithBulletin:(id)arg1 ack:(/*^block*/id)arg2 ;
-(void)pingSubscriberDidLoad;
-(void)pingWithBulletin:(id)arg1 ;
-(NSXPCConnection *)connection;
-(id)sectionIDsForBulletins;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)pingWithRecordID:(id)arg1 forSectionID:(id)arg2 ;
-(id)subscriptionInfos;
-(void)dealloc;
@end

