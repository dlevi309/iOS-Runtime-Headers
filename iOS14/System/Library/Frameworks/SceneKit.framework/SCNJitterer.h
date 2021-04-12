/*
* Generated on Thursday, January 14, 2021 at 2:27:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/


@protocol SCNJittererDelegate, OS_dispatch_source;
@class NSObject;

@interface SCNJitterer : NSObject {

	BOOL _enabled;
	unsigned long long _state;
	unsigned long long _iteration;
	BOOL _restartSourceIsSuspended;
	id<SCNJittererDelegate> _delegate;
	NSObject*<OS_dispatch_source> _restartSource;

}

@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
+(void)initialize;
-(void)restart;
-(void)setEnabled:(BOOL)arg1 ;
-(void)jitter;
-(void)update;
-(id)initWithDelegate:(id)arg1 ;
-(BOOL)isEnabled;
-(void)dealloc;
-(id)loadDelegate;
-(void)stopIfNeeded;
-(void)delegateWillDie;
-(BOOL)isAborting;
@end

