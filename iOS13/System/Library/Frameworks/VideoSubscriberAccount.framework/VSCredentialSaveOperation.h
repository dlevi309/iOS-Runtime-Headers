/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(VSOptional *)result;
-(void)setResult:(VSOptional *)arg1 ;
-(void)setAccountStore:(VSAccountStore *)arg1 ;
-(VSAccountStore *)accountStore;
-(void)executionDidBegin;
-(NSArray *)unsavedAccounts;
-(void)_didSaveAccounts:(id)arg1 withResult:(BOOL)arg2 error:(id)arg3 ;
-(id)initWithUnsavedAccounts:(id)arg1 accountStore:(id)arg2 ;
-(void)setUnsavedAccounts:(NSArray *)arg1 ;
@end

