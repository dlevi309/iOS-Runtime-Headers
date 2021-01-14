/*
* Generated on Thursday, January 14, 2021 at 2:25:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/

#import <libobjc.A.dylib/EFLoggable.h>

@class EFQuery, EDMessagePersistence, EMMailboxScope, NSCache, NSString;

@interface EDMessageQueryEvaluator : NSObject <EFLoggable> {

	EFQuery* _messageQuery;
	EDMessagePersistence* _messagePersistence;
	EMMailboxScope* _mailboxScope;
	NSCache* _spotlightPredicateCache;

}

@property (nonatomic,readonly) EFQuery * messageQuery;                                 //@synthesize messageQuery=_messageQuery - In the implementation block
@property (nonatomic,readonly) EDMessagePersistence * messagePersistence;              //@synthesize messagePersistence=_messagePersistence - In the implementation block
@property (nonatomic,readonly) EMMailboxScope * mailboxScope;                          //@synthesize mailboxScope=_mailboxScope - In the implementation block
@property (nonatomic,retain) NSCache * spotlightPredicateCache;                        //@synthesize spotlightPredicateCache=_spotlightPredicateCache - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)log;
-(EMMailboxScope *)mailboxScope;
-(void)setSpotlightPredicateCache:(NSCache *)arg1 ;
-(id)transformAndFilterMessages:(id)arg1 includeDeleted:(BOOL)arg2 ;
-(id)filterMessages:(id)arg1 unmatchedMessages:(id*)arg2 ;
-(id)transformMessages:(id)arg1 includeDeleted:(BOOL)arg2 ;
-(EDMessagePersistence *)messagePersistence;
-(id)transformAndFilterMessages:(id)arg1 ;
-(EFQuery *)messageQuery;
-(NSCache *)spotlightPredicateCache;
-(id)initWithQuery:(id)arg1 messagePersistence:(id)arg2 ;
-(id)transformMessages:(id)arg1 ;
@end

