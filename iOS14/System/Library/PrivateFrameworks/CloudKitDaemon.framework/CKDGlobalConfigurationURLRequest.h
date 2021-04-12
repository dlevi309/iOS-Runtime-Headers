/*
* Generated on Thursday, January 14, 2021 at 2:26:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CKDURLRequest.h>

@class CKDServerConfiguration;

@interface CKDGlobalConfigurationURLRequest : CKDURLRequest {

	CKDServerConfiguration* _configuration;

}

@property (nonatomic,retain) CKDServerConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
-(long long)partitionType;
-(BOOL)allowsAnonymousAccount;
-(id)additionalHeaderValues;
-(id)url;
-(id)httpMethod;
-(CKDServerConfiguration *)configuration;
-(void)setConfiguration:(CKDServerConfiguration *)arg1 ;
-(void)requestDidParsePlistObject:(id)arg1 ;
-(long long)serverType;
-(BOOL)requiresConfiguration;
-(BOOL)requiresDeviceID;
-(BOOL)hasRequestBody;
@end

