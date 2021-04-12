/*
* Generated on Monday, March 1, 2021 at 2:31:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)start;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(BOOL)isAsynchronous;
-(id<INImageProxyInjecting>)injector;
-(void)setInjector:(id<INImageProxyInjecting>)arg1 ;
-(id)imageProxyRequestBlock;
-(void)setImageProxyRequestBlock:(id)arg1 ;
-(id)copyReturnBlock;
-(void)setCopyReturnBlock:(id)arg1 ;
@end

