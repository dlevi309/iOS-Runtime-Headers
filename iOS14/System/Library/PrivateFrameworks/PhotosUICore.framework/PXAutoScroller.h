/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@protocol PXAnonymousScrollView, PXAutoScrollerDelegate;
#import <PhotosUICore/PhotosUICore-Structs.h>
@class NSObject;

@interface PXAutoScroller : NSObject {

	SCD_Struct_PX38 _delegateRespondsTo;
	BOOL __repeating;
	NSObject*<PXAnonymousScrollView> _scrollView;
	id<PXAutoScrollerDelegate> _delegate;
	double __margin;
	double __maximumSpeed;
	double __lastUpdateTimestamp;
	CGPoint __autoscrollDirection;

}

@property (nonatomic,readonly) double _margin;                                                          //@synthesize _margin=__margin - In the implementation block
@property (nonatomic,readonly) double _maximumSpeed;                                                    //@synthesize _maximumSpeed=__maximumSpeed - In the implementation block
@property (assign,setter=_setAutoscrollDirection:,nonatomic) CGPoint _autoscrollDirection;              //@synthesize _autoscrollDirection=__autoscrollDirection - In the implementation block
@property (assign,setter=_setRepeating:,getter=_isRepeating,nonatomic) BOOL _repeating;                 //@synthesize _repeating=__repeating - In the implementation block
@property (assign,setter=_setLastUpdateTimestamp:,nonatomic) double _lastUpdateTimestamp;               //@synthesize _lastUpdateTimestamp=__lastUpdateTimestamp - In the implementation block
@property (nonatomic,readonly) NSObject*<PXAnonymousScrollView> scrollView;                             //@synthesize scrollView=_scrollView - In the implementation block
@property (assign,nonatomic,__weak) id<PXAutoScrollerDelegate> delegate;                                //@synthesize delegate=_delegate - In the implementation block
-(double)_margin;
-(void)updateWithTimestamp:(double)arg1 ;
-(id)init;
-(BOOL)autoscrollWithOffset:(CGPoint)arg1 ;
-(void)_setAutoscrollDirection:(CGPoint)arg1 ;
-(void)_setRepeating:(BOOL)arg1 ;
-(double)_maximumSpeed;
-(CGPoint)_autoscrollDirection;
-(void)_setLastUpdateTimestamp:(double)arg1 ;
-(id<PXAutoScrollerDelegate>)delegate;
-(void)stop;
-(void)setDelegate:(id<PXAutoScrollerDelegate>)arg1 ;
-(double)_lastUpdateTimestamp;
-(void)stopRepeating;
-(void)updateWithUserInteractionLocation:(CGPoint)arg1 inCoordinateSpace:(id)arg2 ;
-(BOOL)_isRepeating;
-(id)initWithTargetScrollView:(id)arg1 ;
-(CGRect)visibleRectForScrollView:(id)arg1 ;
-(NSObject*<PXAnonymousScrollView>)scrollView;
-(void)startRepeating;
@end

