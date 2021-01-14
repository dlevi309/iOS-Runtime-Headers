/*
* Generated on Thursday, January 14, 2021 at 2:28:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)archiveContext:(id)arg1 ;
-(void)setConnection:(NPKCompanionAgentConnection *)arg1 ;
-(id)initWithCompanionAgentConnection:(id)arg1 ;
@end

