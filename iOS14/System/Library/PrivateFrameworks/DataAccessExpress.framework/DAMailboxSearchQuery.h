/*
* Generated on Thursday, January 14, 2021 at 2:23:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
*/

#import <DataAccessExpress/DASearchQuery.h>

@class NSString, NSDate;

@interface DAMailboxSearchQuery : DASearchQuery {

	BOOL _allOrNone;
	BOOL _deepTraversal;
	BOOL _rebuildResults;
	int _bodyType;
	int _MIMESupport;
	NSString* _collectionID;
	long long _truncationSize;
	NSDate* _priorToDate;

}

@property (nonatomic,retain) NSString * collectionID;               //@synthesize collectionID=_collectionID - In the implementation block
@property (assign,nonatomic) int bodyType;                          //@synthesize bodyType=_bodyType - In the implementation block
@property (assign,nonatomic) long long truncationSize;              //@synthesize truncationSize=_truncationSize - In the implementation block
@property (assign,nonatomic) BOOL allOrNone;                        //@synthesize allOrNone=_allOrNone - In the implementation block
@property (nonatomic,retain) NSDate * priorToDate;                  //@synthesize priorToDate=_priorToDate - In the implementation block
@property (assign,nonatomic) int MIMESupport;                       //@synthesize MIMESupport=_MIMESupport - In the implementation block
@property (assign,nonatomic) BOOL deepTraversal;                    //@synthesize deepTraversal=_deepTraversal - In the implementation block
@property (assign,nonatomic) BOOL rebuildResults;                   //@synthesize rebuildResults=_rebuildResults - In the implementation block
+(id)mailboxSearchQueryWithSearchString:(id)arg1 consumer:(id)arg2 ;
+(id)mailboxSearchQueryWithSearchString:(id)arg1 predicate:(id)arg2 consumer:(id)arg3 ;
-(id)dictionaryRepresentation;
-(id)initWithSearchString:(id)arg1 consumer:(id)arg2 ;
-(id)initWithSearchString:(id)arg1 predicate:(id)arg2 consumer:(id)arg3 ;
-(id)initWithDictionaryRepresentation:(id)arg1 consumer:(id)arg2 ;
-(NSString *)collectionID;
-(void)setAllOrNone:(BOOL)arg1 ;
-(void)setRebuildResults:(BOOL)arg1 ;
-(long long)truncationSize;
-(BOOL)allOrNone;
-(int)MIMESupport;
-(BOOL)deepTraversal;
-(BOOL)rebuildResults;
-(NSDate *)priorToDate;
-(void)setBodyType:(int)arg1 ;
-(int)bodyType;
-(void)setCollectionID:(NSString *)arg1 ;
-(void)setMIMESupport:(int)arg1 ;
-(void)setTruncationSize:(long long)arg1 ;
-(void)setPriorToDate:(NSDate *)arg1 ;
-(void)setDeepTraversal:(BOOL)arg1 ;
@end

