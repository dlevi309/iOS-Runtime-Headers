/*
* Generated on Thursday, January 14, 2021 at 2:20:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Accounts.framework/Accounts
*/

#import <libobjc.A.dylib/ACAccountStoreClientProtocol.h>

@protocol ACRemoteAccountStoreSessionDelegate;
@class NSString;

@interface ACAccountStoreClientSideListener : NSObject <ACAccountStoreClientProtocol> {

	id<ACRemoteAccountStoreSessionDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)accountDidChange:(id)arg1 withChangeType:(int)arg2 ;
-(void)connectionWasInvalidated;
-(id)initWithDelegate:(id)arg1 ;
-(void)accountCredentialsDidChangeForAccountWithIdentifier:(id)arg1 ;
@end

