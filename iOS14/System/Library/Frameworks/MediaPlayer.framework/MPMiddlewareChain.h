/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@class NSEnumerator;

@interface MPMiddlewareChain : NSObject {

	NSEnumerator* _middlewareEnumerator;
	SEL _builderSelector;

}

@property (assign,nonatomic) SEL builderSelector;              //@synthesize builderSelector=_builderSelector - In the implementation block
+(void)_addBuilderProtocol:(id)arg1 ;
+(void)registerReturnType:(const char*)arg1 returnValueBlock:(id)arg2 ;
+(id)builderProxyForProtocol:(id)arg1 ;
-(id)nextObject;
-(void)setBuilderSelector:(SEL)arg1 ;
-(id)initWithMiddleware:(id)arg1 protocol:(id)arg2 ;
-(SEL)builderSelector;
@end

