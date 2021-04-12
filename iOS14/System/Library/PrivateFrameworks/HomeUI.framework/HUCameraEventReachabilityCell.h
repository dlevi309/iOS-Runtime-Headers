/*
* Generated on Thursday, January 14, 2021 at 2:24:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class HFCameraScrubberReachabilityEventContainer, CALayer;

@interface HUCameraEventReachabilityCell : UICollectionViewCell {

	BOOL _needsFullDashedLineWidth;
	unsigned long long _displayMode;
	HFCameraScrubberReachabilityEventContainer* _reachabilityEvent;
	CALayer* _badgeLayer;

}

@property (assign,nonatomic) unsigned long long displayMode;                                              //@synthesize displayMode=_displayMode - In the implementation block
@property (nonatomic,retain) HFCameraScrubberReachabilityEventContainer * reachabilityEvent;              //@synthesize reachabilityEvent=_reachabilityEvent - In the implementation block
@property (nonatomic,retain) CALayer * badgeLayer;                                                        //@synthesize badgeLayer=_badgeLayer - In the implementation block
@property (assign,nonatomic) BOOL needsFullDashedLineWidth;                                               //@synthesize needsFullDashedLineWidth=_needsFullDashedLineWidth - In the implementation block
+(id)backgroundColor;
-(id)accessibilityLabel;
-(id)initWithFrame:(CGRect)arg1 ;
-(unsigned long long)displayMode;
-(void)drawRect:(CGRect)arg1 ;
-(void)setDisplayMode:(unsigned long long)arg1 ;
-(CALayer *)badgeLayer;
-(void)setBadgeLayer:(CALayer *)arg1 ;
-(void)updateWithReachabilityEventContainer:(id)arg1 mode:(unsigned long long)arg2 ;
-(BOOL)needsFullDashedLineWidth;
-(void)setReachabilityEvent:(HFCameraScrubberReachabilityEventContainer *)arg1 ;
-(void)setNeedsFullDashedLineWidth:(BOOL)arg1 ;
-(HFCameraScrubberReachabilityEventContainer *)reachabilityEvent;
@end

