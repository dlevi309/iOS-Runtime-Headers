/*
* Generated on Monday, March 1, 2021 at 2:33:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol PRSSearchQueryHandler, OS_dispatch_queue;
@class NSDictionary, NSArray, NSString, PRSSearchFeedback, NSObject, PRSSearchSession;

@interface PRSQueryTask : NSObject <NSSecureCoding> {

	BOOL _started;
	BOOL _canceled;
	BOOL _webSearch;
	long long _queryId;
	NSDictionary* _category_stats;
	NSDictionary* _server_features;
	NSArray* _parsecCategoryOrder;
	id _representedObject;
	NSString* _keyboardLanguage;
	double _scaleFactor;
	NSString* _queryString;
	unsigned long long _queryIdent;
	PRSSearchFeedback* _feedback;
	id<PRSSearchQueryHandler> _handler;
	NSObject*<OS_dispatch_queue> _queue;
	PRSSearchSession* _session;
	NSString* _fbq;

}

@property (assign,nonatomic) BOOL started;                                    //@synthesize started=_started - In the implementation block
@property (assign,nonatomic) BOOL canceled;                                   //@synthesize canceled=_canceled - In the implementation block
@property (retain) PRSSearchFeedback * feedback;                              //@synthesize feedback=_feedback - In the implementation block
@property (nonatomic,retain) id<PRSSearchQueryHandler> handler;               //@synthesize handler=_handler - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic,__weak) PRSSearchSession * session;               //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) NSString * fbq;                                  //@synthesize fbq=_fbq - In the implementation block
@property (assign) BOOL webSearch;                                            //@synthesize webSearch=_webSearch - In the implementation block
@property (assign) long long queryId;                                         //@synthesize queryId=_queryId - In the implementation block
@property (nonatomic,retain) NSDictionary * category_stats;                   //@synthesize category_stats=_category_stats - In the implementation block
@property (nonatomic,retain) NSDictionary * server_features;                  //@synthesize server_features=_server_features - In the implementation block
@property (nonatomic,retain) NSArray * parsecCategoryOrder;                   //@synthesize parsecCategoryOrder=_parsecCategoryOrder - In the implementation block
@property (assign,nonatomic,__weak) id representedObject;                     //@synthesize representedObject=_representedObject - In the implementation block
@property (nonatomic,retain) NSString * keyboardLanguage;                     //@synthesize keyboardLanguage=_keyboardLanguage - In the implementation block
@property (assign) double scaleFactor;                                        //@synthesize scaleFactor=_scaleFactor - In the implementation block
@property (nonatomic,retain) NSString * queryString;                          //@synthesize queryString=_queryString - In the implementation block
@property (assign) unsigned long long queryIdent;                             //@synthesize queryIdent=_queryIdent - In the implementation block
+(void)initialize;
+(BOOL)supportsSecureCoding;
+(void)suspendDecoding;
+(void)resumeDecoding;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id<PRSSearchQueryHandler>)handler;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)cancel;
-(void)resume;
-(void)setHandler:(id<PRSSearchQueryHandler>)arg1 ;
-(BOOL)canceled;
-(void)setCanceled:(BOOL)arg1 ;
-(double)scaleFactor;
-(void)setScaleFactor:(double)arg1 ;
-(PRSSearchSession *)session;
-(void)setSession:(PRSSearchSession *)arg1 ;
-(BOOL)started;
-(id)representedObject;
-(void)setRepresentedObject:(id)arg1 ;
-(PRSSearchFeedback *)feedback;
-(void)setFeedback:(PRSSearchFeedback *)arg1 ;
-(void)setStarted:(BOOL)arg1 ;
-(NSString *)queryString;
-(void)setQueryString:(NSString *)arg1 ;
-(void)invalidateHandler;
-(void)setQueryId:(long long)arg1 ;
-(long long)queryId;
-(void)setKeyboardLanguage:(NSString *)arg1 ;
-(NSString *)keyboardLanguage;
-(BOOL)webSearch;
-(void)setWebSearch:(BOOL)arg1 ;
-(void)setFbq:(NSString *)arg1 ;
-(NSString *)fbq;
-(unsigned long long)queryIdent;
-(void)setQueryIdent:(unsigned long long)arg1 ;
-(id)initWithSession:(id)arg1 handler:(id)arg2 queue:(id)arg3 feedback:(id)arg4 ;
-(id)feedbackQueryIdentifier;
-(NSDictionary *)category_stats;
-(void)setCategory_stats:(NSDictionary *)arg1 ;
-(NSDictionary *)server_features;
-(void)setServer_features:(NSDictionary *)arg1 ;
-(NSArray *)parsecCategoryOrder;
-(void)setParsecCategoryOrder:(NSArray *)arg1 ;
@end

