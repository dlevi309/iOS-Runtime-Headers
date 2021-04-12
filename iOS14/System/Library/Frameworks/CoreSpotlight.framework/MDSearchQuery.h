/*
* Generated on Thursday, January 14, 2021 at 2:21:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
*/


@protocol MDSearchQueryDelegate, OS_dispatch_queue;
@class NSPredicate, NSObject, CSSearchQuery, NSString, NSDictionary;

@interface MDSearchQuery : NSObject {

	unsigned long long _status;
	NSPredicate* _predicate;
	id<MDSearchQueryDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _queue;
	CSSearchQuery* _query;
	NSString* _clientBundleID;

}

@property (copy) NSPredicate * predicate;                                     //@synthesize predicate=_predicate - In the implementation block
@property (assign) unsigned long long status; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) CSSearchQuery * query;                           //@synthesize query=_query - In the implementation block
@property (retain) NSString * clientBundleID;                                 //@synthesize clientBundleID=_clientBundleID - In the implementation block
@property (copy,readonly) NSDictionary * options; 
@property (__weak) id<MDSearchQueryDelegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
-(NSString *)clientBundleID;
-(id)initWithQueryString:(id)arg1 options:(id)arg2 ;
-(CSSearchQuery *)query;
-(NSPredicate *)predicate;
-(id<MDSearchQueryDelegate>)delegate;
-(void)start;
-(void)setPredicate:(NSPredicate *)arg1 ;
-(id)queryString;
-(NSDictionary *)options;
-(void)setDelegate:(id<MDSearchQueryDelegate>)arg1 ;
-(id)initWithPredicate:(id)arg1 options:(id)arg2 ;
-(void)setClientBundleID:(NSString *)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)_didFinishWithError:(id)arg1 ;
-(void)setStatus:(unsigned long long)arg1 ;
-(void)setQuery:(CSSearchQuery *)arg1 ;
-(void)_didReturnItems:(id)arg1 ;
-(void)cancel;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(unsigned long long)status;
@end

