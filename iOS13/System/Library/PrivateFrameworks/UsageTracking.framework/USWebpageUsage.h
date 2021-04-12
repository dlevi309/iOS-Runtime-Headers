/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UsageTracking.framework/UsageTracking
*/


@protocol _CDAsyncLocalContext, _DKKnowledgeSaving;
@class NSMutableDictionary, NSURL, NSString;

@interface USWebpageUsage : NSObject {

	NSMutableDictionary* _contextUsageRecord;
	NSURL* _URL;
	NSString* _bundleIdentifier;
	id<_CDAsyncLocalContext> _context;
	id<_DKKnowledgeSaving> _eventStorage;

}

@property (copy,readonly) NSString * bundleIdentifier;                 //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (readonly) id<_CDAsyncLocalContext> context;                 //@synthesize context=_context - In the implementation block
@property (readonly) id<_DKKnowledgeSaving> eventStorage;              //@synthesize eventStorage=_eventStorage - In the implementation block
@property (copy,readonly) NSURL * URL;                                 //@synthesize URL=_URL - In the implementation block
-(void)dealloc;
-(id)description;
-(id)initWithURL:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(id<_CDAsyncLocalContext>)context;
-(NSURL *)URL;
-(id)initWithURL:(id)arg1 bundleIdentifier:(id)arg2 ;
-(void)changeState:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id<_DKKnowledgeSaving>)eventStorage;
-(id)initWithURL:(id)arg1 context:(id)arg2 eventStorage:(id)arg3 bundleIdentifier:(id)arg4 ;
@end

