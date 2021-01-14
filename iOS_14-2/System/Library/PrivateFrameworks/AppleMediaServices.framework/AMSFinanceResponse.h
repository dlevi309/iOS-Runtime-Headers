/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


@class AMSFinanceAuthenticateResponse, AMSFinanceDialogResponse, AMSFinancePaymentSheetResponse, NSDictionary, AMSURLTaskInfo, ACAccount, NSArray, NSError, NSURL;

@interface AMSFinanceResponse : NSObject {

	AMSFinanceAuthenticateResponse* _cachedAuthenticateResponse;
	AMSFinanceDialogResponse* _cachedDialogResponse;
	AMSFinancePaymentSheetResponse* _cachedPaymentSheetResponse;
	long long _dialogKind;
	NSDictionary* _responseDictionary;
	AMSURLTaskInfo* _taskInfo;

}

@property (nonatomic,retain) AMSFinanceAuthenticateResponse * cachedAuthenticateResponse;              //@synthesize cachedAuthenticateResponse=_cachedAuthenticateResponse - In the implementation block
@property (nonatomic,retain) AMSFinanceDialogResponse * cachedDialogResponse;                          //@synthesize cachedDialogResponse=_cachedDialogResponse - In the implementation block
@property (nonatomic,retain) AMSFinancePaymentSheetResponse * cachedPaymentSheetResponse;              //@synthesize cachedPaymentSheetResponse=_cachedPaymentSheetResponse - In the implementation block
@property (nonatomic,readonly) long long dialogKind;                                                   //@synthesize dialogKind=_dialogKind - In the implementation block
@property (nonatomic,retain) NSDictionary * responseDictionary;                                        //@synthesize responseDictionary=_responseDictionary - In the implementation block
@property (nonatomic,retain) AMSURLTaskInfo * taskInfo;                                                //@synthesize taskInfo=_taskInfo - In the implementation block
@property (nonatomic,readonly) ACAccount * account; 
@property (nonatomic,readonly) NSArray * actions; 
@property (nonatomic,readonly) NSArray * pingURLs; 
@property (nonatomic,readonly) NSError * serverError; 
@property (nonatomic,readonly) BOOL supportedProtocolVersion; 
@property (nonatomic,readonly) NSURL * versionMismatchURL; 
+(id)valueForProtocolKey:(id)arg1 inResponse:(id)arg2 ;
-(ACAccount *)account;
-(id)_performerForDialog;
-(BOOL)supportedProtocolVersion;
-(NSArray *)actions;
-(id)_performerForCreditDisplay;
-(NSError *)serverError;
-(NSDictionary *)responseDictionary;
-(AMSFinanceDialogResponse *)cachedDialogResponse;
-(id)_performerForPaymentSheet;
-(NSURL *)versionMismatchURL;
-(void)setResponseDictionary:(NSDictionary *)arg1 ;
-(NSArray *)pingURLs;
-(AMSFinanceAuthenticateResponse *)cachedAuthenticateResponse;
-(void)setTaskInfo:(AMSURLTaskInfo *)arg1 ;
-(id)_valueForProtocolKey:(id)arg1 ;
-(id)_performerForAuthenticate;
-(AMSFinancePaymentSheetResponse *)cachedPaymentSheetResponse;
-(void)setCachedDialogResponse:(AMSFinanceDialogResponse *)arg1 ;
-(void)setCachedAuthenticateResponse:(AMSFinanceAuthenticateResponse *)arg1 ;
-(AMSURLTaskInfo *)taskInfo;
-(id)initWithTaskInfo:(id)arg1 decodedObject:(id)arg2 ;
-(void)setCachedPaymentSheetResponse:(AMSFinancePaymentSheetResponse *)arg1 ;
-(id)_performerForActionDictionary;
-(long long)dialogKind;
@end

