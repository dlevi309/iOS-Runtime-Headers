/*
* Generated on Monday, March 1, 2021 at 2:33:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(EDMessagePersistence *)messagePersistence;
-(EMMailboxScope *)mailboxScope;
-(id)initWithQuery:(id)arg1 messagePersistence:(id)arg2 ;
-(id)transformMessages:(id)arg1 ;
-(id)filterMessages:(id)arg1 unmatchedMessages:(id*)arg2 ;
-(id)transformAndFilterMessages:(id)arg1 ;
-(id)transformAndFilterMessages:(id)arg1 includeDeleted:(BOOL)arg2 ;
-(id)transformMessages:(id)arg1 includeDeleted:(BOOL)arg2 ;
-(EFQuery *)messageQuery;
-(NSCache *)spotlightPredicateCache;
-(void)setSpotlightPredicateCache:(NSCache *)arg1 ;
@end

