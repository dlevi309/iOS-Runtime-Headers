/*
* Generated on Thursday, January 14, 2021 at 2:27:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
*/

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class VSOptional, NSArray, VSPersistentStorage, VSAccountChannels, NSOperation;

@interface VSAccountSaveOperation : VSAsyncOperation {

	VSOptional* _result;
	NSArray* _unsavedAccounts;
	VSPersistentStorage* _storage;
	VSAccountChannels* _unsavedChannels;
	NSOperation* _currentOperation;

}

@property (nonatomic,copy) NSArray * unsavedAccounts;                          //@synthesize unsavedAccounts=_unsavedAccounts - In the implementation block
@property (nonatomic,retain) VSPersistentStorage * storage;                    //@synthesize storage=_storage - In the implementation block
@property (nonatomic,retain) VSAccountChannels * unsavedChannels;              //@synthesize unsavedChannels=_unsavedChannels - In the implementation block
@property (nonatomic,retain) VSOptional * result;                              //@synthesize result=_result - In the implementation block
@property (nonatomic,retain) NSOperation * currentOperation;                   //@synthesize currentOperation=_currentOperation - In the implementation block
-(void)setResult:(VSOptional *)arg1 ;
-(void)setStorage:(VSPersistentStorage *)arg1 ;
-(void)executionDidBegin;
-(id)init;
-(VSPersistentStorage *)storage;
-(VSOptional *)result;
-(NSOperation *)currentOperation;
-(void)cancel;
-(void)setCurrentOperation:(NSOperation *)arg1 ;
-(id)initWithUnsavedAccounts:(id)arg1 channels:(id)arg2 storage:(id)arg3 ;
-(NSArray *)unsavedAccounts;
-(void)setUnsavedAccounts:(NSArray *)arg1 ;
-(void)_startAccountChannelsSaveOperation;
-(VSAccountChannels *)unsavedChannels;
-(void)_startCredentialSaveOperation;
-(void)setUnsavedChannels:(VSAccountChannels *)arg1 ;
@end

