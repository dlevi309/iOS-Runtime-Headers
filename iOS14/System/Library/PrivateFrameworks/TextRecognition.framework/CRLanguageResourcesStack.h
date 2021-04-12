/*
* Generated on Thursday, January 14, 2021 at 2:25:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
*/


@protocol OS_dispatch_semaphore;
@class NSMutableArray, NSString, NSObject, NSMutableSet;

@interface CRLanguageResourcesStack : NSObject {

	long long _totalResources;
	NSMutableArray* _availableResources;
	NSString* _localeIdentifier;
	NSObject*<OS_dispatch_semaphore> _resourceCountSemaphore;
	NSMutableSet* _subscribers;

}

@property (assign) long long totalResources;                                             //@synthesize totalResources=_totalResources - In the implementation block
@property (retain) NSMutableArray * availableResources;                                  //@synthesize availableResources=_availableResources - In the implementation block
@property (retain) NSString * localeIdentifier;                                          //@synthesize localeIdentifier=_localeIdentifier - In the implementation block
@property (retain) NSObject*<OS_dispatch_semaphore> resourceCountSemaphore;              //@synthesize resourceCountSemaphore=_resourceCountSemaphore - In the implementation block
@property (retain) NSMutableSet * subscribers;                                           //@synthesize subscribers=_subscribers - In the implementation block
-(NSString *)localeIdentifier;
-(id)initWithLocaleIdentifier:(id)arg1 ;
-(NSMutableSet *)subscribers;
-(void)addSubscriber:(id)arg1 ;
-(void)removeSubscriber:(id)arg1 ;
-(void)setLocaleIdentifier:(NSString *)arg1 ;
-(long long)subscriberCount;
-(void)setAvailableResources:(NSMutableArray *)arg1 ;
-(void)setTotalResources:(long long)arg1 ;
-(void)setResourceCountSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(void)setSubscribers:(NSMutableSet *)arg1 ;
-(NSMutableArray *)availableResources;
-(long long)totalResources;
-(NSObject*<OS_dispatch_semaphore>)resourceCountSemaphore;
-(id)popResource;
-(void)pushResource:(id)arg1 ;
-(BOOL)hasSubscriber:(id)arg1 ;
@end

