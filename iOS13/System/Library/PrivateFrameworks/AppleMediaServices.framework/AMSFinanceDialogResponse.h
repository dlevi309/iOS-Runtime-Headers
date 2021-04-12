/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <libobjc.A.dylib/AMSFinancePerformable.h>

@protocol AMSBagProtocol;
@class NSDictionary, AMSDialogRequest, ACAccount, AMSProcessInfo, NSString;

@interface AMSFinanceDialogResponse : NSObject <AMSFinancePerformable> {

	BOOL _containsCommerceUIURL;
	NSDictionary* _dialogDictionary;
	AMSDialogRequest* _dialogRequest;
	ACAccount* _account;
	id<AMSBagProtocol> _bag;
	AMSProcessInfo* _clientInfo;
	NSString* _proxyBundleId;

}

@property (nonatomic,copy) ACAccount * account;                                   //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) id<AMSBagProtocol> bag;                              //@synthesize bag=_bag - In the implementation block
@property (nonatomic,retain) AMSProcessInfo * clientInfo;                         //@synthesize clientInfo=_clientInfo - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * dialogDictionary;              //@synthesize dialogDictionary=_dialogDictionary - In the implementation block
@property (nonatomic,readonly) AMSDialogRequest * dialogRequest;                  //@synthesize dialogRequest=_dialogRequest - In the implementation block
@property (nonatomic,readonly) BOOL containsCommerceUIURL;                        //@synthesize containsCommerceUIURL=_containsCommerceUIURL - In the implementation block
@property (nonatomic,copy) NSString * proxyBundleId;                              //@synthesize proxyBundleId=_proxyBundleId - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_createRequestFromDialogDictionary:(id)arg1 kind:(long long)arg2 account:(id)arg3 bag:(id)arg4 ;
+(long long)_actionTypeFromButtonDictionary:(id)arg1 ;
+(BOOL)_isCommerceUIURL:(id)arg1 actionType:(long long)arg2 URLType:(long long)arg3 bag:(id)arg4 ;
+(id)_URLForCommerceUIFromURL:(id)arg1 account:(id)arg2 ;
+(id)_createActionFromButtonDictionary:(id)arg1 kind:(long long)arg2 title:(id)arg3 account:(id)arg4 bag:(id)arg5 ;
+(id)_createRequestButtonsFromDialogDictionary:(id)arg1 kind:(long long)arg2 account:(id)arg3 bag:(id)arg4 ;
+(long long)dialogKindFromPayload:(id)arg1 ;
-(ACAccount *)account;
-(void)setAccount:(ACAccount *)arg1 ;
-(AMSProcessInfo *)clientInfo;
-(void)setClientInfo:(AMSProcessInfo *)arg1 ;
-(NSDictionary *)dialogDictionary;
-(id<AMSBagProtocol>)bag;
-(void)setBag:(id<AMSBagProtocol>)arg1 ;
-(id)performWithTaskInfo:(id)arg1 ;
-(id)initWithDialogDictionary:(id)arg1 kind:(long long)arg2 account:(id)arg3 clientInfo:(id)arg4 bag:(id)arg5 ;
-(AMSDialogRequest *)dialogRequest;
-(id)initWithDialogRequest:(id)arg1 account:(id)arg2 clientInfo:(id)arg3 bag:(id)arg4 ;
-(id)_sendDialogOverIDSIfNeeded:(id)arg1 taskInfo:(id)arg2 didSend:(BOOL*)arg3 ;
-(NSString *)proxyBundleId;
-(void)setProxyBundleId:(NSString *)arg1 ;
-(BOOL)containsCommerceUIURL;
@end

