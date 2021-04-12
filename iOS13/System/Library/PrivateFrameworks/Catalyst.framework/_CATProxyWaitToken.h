/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
*/


@protocol OS_dispatch_group;
@class NSObject;

@interface _CATProxyWaitToken : NSObject {

	AB mFinished;
	NSObject*<OS_dispatch_group> mGroup;
	BOOL _isExclusive;
	id _resourceProxy;

}

@property (nonatomic,readonly) BOOL isExclusive;              //@synthesize isExclusive=_isExclusive - In the implementation block
@property (nonatomic,readonly) id resourceProxy;              //@synthesize resourceProxy=_resourceProxy - In the implementation block
-(void)dealloc;
-(void)invalidate;
-(void)cancel;
-(BOOL)isExclusive;
-(id)resourceProxy;
-(id)initWithExclusive:(BOOL)arg1 group:(id)arg2 ;
-(void)notifyWithResourceProxy:(id)arg1 ;
@end

