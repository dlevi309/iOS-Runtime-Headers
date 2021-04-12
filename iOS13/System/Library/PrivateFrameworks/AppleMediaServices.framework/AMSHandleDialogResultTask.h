/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <AppleMediaServices/AMSTask.h>

@protocol AMSBagProtocol;
@class ACAccount, NSError, AMSProcessInfo, NSString, AMSDialogRequest, AMSDialogResult;

@interface AMSHandleDialogResultTask : AMSTask {

	ACAccount* _account;
	id<AMSBagProtocol> _bag;
	NSError* _error;
	AMSProcessInfo* _clientInfo;
	NSString* _proxyBundleId;
	AMSDialogRequest* _request;
	AMSDialogResult* _result;

}

@property (nonatomic,copy) ACAccount * account;                         //@synthesize account=_account - In the implementation block
@property (nonatomic,readonly) id<AMSBagProtocol> bag;                  //@synthesize bag=_bag - In the implementation block
@property (nonatomic,copy,readonly) NSError * error;                    //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) AMSProcessInfo * clientInfo;               //@synthesize clientInfo=_clientInfo - In the implementation block
@property (nonatomic,copy) NSString * proxyBundleId;                    //@synthesize proxyBundleId=_proxyBundleId - In the implementation block
@property (nonatomic,readonly) AMSDialogRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) AMSDialogResult * result;                //@synthesize result=_result - In the implementation block
-(NSError *)error;
-(AMSDialogResult *)result;
-(ACAccount *)account;
-(void)setAccount:(ACAccount *)arg1 ;
-(AMSDialogRequest *)request;
-(id)perform;
-(AMSProcessInfo *)clientInfo;
-(void)setClientInfo:(AMSProcessInfo *)arg1 ;
-(id<AMSBagProtocol>)bag;
-(id)initWithRequest:(id)arg1 result:(id)arg2 error:(id)arg3 bag:(id)arg4 ;
-(NSString *)proxyBundleId;
-(void)setProxyBundleId:(NSString *)arg1 ;
-(id)_handleAskPermissionRequestWithURL:(id)arg1 account:(id)arg2 ;
@end

