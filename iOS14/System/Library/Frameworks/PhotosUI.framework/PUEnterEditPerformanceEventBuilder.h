/*
* Generated on Thursday, January 14, 2021 at 2:22:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


@protocol PUEditableAsset;
@interface PUEnterEditPerformanceEventBuilder : NSObject {

	BOOL _firstSinceBoot;
	BOOL _firstSinceLaunch;
	BOOL _editingWithRaw;
	id<PUEditableAsset> _asset;
	double _enterEditDuration;
	double _resourceCheckingDuration;
	double _resourceDownloadDuration;
	double _resourceLoadingDuration;
	double _autoCalcDuration;

}

@property (nonatomic,retain) id<PUEditableAsset> asset;                                    //@synthesize asset=_asset - In the implementation block
@property (assign,getter=isFirstSinceBoot,nonatomic) BOOL firstSinceBoot;                  //@synthesize firstSinceBoot=_firstSinceBoot - In the implementation block
@property (assign,getter=isFirstSinceLaunch,nonatomic) BOOL firstSinceLaunch;              //@synthesize firstSinceLaunch=_firstSinceLaunch - In the implementation block
@property (assign,getter=isEditingWithRaw,nonatomic) BOOL editingWithRaw;                  //@synthesize editingWithRaw=_editingWithRaw - In the implementation block
@property (assign,nonatomic) double enterEditDuration;                                     //@synthesize enterEditDuration=_enterEditDuration - In the implementation block
@property (assign,nonatomic) double resourceCheckingDuration;                              //@synthesize resourceCheckingDuration=_resourceCheckingDuration - In the implementation block
@property (assign,nonatomic) double resourceDownloadDuration;                              //@synthesize resourceDownloadDuration=_resourceDownloadDuration - In the implementation block
@property (assign,nonatomic) double resourceLoadingDuration;                               //@synthesize resourceLoadingDuration=_resourceLoadingDuration - In the implementation block
@property (assign,nonatomic) double autoCalcDuration;                                      //@synthesize autoCalcDuration=_autoCalcDuration - In the implementation block
-(void)setAsset:(id<PUEditableAsset>)arg1 ;
-(id<PUEditableAsset>)asset;
-(id)buildEvent;
-(BOOL)isFirstSinceBoot;
-(void)setFirstSinceBoot:(BOOL)arg1 ;
-(BOOL)isFirstSinceLaunch;
-(void)setFirstSinceLaunch:(BOOL)arg1 ;
-(BOOL)isEditingWithRaw;
-(void)setEditingWithRaw:(BOOL)arg1 ;
-(double)enterEditDuration;
-(void)setEnterEditDuration:(double)arg1 ;
-(double)resourceCheckingDuration;
-(void)setResourceCheckingDuration:(double)arg1 ;
-(double)resourceDownloadDuration;
-(void)setResourceDownloadDuration:(double)arg1 ;
-(double)resourceLoadingDuration;
-(void)setResourceLoadingDuration:(double)arg1 ;
-(double)autoCalcDuration;
-(void)setAutoCalcDuration:(double)arg1 ;
@end

