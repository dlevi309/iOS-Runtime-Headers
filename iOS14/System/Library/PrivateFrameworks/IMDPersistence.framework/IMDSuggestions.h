/*
* Generated on Thursday, January 14, 2021 at 2:24:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMDPersistence.framework/IMDPersistence
*/

#import <libobjc.A.dylib/SGMessagesSuggestionsServiceDelegate.h>

@protocol NSObjectSGSuggestionsServiceMessagesProtocol;
@interface IMDSuggestions : NSObject <SGMessagesSuggestionsServiceDelegate> {

	id<NSObject><SGSuggestionsServiceMessagesProtocol> _sgService;

}

@property (retain) id<NSObject><SGSuggestionsServiceMessagesProtocol> sgService;              //@synthesize sgService=_sgService - In the implementation block
-(void)suggestionsFromMessage:(id)arg1 options:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)init;
-(id)suggestionsService:(id)arg1 needsContextForConversationIdentifier:(id)arg2 numberOfMessagesNeeded:(unsigned long long)arg3 ;
-(void)dealloc;
-(id<NSObject><SGSuggestionsServiceMessagesProtocol>)sgService;
-(void)setSgService:(id<NSObject><SGSuggestionsServiceMessagesProtocol>)arg1 ;
@end

