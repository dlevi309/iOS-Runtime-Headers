/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <libobjc.A.dylib/PKPeerPaymentWebServiceArchiver.h>

@class NPKCompanionAgentConnection, NSString;

@interface NPKSharedPeerPaymentWebServiceArchiver : NSObject <PKPeerPaymentWebServiceArchiver> {

	NPKCompanionAgentConnection* _connection;

}

@property (nonatomic,retain) NPKCompanionAgentConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NPKCompanionAgentConnection *)connection;
-(void)setConnection:(NPKCompanionAgentConnection *)arg1 ;
-(void)archiveContext:(id)arg1 ;
-(id)initWithCompanionAgentConnection:(id)arg1 ;
@end

