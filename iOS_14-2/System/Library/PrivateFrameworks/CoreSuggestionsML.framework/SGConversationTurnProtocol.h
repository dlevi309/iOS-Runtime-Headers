/*
* Generated on Thursday, January 14, 2021 at 2:27:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsML.framework/CoreSuggestionsML
*/

@class NSString, NSDate;


@protocol SGConversationTurnProtocol
@property (nonatomic,readonly) NSString * text; 
@property (nonatomic,readonly) NSString * senderID; 
@property (nonatomic,readonly) NSDate * timestamp; 
@required
-(NSString *)senderID;
-(NSDate *)timestamp;
-(NSString *)text;
-(BOOL)isEqualToConversationTurn:(id)arg1;

@end

