/*
* Generated on Monday, March 1, 2021 at 2:34:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/

#import <CloudDocsDaemon/BRCXPCClient.h>
#import <libobjc.A.dylib/BRTokenProtocol.h>

@class NSString;

@interface BRCXPCTokenClient : BRCXPCClient <BRTokenProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(void)currentAccountCopyTokenWithBundleID:(id)arg1 version:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)getPrimaryiCloudAccountStatus:(/*^block*/id)arg1 ;
-(void)prepareFileProvidersWithReply:(/*^block*/id)arg1 ;
@end

