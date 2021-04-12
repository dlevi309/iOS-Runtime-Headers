/*
* Generated on Monday, March 1, 2021 at 2:30:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(void)cancel;
-(BOOL)isFinished;
-(id)initWithManager:(id)arg1 ;
-(void)setCancellationHandler:(id)arg1 ;
-(id)cancellationHandler;
-(void)complete;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)_finishAndCallHandler:(/*^block*/id)arg1 ;
@end

