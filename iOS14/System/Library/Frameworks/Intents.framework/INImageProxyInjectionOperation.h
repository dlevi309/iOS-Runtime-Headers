/*
* Generated on Thursday, January 14, 2021 at 2:21:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Foundation/NSOperation.h>

@protocol INImageProxyInjecting;
@interface INImageProxyInjectionOperation : NSOperation {

	BOOL _isFinished;
	BOOL _isExecuting;
	id<INImageProxyInjecting> _injector;
	/*^block*/id _imageProxyRequestBlock;
	/*^block*/id _copyReturnBlock;

}

@property (nonatomic,retain) id<INImageProxyInjecting> injector;              //@synthesize injector=_injector - In the implementation block
@property (nonatomic,copy) id imageProxyRequestBlock;                         //@synthesize imageProxyRequestBlock=_imageProxyRequestBlock - In the implementation block
@property (nonatomic,copy) id copyReturnBlock;                                //@synthesize copyReturnBlock=_copyReturnBlock - In the implementation block
-(id)copyReturnBlock;
-(void)start;
-(void)setCopyReturnBlock:(id)arg1 ;
-(BOOL)isAsynchronous;
-(id<INImageProxyInjecting>)injector;
-(void)setImageProxyRequestBlock:(id)arg1 ;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(id)imageProxyRequestBlock;
-(void)setInjector:(id<INImageProxyInjecting>)arg1 ;
@end

