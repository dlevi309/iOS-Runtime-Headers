/*
* Generated on Monday, March 1, 2021 at 2:32:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(void)update;
-(id)initWithDelegate:(id)arg1 ;
-(id)loadDelegate;
-(void)restart;
-(void)jitter;
-(void)stopIfNeeded;
-(void)delegateWillDie;
-(BOOL)isAborting;
@end

