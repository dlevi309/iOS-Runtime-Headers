/*
* Generated on Thursday, January 14, 2021 at 2:21:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class NSArray, INDateComponentsRange;


@protocol INSearchForMessagesIntentExport <NSObject,JSExport>
@property (nonatomic,copy) NSArray * recipients; 
@property (nonatomic,copy) NSArray * senders; 
@property (nonatomic,copy) NSArray * searchTerms; 
@property (assign,nonatomic) unsigned long long attributes; 
@property (nonatomic,copy) INDateComponentsRange * dateTimeRange; 
@property (nonatomic,copy) NSArray * identifiers; 
@property (nonatomic,copy) NSArray * notificationIdentifiers; 
@property (nonatomic,copy) NSArray * speakableGroupNames; 
@property (nonatomic,copy) NSArray * conversationIdentifiers; 
@required
-(NSArray *)recipients;
-(NSArray *)identifiers;
-(id)init;
-(void)setRecipients:(id)arg1;
-(NSArray *)senders;
-(void)setAttributes:(unsigned long long)arg1;
-(void)setSenders:(id)arg1;
-(NSArray *)notificationIdentifiers;
-(void)setNotificationIdentifiers:(id)arg1;
-(NSArray *)speakableGroupNames;
-(void)setSpeakableGroupNames:(id)arg1;
-(NSArray *)conversationIdentifiers;
-(void)setConversationIdentifiers:(id)arg1;
-(NSArray *)searchTerms;
-(void)setSearchTerms:(id)arg1;
-(unsigned long long)attributes;
-(void)setIdentifiers:(id)arg1;
-(INDateComponentsRange *)dateTimeRange;
-(void)setDateTimeRange:(id)arg1;

@end

