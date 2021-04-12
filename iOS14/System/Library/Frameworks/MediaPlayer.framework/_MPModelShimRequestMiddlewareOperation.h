/*
* Generated on Thursday, January 14, 2021 at 2:21:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPAsyncOperation.h>
#import <libobjc.A.dylib/MPMiddlewareOperation.h>

@class NSError, NSArray, _MPModelShimRequestMiddleware, MPModelRequest, NSString;

@interface _MPModelShimRequestMiddlewareOperation : MPAsyncOperation <MPMiddlewareOperation> {

	NSArray* _invalidationObservers;
	/*^block*/id _invalidationHandler;
	_MPModelShimRequestMiddleware* _middleware;
	MPModelRequest* _modelRequest;

}

@property (nonatomic,retain) _MPModelShimRequestMiddleware * middleware;              //@synthesize middleware=_middleware - In the implementation block
@property (nonatomic,retain) MPModelRequest * modelRequest;                           //@synthesize modelRequest=_modelRequest - In the implementation block
@property (nonatomic,readonly) NSError * error; 
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,readonly) NSArray * invalidationObservers;                       //@synthesize invalidationObservers=_invalidationObservers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)execute;
-(void)setMiddleware:(_MPModelShimRequestMiddleware *)arg1 ;
-(id)initWithMiddleware:(id)arg1 modelRequest:(id)arg2 ;
-(MPModelRequest *)modelRequest;
-(NSArray *)invalidationObservers;
-(void)setModelRequest:(MPModelRequest *)arg1 ;
-(_MPModelShimRequestMiddleware *)middleware;
-(void)setInvalidationHandler:(id)arg1 ;
-(id)invalidationHandler;
@end

