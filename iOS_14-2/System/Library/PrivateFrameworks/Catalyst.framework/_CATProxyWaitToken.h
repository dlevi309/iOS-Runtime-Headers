/*
* Generated on Thursday, January 14, 2021 at 2:27:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isExclusive;
-(id)resourceProxy;
-(void)invalidate;
-(void)cancel;
-(void)dealloc;
-(id)initWithExclusive:(BOOL)arg1 group:(id)arg2 ;
-(void)notifyWithResourceProxy:(id)arg1 ;
@end

