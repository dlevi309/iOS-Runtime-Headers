/*
* Generated on Thursday, January 14, 2021 at 2:22:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


@protocol PUEditableAsset;
@class PICompositionController;

@interface PUExitEditPerformanceEventBuilder : NSObject {

	BOOL _firstSinceLaunch;
	BOOL _editingWithRaw;
	id<PUEditableAsset> _asset;
	long long _sessionEndReason;
	double _exitEditDuration;
	PICompositionController* _compositionController;

}

@property (nonatomic,retain) id<PUEditableAsset> asset;                                    //@synthesize asset=_asset - In the implementation block
@property (assign,getter=isFirstSinceLaunch,nonatomic) BOOL firstSinceLaunch;              //@synthesize firstSinceLaunch=_firstSinceLaunch - In the implementation block
@property (assign,getter=isEditingWithRaw,nonatomic) BOOL editingWithRaw;                  //@synthesize editingWithRaw=_editingWithRaw - In the implementation block
@property (assign,nonatomic) long long sessionEndReason;                                   //@synthesize sessionEndReason=_sessionEndReason - In the implementation block
@property (assign,nonatomic) double exitEditDuration;                                      //@synthesize exitEditDuration=_exitEditDuration - In the implementation block
@property (nonatomic,copy) PICompositionController * compositionController;                //@synthesize compositionController=_compositionController - In the implementation block
-(void)setAsset:(id<PUEditableAsset>)arg1 ;
-(long long)sessionEndReason;
-(id<PUEditableAsset>)asset;
-(id)buildEvent;
-(BOOL)isFirstSinceLaunch;
-(void)setFirstSinceLaunch:(BOOL)arg1 ;
-(BOOL)isEditingWithRaw;
-(void)setEditingWithRaw:(BOOL)arg1 ;
-(double)exitEditDuration;
-(void)setExitEditDuration:(double)arg1 ;
-(PICompositionController *)compositionController;
-(void)setCompositionController:(PICompositionController *)arg1 ;
-(void)setSessionEndReason:(long long)arg1 ;
@end

