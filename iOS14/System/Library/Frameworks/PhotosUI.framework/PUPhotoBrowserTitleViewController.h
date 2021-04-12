/*
* Generated on Thursday, January 14, 2021 at 2:22:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


@protocol PUPhotoBrowserTitleViewControllerDelegate;
#import <PhotosUI/PhotosUI-Structs.h>
@class UIView, NSString, NSDate, PLDateRangeFormatter, NSDateComponentsFormatter, UITapGestureRecognizer, UIColor;

@interface PUPhotoBrowserTitleViewController : NSObject {

	SCD_Struct_PU17 _delegateFlags;
	BOOL _tappable;
	BOOL _usingCompactTitleView;
	BOOL __isPerformingChanges;
	BOOL __isUpdating;
	BOOL __needsUpdateDayAndTimeDescriptions;
	BOOL __needsUpdatePlayClockDescription;
	BOOL __needsUpdateLabels;
	BOOL __needsUpdateGestureRecognizers;
	UIView* _view;
	id<PUPhotoBrowserTitleViewControllerDelegate> _delegate;
	NSString* _geoDescription;
	NSDate* _creationDate;
	PLDateRangeFormatter* __dayFormatter;
	PLDateRangeFormatter* __timeFormatter;
	NSDateComponentsFormatter* __playClockFormatter;
	NSString* __dayDescription;
	NSString* __timeDescription;
	NSString* __playClockDescription;
	UITapGestureRecognizer* __tapGestureRecognizer;
	SCD_Struct_PH4 _currentPlaybackTime;
	SCD_Struct_PH4 _playbackDuration;

}

@property (assign,setter=_setPerformingChanges:,nonatomic) BOOL _isPerformingChanges;                                            //@synthesize _isPerformingChanges=__isPerformingChanges - In the implementation block
@property (assign,setter=_setUpdating:,nonatomic) BOOL _isUpdating;                                                              //@synthesize _isUpdating=__isUpdating - In the implementation block
@property (assign,setter=_setNeedsUpdateDayAndTimeDescriptions:,nonatomic) BOOL _needsUpdateDayAndTimeDescriptions;              //@synthesize _needsUpdateDayAndTimeDescriptions=__needsUpdateDayAndTimeDescriptions - In the implementation block
@property (assign,setter=_setNeedsUpdatePlayClockDescription:,nonatomic) BOOL _needsUpdatePlayClockDescription;                  //@synthesize _needsUpdatePlayClockDescription=__needsUpdatePlayClockDescription - In the implementation block
@property (assign,setter=_setNeedsUpdateLabels:,nonatomic) BOOL _needsUpdateLabels;                                              //@synthesize _needsUpdateLabels=__needsUpdateLabels - In the implementation block
@property (assign,setter=_setNeedsUpdateGestureRecognizers:,nonatomic) BOOL _needsUpdateGestureRecognizers;                      //@synthesize _needsUpdateGestureRecognizers=__needsUpdateGestureRecognizers - In the implementation block
@property (nonatomic,readonly) PLDateRangeFormatter * _dayFormatter;                                                             //@synthesize _dayFormatter=__dayFormatter - In the implementation block
@property (nonatomic,readonly) PLDateRangeFormatter * _timeFormatter;                                                            //@synthesize _timeFormatter=__timeFormatter - In the implementation block
@property (nonatomic,readonly) NSDateComponentsFormatter * _playClockFormatter;                                                  //@synthesize _playClockFormatter=__playClockFormatter - In the implementation block
@property (setter=_setDayDescription:,nonatomic,retain) NSString * _dayDescription;                                              //@synthesize _dayDescription=__dayDescription - In the implementation block
@property (setter=_setTimeDescription:,nonatomic,retain) NSString * _timeDescription;                                            //@synthesize _timeDescription=__timeDescription - In the implementation block
@property (setter=_setPlayClockDescription:,nonatomic,retain) NSString * _playClockDescription;                                  //@synthesize _playClockDescription=__playClockDescription - In the implementation block
@property (setter=_setTapGestureRecognizer:,nonatomic,retain) UITapGestureRecognizer * _tapGestureRecognizer;                    //@synthesize _tapGestureRecognizer=__tapGestureRecognizer - In the implementation block
@property (nonatomic,readonly) UIView * view;                                                                                    //@synthesize view=_view - In the implementation block
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
@property (assign,nonatomic,__weak) id<PUPhotoBrowserTitleViewControllerDelegate> delegate;                                      //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isTappable,nonatomic) BOOL tappable;                                                                    //@synthesize tappable=_tappable - In the implementation block
@property (assign,getter=isUsingCompactTitleView,nonatomic) BOOL usingCompactTitleView;                                          //@synthesize usingCompactTitleView=_usingCompactTitleView - In the implementation block
@property (nonatomic,retain) NSString * geoDescription;                                                                          //@synthesize geoDescription=_geoDescription - In the implementation block
@property (nonatomic,retain) NSDate * creationDate;                                                                              //@synthesize creationDate=_creationDate - In the implementation block
@property (assign,nonatomic) SCD_Struct_PH4 currentPlaybackTime;                                                                 //@synthesize currentPlaybackTime=_currentPlaybackTime - In the implementation block
@property (assign,nonatomic) SCD_Struct_PH4 playbackDuration;                                                                    //@synthesize playbackDuration=_playbackDuration - In the implementation block
@property (nonatomic,retain) UIColor * textColor; 
-(void)_setTapGestureRecognizer:(id)arg1 ;
-(SCD_Struct_PH4)playbackDuration;
-(void)_assertInsideChangeBlock;
-(void)_setUpdating:(BOOL)arg1 ;
-(void)_setPerformingChanges:(BOOL)arg1 ;
-(PLDateRangeFormatter *)_timeFormatter;
-(BOOL)_isPerformingChanges;
-(BOOL)_isUpdating;
-(void)_invalidateDayAndTimeDescriptions;
-(UIColor *)textColor;
-(NSString *)_timeDescription;
-(PLDateRangeFormatter *)_dayFormatter;
-(id)init;
-(void)_setNeedsUpdateLabels:(BOOL)arg1 ;
-(id<PUPhotoBrowserTitleViewControllerDelegate>)delegate;
-(void)setCreationDate:(NSDate *)arg1 ;
-(BOOL)_needsUpdatePlayClockDescription;
-(NSString *)subtitle;
-(void)_setTimeDescription:(id)arg1 ;
-(void)_dateFormatterChanged:(id)arg1 ;
-(void)_updateIfNeeded;
-(void)_invalidateLabels;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)setDelegate:(id<PUPhotoBrowserTitleViewControllerDelegate>)arg1 ;
-(void)_updateDayAndTimeDescriptionsIfNeeded;
-(void)setTappable:(BOOL)arg1 ;
-(void)setUsingCompactTitleView:(BOOL)arg1 ;
-(BOOL)_needsUpdateDayAndTimeDescriptions;
-(UIView *)view;
-(NSDate *)creationDate;
-(BOOL)_needsUpdateLabels;
-(BOOL)isUsingCompactTitleView;
-(NSString *)geoDescription;
-(void)setGeoDescription:(NSString *)arg1 ;
-(void)_setDayDescription:(id)arg1 ;
-(void)_updateLabelsIfNeeded;
-(void)_invalidatePlayClockDescription;
-(BOOL)_needsUpdate;
-(void)_setNeedsUpdateGestureRecognizers:(BOOL)arg1 ;
-(NSString *)_playClockDescription;
-(void)_assertInsideUpdate;
-(SCD_Struct_PH4)currentPlaybackTime;
-(BOOL)isTappable;
-(void)_setNeedsUpdateDayAndTimeDescriptions:(BOOL)arg1 ;
-(void)_invalidateGestureRecognizers;
-(NSDateComponentsFormatter *)_playClockFormatter;
-(NSString *)_dayDescription;
-(void)_setNeedsUpdate;
-(void)setCurrentPlaybackTime:(SCD_Struct_PH4)arg1 ;
-(void)performChanges:(/*^block*/id)arg1 ;
-(void)_handleTapGestureRecognizer:(id)arg1 ;
-(void)_updateGestureRecognizersIfNeeded;
-(NSString *)title;
-(void)_updatePlayClockDescriptionIfNeeded;
-(UITapGestureRecognizer *)_tapGestureRecognizer;
-(void)_setNeedsUpdatePlayClockDescription:(BOOL)arg1 ;
-(void)setPlaybackDuration:(SCD_Struct_PH4)arg1 ;
-(void)_setPlayClockDescription:(id)arg1 ;
-(BOOL)_needsUpdateGestureRecognizers;
@end

