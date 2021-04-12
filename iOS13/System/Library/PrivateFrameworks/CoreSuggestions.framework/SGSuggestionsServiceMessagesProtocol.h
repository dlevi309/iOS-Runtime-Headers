/*
* Generated on Monday, March 1, 2021 at 2:32:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
*/


@protocol SGSuggestionsServiceMessagesProtocol
@property (__weak) id<SGMessagesSuggestionsServiceDelegate> delegate; 
@required
-(id<SGMessagesSuggestionsServiceDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)harvestedSuggestionsFromMessages:(id)arg1 options:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3;
-(void)suggestionsFromMessage:(id)arg1 options:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3;
-(void)harvestedSuggestionsFromMessage:(id)arg1 bundleIdentifier:(id)arg2 options:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4;
-(void)harvestedSuggestionsFromMessage:(id)arg1 options:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3;

@end

