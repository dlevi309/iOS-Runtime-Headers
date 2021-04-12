/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBSystemServiceServerStateDumpDelegate.h>

@class FBServiceClientAuthenticator, NSString;

@interface SBStateDumpService : NSObject <SBSystemServiceServerStateDumpDelegate> {

	FBServiceClientAuthenticator* _clientAuthenticator;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(BOOL)_authenticateClient:(id)arg1 ;
-(void)systemServiceServer:(id)arg1 client:(id)arg2 requestStateDump:(unsigned long long)arg3 withCompletion:(/*^block*/id)arg4 ;
-(void)systemServiceServer:(id)arg1 client:(id)arg2 enableRemoteStateDumpWithTimeout:(long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)systemServiceServer:(id)arg1 client:(id)arg2 disableRemoteStateDumpWithCompletion:(/*^block*/id)arg3 ;
@end

