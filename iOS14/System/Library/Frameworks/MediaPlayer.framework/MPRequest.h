/*
* Generated on Thursday, January 14, 2021 at 2:21:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/MPRequestCancellationToken.h>
#import <libobjc.A.dylib/_MPStateDumpPropertyListTransformable.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_dispatch_queue;
@class NSString, NSOperationQueue, NSError, NSObject, NSArray;

@interface MPRequest : NSObject <MPRequestCancellationToken, _MPStateDumpPropertyListTransformable, NSCopying> {

	NSString* _label;
	long long _qualityOfService;
	double _timeoutInterval;
	NSOperationQueue* _calloutQueue;
	NSError* _cancelationError;
	NSObject*<OS_dispatch_queue> _cleanupQueue;
	NSOperationQueue* _queue;
	NSArray* _middlewareClasses;

}

@property (nonatomic,readonly) NSOperationQueue * calloutQueue;                        //@synthesize calloutQueue=_calloutQueue - In the implementation block
@property (nonatomic,readonly) NSError * cancelationError;                             //@synthesize cancelationError=_cancelationError - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> cleanupQueue;              //@synthesize cleanupQueue=_cleanupQueue - In the implementation block
@property (nonatomic,readonly) NSOperationQueue * queue;                               //@synthesize queue=_queue - In the implementation block
@property (nonatomic,copy) NSArray * middlewareClasses;                                //@synthesize middlewareClasses=_middlewareClasses - In the implementation block
@property (nonatomic,copy) NSString * label;                                           //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) long long qualityOfService;                               //@synthesize qualityOfService=_qualityOfService - In the implementation block
@property (assign,nonatomic) double timeoutInterval;                                   //@synthesize timeoutInterval=_timeoutInterval - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)responseClass;
+(double)expectedMaximumResponseTimeInterval;
-(void)setQualityOfService:(long long)arg1 ;
-(id)init;
-(NSObject*<OS_dispatch_queue>)cleanupQueue;
-(void)_performWithCompletion:(/*^block*/id)arg1 ;
-(void)prepareForResponseWithCompletion:(/*^block*/id)arg1 ;
-(NSOperationQueue *)calloutQueue;
-(double)timeoutInterval;
-(NSString *)description;
-(NSError *)cancelationError;
-(void)setTimeoutInterval:(double)arg1 ;
-(id)_stateDumpObject;
-(void)setMiddlewareClasses:(NSArray *)arg1 ;
-(NSOperationQueue *)queue;
-(NSArray *)middlewareClasses;
-(void)setLabel:(NSString *)arg1 ;
-(id)performWithCompletion:(/*^block*/id)arg1 ;
-(long long)qualityOfService;
-(void)cancel;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)label;
@end

