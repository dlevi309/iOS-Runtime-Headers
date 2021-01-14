/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <AppleMediaServices/AMSTask.h>

@protocol AMSBagProtocol;
@class ACAccount, AMSProcessInfo, NSString, AMSDialogResult, NSError, AMSDialogRequest;

@interface AMSHandleDialogResultTask : AMSTask {

	ACAccount* _account;
	id<AMSBagProtocol> _bag;
	AMSProcessInfo* _clientInfo;
	NSString* _proxyBundleId;
	AMSDialogResult* _result;
	NSError* _error;

}

@property (nonatomic,copy) ACAccount * account;                         //@synthesize account=_account - In the implementation block
@property (nonatomic,readonly) id<AMSBagProtocol> bag;                  //@synthesize bag=_bag - In the implementation block
@property (nonatomic,retain) AMSProcessInfo * clientInfo;               //@synthesize clientInfo=_clientInfo - In the implementation block
@property (nonatomic,copy) NSString * proxyBundleId;                    //@synthesize proxyBundleId=_proxyBundleId - In the implementation block
@property (nonatomic,readonly) AMSDialogRequest * request; 
@property (nonatomic,readonly) AMSDialogResult * result;                //@synthesize result=_result - In the implementation block
@property (nonatomic,copy,readonly) NSError * error;                    //@synthesize error=_error - In the implementation block
-(ACAccount *)account;
-(void)setAccount:(ACAccount *)arg1 ;
-(void)setProxyBundleId:(NSString *)arg1 ;
-(AMSProcessInfo *)clientInfo;
-(NSString *)proxyBundleId;
-(id)initWithRequest:(id)arg1 result:(id)arg2 error:(id)arg3 bag:(id)arg4 ;
-(id)_handleAskPermissionRequestWithURL:(id)arg1 account:(id)arg2 ;
-(void)setClientInfo:(AMSProcessInfo *)arg1 ;
-(id)perform;
-(id<AMSBagProtocol>)bag;
-(AMSDialogRequest *)request;
-(NSError *)error;
-(id)initWithResult:(id)arg1 bag:(id)arg2 ;
-(AMSDialogResult *)result;
@end

