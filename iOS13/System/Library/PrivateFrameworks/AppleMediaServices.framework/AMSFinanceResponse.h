/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


@class AMSFinanceDialogResponse, AMSFinanceAuthenticateResponse, AMSFinancePaymentSheetResponse, NSDictionary, AMSURLTaskInfo, ACAccount, NSArray, NSError, NSURL;

@interface AMSFinanceResponse : NSObject {

	AMSFinanceDialogResponse* _dialogResponse;
	AMSFinanceAuthenticateResponse* _authenticateResponse;
	AMSFinancePaymentSheetResponse* _paymentSheetResponse;
	long long _dialogKind;
	NSDictionary* _responseDictionary;
	AMSURLTaskInfo* _taskInfo;

}

@property (nonatomic,readonly) long long dialogKind;                                               //@synthesize dialogKind=_dialogKind - In the implementation block
@property (nonatomic,retain) NSDictionary * responseDictionary;                                    //@synthesize responseDictionary=_responseDictionary - In the implementation block
@property (nonatomic,retain) AMSURLTaskInfo * taskInfo;                                            //@synthesize taskInfo=_taskInfo - In the implementation block
@property (nonatomic,readonly) ACAccount * account; 
@property (nonatomic,readonly) NSArray * actions; 
@property (nonatomic,readonly) AMSFinanceAuthenticateResponse * authenticateResponse;              //@synthesize authenticateResponse=_authenticateResponse - In the implementation block
@property (nonatomic,readonly) AMSFinanceDialogResponse * dialogResponse;                          //@synthesize dialogResponse=_dialogResponse - In the implementation block
@property (nonatomic,readonly) AMSFinancePaymentSheetResponse * paymentSheetResponse;              //@synthesize paymentSheetResponse=_paymentSheetResponse - In the implementation block
@property (nonatomic,readonly) NSArray * pingURLs; 
@property (nonatomic,readonly) NSError * serverError; 
@property (nonatomic,readonly) BOOL supportedProtocolVersion; 
@property (nonatomic,readonly) NSURL * versionMismatchURL; 
-(ACAccount *)account;
-(NSArray *)actions;
-(NSDictionary *)responseDictionary;
-(AMSURLTaskInfo *)taskInfo;
-(void)setTaskInfo:(AMSURLTaskInfo *)arg1 ;
-(AMSFinanceDialogResponse *)dialogResponse;
-(AMSFinanceAuthenticateResponse *)authenticateResponse;
-(id)_valueForProtocolKey:(id)arg1 ;
-(long long)dialogKind;
-(id)initWithTaskInfo:(id)arg1 decodedObject:(id)arg2 ;
-(AMSFinancePaymentSheetResponse *)paymentSheetResponse;
-(NSArray *)pingURLs;
-(NSError *)serverError;
-(BOOL)supportedProtocolVersion;
-(NSURL *)versionMismatchURL;
-(void)setResponseDictionary:(NSDictionary *)arg1 ;
@end

