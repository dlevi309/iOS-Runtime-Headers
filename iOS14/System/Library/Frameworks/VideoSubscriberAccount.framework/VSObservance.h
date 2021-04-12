/*
* Generated on Thursday, January 14, 2021 at 2:27:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
*/


@protocol VSObservanceDelegate;
@class NSString;

@interface VSObservance : NSObject {

	BOOL _observing;
	id _object;
	NSString* _keyPath;
	unsigned long long _options;
	id<VSObservanceDelegate> _delegate;

}

@property (assign,getter=isObserving,nonatomic) BOOL observing;                     //@synthesize observing=_observing - In the implementation block
@property (nonatomic,readonly) id object;                                           //@synthesize object=_object - In the implementation block
@property (nonatomic,copy,readonly) NSString * keyPath;                             //@synthesize keyPath=_keyPath - In the implementation block
@property (nonatomic,readonly) unsigned long long options;                          //@synthesize options=_options - In the implementation block
@property (assign,nonatomic,__weak) id<VSObservanceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)startObserving;
-(void)stopObserving;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)init;
-(id<VSObservanceDelegate>)delegate;
-(void)setObserving:(BOOL)arg1 ;
-(unsigned long long)options;
-(id)object;
-(BOOL)isObserving;
-(void)setDelegate:(id<VSObservanceDelegate>)arg1 ;
-(NSString *)keyPath;
-(id)initWithObject:(id)arg1 keyPath:(id)arg2 options:(unsigned long long)arg3 ;
-(void)dealloc;
@end

