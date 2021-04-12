/*
* Generated on Monday, March 1, 2021 at 2:33:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class NSString;

@interface CKDFetchWebAuthTokenOperation : CKDDatabaseOperation {

	NSString* _webAuthToken;
	NSString* _APIToken;

}

@property (nonatomic,copy) NSString * webAuthToken;              //@synthesize webAuthToken=_webAuthToken - In the implementation block
@property (nonatomic,copy) NSString * APIToken;                  //@synthesize APIToken=_APIToken - In the implementation block
-(void)main;
-(id)activityCreate;
-(NSString *)APIToken;
-(void)setAPIToken:(NSString *)arg1 ;
-(NSString *)webAuthToken;
-(void)setWebAuthToken:(NSString *)arg1 ;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(Class)operationResultClass;
-(void)fillOutOperationResult:(id)arg1 ;
@end

