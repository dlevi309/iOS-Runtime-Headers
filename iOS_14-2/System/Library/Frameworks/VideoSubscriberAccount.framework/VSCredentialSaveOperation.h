/*
* Generated on Thursday, January 14, 2021 at 2:27:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
*/

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class VSOptional, NSArray, VSAccountStore;

@interface VSCredentialSaveOperation : VSAsyncOperation {

	VSOptional* _result;
	NSArray* _unsavedAccounts;
	VSAccountStore* _accountStore;

}

@property (nonatomic,copy) NSArray * unsavedAccounts;                    //@synthesize unsavedAccounts=_unsavedAccounts - In the implementation block
@property (nonatomic,retain) VSAccountStore * accountStore;              //@synthesize accountStore=_accountStore - In the implementation block
@property (nonatomic,retain) VSOptional * result;                        //@synthesize result=_result - In the implementation block
-(void)setResult:(VSOptional *)arg1 ;
-(void)executionDidBegin;
-(id)init;
-(VSAccountStore *)accountStore;
-(void)setAccountStore:(VSAccountStore *)arg1 ;
-(VSOptional *)result;
-(NSArray *)unsavedAccounts;
-(void)_didSaveAccounts:(id)arg1 withResult:(BOOL)arg2 error:(id)arg3 ;
-(id)initWithUnsavedAccounts:(id)arg1 accountStore:(id)arg2 ;
-(void)setUnsavedAccounts:(NSArray *)arg1 ;
@end

