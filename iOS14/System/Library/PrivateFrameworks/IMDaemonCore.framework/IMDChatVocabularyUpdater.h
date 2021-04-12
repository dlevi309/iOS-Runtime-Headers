/*
* Generated on Thursday, January 14, 2021 at 2:27:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
*/


@class IMDChatRegistry, INVocabulary;

@interface IMDChatVocabularyUpdater : NSObject {

	BOOL _haveDeferredUpdateRequest;
	IMDChatRegistry* _chatRegistry;
	INVocabulary* _vocabulary;

}

@property (nonatomic,retain) IMDChatRegistry * chatRegistry;              //@synthesize chatRegistry=_chatRegistry - In the implementation block
@property (nonatomic,retain) INVocabulary * vocabulary;                   //@synthesize vocabulary=_vocabulary - In the implementation block
@property (assign,nonatomic) BOOL haveDeferredUpdateRequest;              //@synthesize haveDeferredUpdateRequest=_haveDeferredUpdateRequest - In the implementation block
+(id)sharedInstance;
+(void)performInitialUpdateIfNeeded;
-(IMDChatRegistry *)chatRegistry;
-(void)setChatRegistry:(IMDChatRegistry *)arg1 ;
-(void)dealloc;
-(id)initWithChatRegistry:(id)arg1 vocabulary:(id)arg2 ;
-(void)_updateVocabularyExcludingChat:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateVocabularyForAddedChat:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateVocabularyForDeletedChat:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateVocabularyForRenamedChat:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateVocabularyForDeferredUpdateRequestIfNecessaryWithCompletionHandler:(/*^block*/id)arg1 ;
-(INVocabulary *)vocabulary;
-(void)setVocabulary:(INVocabulary *)arg1 ;
-(BOOL)haveDeferredUpdateRequest;
-(void)setHaveDeferredUpdateRequest:(BOOL)arg1 ;
@end

