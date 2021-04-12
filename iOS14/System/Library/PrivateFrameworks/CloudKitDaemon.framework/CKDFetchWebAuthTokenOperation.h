/*
* Generated on Thursday, January 14, 2021 at 2:26:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class NSString;

@interface CKDFetchWebAuthTokenOperation : CKDDatabaseOperation {

	NSString* _webAuthToken;
	NSString* _APIToken;

}

@property (nonatomic,copy) NSString * webAuthToken;                                                               //@synthesize webAuthToken=_webAuthToken - In the implementation block
@property (nonatomic,copy) NSString * APIToken;                                                                   //@synthesize APIToken=_APIToken - In the implementation block
@property (nonatomic,retain) id<CKFetchWebAuthTokenOperationCallbacks> clientOperationCallbackProxy; 
-(int)operationType;
-(id)activityCreate;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(NSString *)APIToken;
-(void)setAPIToken:(NSString *)arg1 ;
-(NSString *)webAuthToken;
-(void)setWebAuthToken:(NSString *)arg1 ;
-(void)main;
@end

