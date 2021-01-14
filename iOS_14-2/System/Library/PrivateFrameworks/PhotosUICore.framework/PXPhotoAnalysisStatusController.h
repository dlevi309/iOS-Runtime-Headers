/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXObservable.h>

@class NSDate, NSError, NSMutableArray, NSString;

@interface PXPhotoAnalysisStatusController : PXObservable {

	SCD_Struct_PX38 _needsUpdateFlags;
	BOOL _hasBeenReadyForSomeTime;
	BOOL __didReceiveGraphFractionCompleted;
	BOOL __graphReady;
	BOOL __requestingGraphFractionCompleted;
	long long _graphStatus;
	double _graphFractionCompleted;
	NSDate* __initialUpdateDate;
	NSDate* __lastGraphBecameReadyDate;
	NSError* __graphError;
	NSMutableArray* __retryBlocks;

}

@property (assign,setter=_setGraphStatus:,nonatomic) long long graphStatus;                                                                                               //@synthesize graphStatus=_graphStatus - In the implementation block
@property (assign,setter=_setHasBeenReadyForSomeTime:,nonatomic) BOOL hasBeenReadyForSomeTime;                                                                            //@synthesize hasBeenReadyForSomeTime=_hasBeenReadyForSomeTime - In the implementation block
@property (assign,setter=_setGraphFractionCompleted:,nonatomic) double graphFractionCompleted;                                                                            //@synthesize graphFractionCompleted=_graphFractionCompleted - In the implementation block
@property (assign,setter=_setDidReceiveGraphFractionCompleted:,nonatomic) BOOL _didReceiveGraphFractionCompleted;                                                         //@synthesize _didReceiveGraphFractionCompleted=__didReceiveGraphFractionCompleted - In the implementation block
@property (setter=_setInitialUpdateDate:,nonatomic,retain) NSDate * _initialUpdateDate;                                                                                   //@synthesize _initialUpdateDate=__initialUpdateDate - In the implementation block
@property (setter=_setLastGraphBecameReadyDate:,nonatomic,retain) NSDate * _lastGraphBecameReadyDate;                                                                     //@synthesize _lastGraphBecameReadyDate=__lastGraphBecameReadyDate - In the implementation block
@property (assign,setter=_setGraphReady:,getter=_isGraphReady,nonatomic) BOOL _graphReady;                                                                                //@synthesize _graphReady=__graphReady - In the implementation block
@property (setter=_setGraphError:,nonatomic,retain) NSError * _graphError;                                                                                                //@synthesize _graphError=__graphError - In the implementation block
@property (assign,setter=_setRequestingGraphFractionCompleted:,getter=_isRequestingGraphFractionCompleted,nonatomic) BOOL _requestingGraphFractionCompleted;              //@synthesize _requestingGraphFractionCompleted=__requestingGraphFractionCompleted - In the implementation block
@property (nonatomic,readonly) NSMutableArray * _retryBlocks;                                                                                                             //@synthesize _retryBlocks=__retryBlocks - In the implementation block
@property (nonatomic,readonly) NSString * stateDescription; 
+(id)sharedStatusController;
-(id)init;
-(void)didPerformChanges;
-(void)_updateIfNeeded;
-(void)registerRetryBlock:(/*^block*/id)arg1 ;
-(void)_handleInitialGraceDelay;
-(void)_requestGraphReady;
-(void)_handleGraphReadyReplyWithSuccess:(BOOL)arg1 error:(id)arg2 ;
-(void)_requestGraphFractionCompleted;
-(void)_handleGraphFractionCompletedReply:(id)arg1 error:(id)arg2 ;
-(void)_setHasBeenReadyForSomeTime:(BOOL)arg1 ;
-(void)_setGraphStatus:(long long)arg1 ;
-(void)_handleGraphReadyForSomeTimeForDate:(id)arg1 ;
-(void)_setGraphFractionCompleted:(double)arg1 ;
-(void)_setDidReceiveGraphFractionCompleted:(BOOL)arg1 ;
-(void)_setGraphReady:(BOOL)arg1 ;
-(void)_setGraphError:(id)arg1 ;
-(BOOL)_isWithinGracePeriod;
-(long long)graphStatus;
-(void)_dequeueAndPerformBlocks:(id)arg1 ;
-(void)_invalidateGraphStatus;
-(void)_updateGraphStatusIfNeeded;
-(BOOL)hasBeenReadyForSomeTime;
-(double)graphFractionCompleted;
-(BOOL)_didReceiveGraphFractionCompleted;
-(NSDate *)_initialUpdateDate;
-(void)_setInitialUpdateDate:(id)arg1 ;
-(BOOL)_isGraphReady;
-(NSDate *)_lastGraphBecameReadyDate;
-(void)_setLastGraphBecameReadyDate:(id)arg1 ;
-(NSError *)_graphError;
-(BOOL)_isRequestingGraphFractionCompleted;
-(void)_setRequestingGraphFractionCompleted:(BOOL)arg1 ;
-(NSMutableArray *)_retryBlocks;
-(void)update;
-(BOOL)_needsUpdate;
-(id)mutableChangeObject;
-(NSString *)stateDescription;
-(void)_setNeedsUpdate;
@end

