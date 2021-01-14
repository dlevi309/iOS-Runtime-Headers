/*
* Generated on Thursday, January 14, 2021 at 2:20:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSError, NSString, NSURL, AMSAuthenticateResult, AMSDialogResult, NSDictionary;

@interface AMSURLAction : NSObject <NSSecureCoding> {

	long long _actionType;
	NSError* _error;
	NSString* _reason;
	NSURL* _redirectURL;
	NSString* _retryIdentifier;
	AMSAuthenticateResult* _authenticateResult;
	AMSDialogResult* _dialogResult;
	NSDictionary* _updatedHeaders;

}

@property (nonatomic,retain) AMSAuthenticateResult * authenticateResult;              //@synthesize authenticateResult=_authenticateResult - In the implementation block
@property (nonatomic,retain) AMSDialogResult * dialogResult;                          //@synthesize dialogResult=_dialogResult - In the implementation block
@property (nonatomic,retain) NSDictionary * updatedHeaders;                           //@synthesize updatedHeaders=_updatedHeaders - In the implementation block
@property (nonatomic,readonly) long long actionType;                                  //@synthesize actionType=_actionType - In the implementation block
@property (nonatomic,readonly) NSError * error;                                       //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) NSString * reason;                                       //@synthesize reason=_reason - In the implementation block
@property (nonatomic,readonly) NSURL * redirectURL;                                   //@synthesize redirectURL=_redirectURL - In the implementation block
@property (nonatomic,retain) NSString * retryIdentifier;                              //@synthesize retryIdentifier=_retryIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)redirectActionWithURL:(id)arg1 ;
+(id)proceedAction;
+(id)retryAction;
+(id)actionWithError:(id)arg1 ;
-(id)initWithType:(long long)arg1 ;
-(long long)actionType;
-(void)setAuthenticateResult:(AMSAuthenticateResult *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)retryIdentifier;
-(void)setRetryIdentifier:(NSString *)arg1 ;
-(NSError *)error;
-(id)description;
-(void)setUpdatedHeaders:(NSDictionary *)arg1 ;
-(NSString *)reason;
-(void)setDialogResult:(AMSDialogResult *)arg1 ;
-(id)initWithType:(long long)arg1 error:(id)arg2 reason:(id)arg3 redirectURL:(id)arg4 ;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)redirectURL;
-(AMSDialogResult *)dialogResult;
-(AMSAuthenticateResult *)authenticateResult;
-(void)setReason:(NSString *)arg1 ;
-(NSDictionary *)updatedHeaders;
@end

