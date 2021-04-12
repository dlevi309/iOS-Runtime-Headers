/*
* Generated on Thursday, January 14, 2021 at 2:23:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)fbq;
-(SPSearchQuery *)query;
-(void)handleMessage:(id)arg1 ;
-(id<SPDaemonQueryDelegate>)delegate;
-(NSString *)web_fbq;
-(void)queryDidComplete;
-(id)copy;
-(id)initWithQuery:(id)arg1 queue:(id)arg2 delegate:(id)arg3 ;
-(BOOL)gotQueryComplete;
-(BOOL)didReissue;
-(void)setDidReissue:(BOOL)arg1 ;
-(void)setQueryFinished:(BOOL)arg1 ;
-(void)handleLocalQueryWithResultSet:(id)arg1 ;
-(BOOL)queryFinished;
-(BOOL)isLocalQuery;
-(void)setIsLocalQuery:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(unsigned)queryID;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

