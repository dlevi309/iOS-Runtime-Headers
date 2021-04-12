/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/


@class HFItem, HUElasticApplier, NSTimer;

@interface HUPressedItemContext : NSObject {

	BOOL _active;
	BOOL _isUserInitiated;
	HFItem* _item;
	HUElasticApplier* _applier;
	double _beginTime;
	double _rawInputProgress;
	double _currentViewScale;
	NSTimer* _programmaticBounceTimer;

}

@property (nonatomic,retain) HFItem * item;                                  //@synthesize item=_item - In the implementation block
@property (nonatomic,retain) HUElasticApplier * applier;                     //@synthesize applier=_applier - In the implementation block
@property (assign,getter=isActive,nonatomic) BOOL active;                    //@synthesize active=_active - In the implementation block
@property (assign,nonatomic) double beginTime;                               //@synthesize beginTime=_beginTime - In the implementation block
@property (assign,nonatomic) double rawInputProgress;                        //@synthesize rawInputProgress=_rawInputProgress - In the implementation block
@property (assign,nonatomic) double currentViewScale;                        //@synthesize currentViewScale=_currentViewScale - In the implementation block
@property (assign,nonatomic) BOOL isUserInitiated;                           //@synthesize isUserInitiated=_isUserInitiated - In the implementation block
@property (nonatomic,retain) NSTimer * programmaticBounceTimer;              //@synthesize programmaticBounceTimer=_programmaticBounceTimer - In the implementation block
-(BOOL)isActive;
-(HFItem *)item;
-(void)setItem:(HFItem *)arg1 ;
-(void)setActive:(BOOL)arg1 ;
-(double)beginTime;
-(void)setBeginTime:(double)arg1 ;
-(BOOL)isUserInitiated;
-(void)setIsUserInitiated:(BOOL)arg1 ;
-(HUElasticApplier *)applier;
-(void)setApplier:(HUElasticApplier *)arg1 ;
-(double)currentViewScale;
-(double)rawInputProgress;
-(void)setRawInputProgress:(double)arg1 ;
-(void)setCurrentViewScale:(double)arg1 ;
-(NSTimer *)programmaticBounceTimer;
-(void)setProgrammaticBounceTimer:(NSTimer *)arg1 ;
@end

