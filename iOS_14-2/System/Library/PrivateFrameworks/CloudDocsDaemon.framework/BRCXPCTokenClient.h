/*
* Generated on Thursday, January 14, 2021 at 2:26:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)getPrimaryiCloudAccountStatus:(/*^block*/id)arg1 ;
-(void)prepareFileProvidersWithReply:(/*^block*/id)arg1 ;
-(void)currentAccountCopyTokenWithBundleID:(id)arg1 version:(id)arg2 reply:(/*^block*/id)arg3 ;
@end

