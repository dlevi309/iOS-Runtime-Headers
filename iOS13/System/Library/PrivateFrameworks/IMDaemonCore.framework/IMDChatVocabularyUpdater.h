/*
* Generated on Monday, March 1, 2021 at 2:33:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(IMDChatRegistry *)chatRegistry;
-(id)initWithChatRegistry:(id)arg1 vocabulary:(id)arg2 ;
-(void)_updateVocabularyExcludingChat:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateVocabularyForAddedChat:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateVocabularyForDeletedChat:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateVocabularyForRenamedChat:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateVocabularyForDeferredUpdateRequestIfNecessaryWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setChatRegistry:(IMDChatRegistry *)arg1 ;
-(INVocabulary *)vocabulary;
-(void)setVocabulary:(INVocabulary *)arg1 ;
-(BOOL)haveDeferredUpdateRequest;
-(void)setHaveDeferredUpdateRequest:(BOOL)arg1 ;
@end

