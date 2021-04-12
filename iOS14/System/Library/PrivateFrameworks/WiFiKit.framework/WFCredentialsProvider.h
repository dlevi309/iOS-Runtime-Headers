/*
* Generated on Thursday, January 14, 2021 at 2:26:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
*/

@class NSString;


@protocol WFCredentialsProvider <WFNetworkView>
@property (nonatomic,readonly) SecIdentityRef TLSIdentity; 
@property (nonatomic,copy,readonly) NSString * username; 
@property (nonatomic,copy,readonly) NSString * password; 
@optional
-(void)receiveSharedPassword:(id)arg1;

@required
-(NSString *)password;
-(NSString *)username;
-(SecIdentityRef)TLSIdentity;

@end

