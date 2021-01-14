/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
*/

#import <CoreSuggestions/SGSuggestionsService.h>
#import <libobjc.A.dylib/SGSuggestionsServiceMessagesProtocol.h>

@protocol SGMessagesSuggestionsServiceDelegate;
@class SGMessagesDaemonConnection, NSMutableDictionary;

@interface SGMessagesSuggestionsService : SGSuggestionsService <SGSuggestionsServiceMessagesProtocol> {

	id<SGMessagesSuggestionsServiceDelegate> _delegate;
	SGMessagesDaemonConnection* _messagesDaemonConnection;
	NSMutableDictionary* _previousMessages;

}

@property (retain) SGMessagesDaemonConnection * messagesDaemonConnection;              //@synthesize messagesDaemonConnection=_messagesDaemonConnection - In the implementation block
@property (retain) NSMutableDictionary * previousMessages;                             //@synthesize previousMessages=_previousMessages - In the implementation block
@property (__weak) id<SGMessagesSuggestionsServiceDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
-(void)harvestedSuggestionsFromMessage:(id)arg1 bundleIdentifier:(id)arg2 options:(unsigned long long)arg3 withCompletion:(/*^block*/id)arg4 ;
-(void)setManagerForTesting:(id)arg1 ;
-(void)suggestionsFromMessage:(id)arg1 options:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setMessagesDaemonConnection:(SGMessagesDaemonConnection *)arg1 ;
-(void)harvestedSuggestionsFromMessage:(id)arg1 bundleIdentifier:(id)arg2 options:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)sendContextForMessage:(id)arg1 ;
-(id)init;
-(id<SGMessagesSuggestionsServiceDelegate>)delegate;
-(void)setDelegate:(id<SGMessagesSuggestionsServiceDelegate>)arg1 ;
-(NSMutableDictionary *)previousMessages;
-(id)_remoteSuggestionManager;
-(SGMessagesDaemonConnection *)messagesDaemonConnection;
-(void)setupContextIfNeededForConversation:(id)arg1 ;
-(void)setPreviousMessages:(NSMutableDictionary *)arg1 ;
-(void)harvestedSuggestionsFromMessages:(id)arg1 options:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)isMessageEligibleForSuggestions:(id)arg1 ;
@end

