/*
* Generated on Thursday, January 14, 2021 at 2:20:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@class GEOMapRequestManager;

@interface GEOMapRequest : NSObject {

	GEOMapRequestManager* _requestManager;
	/*^block*/id _completionHandler;
	/*^block*/id _cancellationHandler;
	BOOL _isFinished;

}

@property (nonatomic,copy) id completionHandler;                //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,copy) id cancellationHandler;              //@synthesize cancellationHandler=_cancellationHandler - In the implementation block
@property (nonatomic,readonly) BOOL isFinished;                 //@synthesize isFinished=_isFinished - In the implementation block
-(id)initWithManager:(id)arg1 ;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(BOOL)isFinished;
-(void)_finishAndCallHandler:(/*^block*/id)arg1 ;
-(void)setCancellationHandler:(id)arg1 ;
-(void)complete;
-(id)cancellationHandler;
-(void)cancel;
-(void)dealloc;
@end

