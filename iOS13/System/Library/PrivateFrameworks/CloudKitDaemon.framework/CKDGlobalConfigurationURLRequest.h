/*
* Generated on Monday, March 1, 2021 at 2:33:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CKDURLRequest.h>

@class CKDServerConfiguration;

@interface CKDGlobalConfigurationURLRequest : CKDURLRequest {

	CKDServerConfiguration* _configuration;

}

@property (nonatomic,retain) CKDServerConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
-(id)url;
-(void)setConfiguration:(CKDServerConfiguration *)arg1 ;
-(CKDServerConfiguration *)configuration;
-(long long)partitionType;
-(id)httpMethod;
-(id)additionalHeaderValues;
-(void)requestDidParsePlistObject:(id)arg1 ;
-(long long)serverType;
-(BOOL)allowsAnonymousAccount;
-(BOOL)requiresConfiguration;
-(BOOL)requiresDeviceID;
-(BOOL)hasRequestBody;
@end

