/*
* Generated on Thursday, January 14, 2021 at 2:21:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
*/


@protocol NSURLSessionDataDelegate, OS_dispatch_queue;
#import <MediaToolbox/MediaToolbox-Structs.h>
@class NSURLSessionConfiguration, NSURLSession, NSOperationQueue, NSObject, NSString;

@interface FigNSURLSession : NSObject {

	NSURLSessionConfiguration* _configuration;
	NSURLSession* _session;
	id<NSURLSessionDataDelegate> _dataDelegate;
	NSOperationQueue* _opQueue;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSString* _clientBundleIdentifier;
	OpaqueFigCFWeakReferenceHolderRef _weakAssertion;
	long long _doomTime;
	BOOL _doomCheckScheduled;
	int _assertionCount;

}

@property (nonatomic,readonly) NSURLSession * session;                                  //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) id<NSURLSessionDataDelegate> dataDelegate;               //@synthesize dataDelegate=_dataDelegate - In the implementation block
@property (nonatomic,readonly) NSOperationQueue * opQueue;                              //@synthesize opQueue=_opQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,readonly) NSString * clientBundleIdentifier;                       //@synthesize clientBundleIdentifier=_clientBundleIdentifier - In the implementation block
@property (assign,nonatomic) long long doomTime;                                        //@synthesize doomTime=_doomTime - In the implementation block
@property (assign,nonatomic) BOOL doomCheckScheduled;                                   //@synthesize doomCheckScheduled=_doomCheckScheduled - In the implementation block
@property (assign,nonatomic) int assertionCount;                                        //@synthesize assertionCount=_assertionCount - In the implementation block
-(NSString *)clientBundleIdentifier;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(NSURLSession *)session;
-(int)assertionCount;
-(void)setAssertionCount:(int)arg1 ;
-(void)setDoomTime:(long long)arg1 ;
-(FigOpaqueAssertionRef)acquireAssertion;
-(id<NSURLSessionDataDelegate>)dataDelegate;
-(BOOL)doomCheckScheduled;
-(id)initWithClientBundleIdentifier:(id)arg1 dispatchQueue:(id)arg2 ;
-(void)setDoomCheckScheduled:(BOOL)arg1 ;
-(long long)doomTime;
-(NSOperationQueue *)opQueue;
-(void)debug;
-(void)dealloc;
@end

