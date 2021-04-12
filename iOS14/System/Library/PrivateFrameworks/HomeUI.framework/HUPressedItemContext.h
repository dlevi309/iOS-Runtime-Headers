/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(double)beginTime;
-(void)setActive:(BOOL)arg1 ;
-(void)setIsUserInitiated:(BOOL)arg1 ;
-(void)setBeginTime:(double)arg1 ;
-(HFItem *)item;
-(BOOL)isActive;
-(void)setItem:(HFItem *)arg1 ;
-(BOOL)isUserInitiated;
-(HUElasticApplier *)applier;
-(void)setApplier:(HUElasticApplier *)arg1 ;
-(double)rawInputProgress;
-(void)setRawInputProgress:(double)arg1 ;
-(double)currentViewScale;
-(void)setCurrentViewScale:(double)arg1 ;
-(NSTimer *)programmaticBounceTimer;
-(void)setProgrammaticBounceTimer:(NSTimer *)arg1 ;
@end

