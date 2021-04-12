/*
* Generated on Monday, March 1, 2021 at 2:33:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

