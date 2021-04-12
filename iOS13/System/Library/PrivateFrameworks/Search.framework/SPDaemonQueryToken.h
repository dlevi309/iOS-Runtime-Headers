/*
* Generated on Monday, March 1, 2021 at 2:32:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
*/

#import <Search/Search-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol SPDaemonQueryDelegate, OS_dispatch_queue;
@class SPSearchQuery, NSObject, NSString;

@interface SPDaemonQueryToken : NSObject <NSCopying> {

	unsigned _queryID;
	SPSearchQuery* _query;
	id<SPDaemonQueryDelegate> _delegate;
	BOOL _queryFinished;
	BOOL _gotQueryComplete;
	BOOL _didReissue;
	BOOL _isLocalQuery;
	NSObject*<OS_dispatch_queue> _queue;
	NSString* _fbq;
	NSString* _web_fbq;

}

@property (nonatomic,__weak,readonly) id<SPDaemonQueryDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned queryID;                                       //@synthesize queryID=_queryID - In the implementation block
@property (nonatomic,readonly) SPSearchQuery * query;                                  //@synthesize query=_query - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                     //@synthesize queue=_queue - In the implementation block
@property (assign) BOOL queryFinished;                                                 //@synthesize queryFinished=_queryFinished - In the implementation block
@property (readonly) NSString * fbq;                                                   //@synthesize fbq=_fbq - In the implementation block
@property (readonly) NSString * web_fbq;                                               //@synthesize web_fbq=_web_fbq - In the implementation block
@property (nonatomic,readonly) BOOL gotQueryComplete;                                  //@synthesize gotQueryComplete=_gotQueryComplete - In the implementation block
@property (assign,nonatomic) BOOL didReissue;                                          //@synthesize didReissue=_didReissue - In the implementation block
@property (assign,nonatomic) BOOL isLocalQuery;                                        //@synthesize isLocalQuery=_isLocalQuery - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)copy;
-(NSObject*<OS_dispatch_queue>)queue;
-(id<SPDaemonQueryDelegate>)delegate;
-(SPSearchQuery *)query;
-(void)handleMessage:(id)arg1 ;
-(unsigned)queryID;
-(NSString *)fbq;
-(void)queryDidComplete;
-(id)initWithQuery:(id)arg1 queue:(id)arg2 delegate:(id)arg3 ;
-(BOOL)gotQueryComplete;
-(BOOL)didReissue;
-(void)setDidReissue:(BOOL)arg1 ;
-(void)setQueryFinished:(BOOL)arg1 ;
-(void)handleLocalQueryWithResultSet:(id)arg1 ;
-(BOOL)queryFinished;
-(NSString *)web_fbq;
-(BOOL)isLocalQuery;
-(void)setIsLocalQuery:(BOOL)arg1 ;
@end

