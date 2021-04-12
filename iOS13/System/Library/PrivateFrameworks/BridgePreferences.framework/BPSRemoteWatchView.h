/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BridgePreferences.framework/BridgePreferences
*/

#import <BridgePreferences/BridgePreferences-Structs.h>
#import <UIKitCore/UIView.h>

@class NSString, PBBridgeAssetsManager, BPSWatchView, UIImageView;

@interface BPSRemoteWatchView : UIView {

	NSString* _advertisingName;
	PBBridgeAssetsManager* _assetManager;
	BPSWatchView* _watch;
	UIImageView* _watchScreen;
	unsigned long long _style;

}

@property (nonatomic,copy) NSString * advertisingName;                          //@synthesize advertisingName=_advertisingName - In the implementation block
@property (nonatomic,retain) PBBridgeAssetsManager * assetManager;              //@synthesize assetManager=_assetManager - In the implementation block
@property (nonatomic,retain) BPSWatchView * watch;                              //@synthesize watch=_watch - In the implementation block
@property (nonatomic,retain) UIImageView * watchScreen;                         //@synthesize watchScreen=_watchScreen - In the implementation block
@property (assign,nonatomic) unsigned long long style;                          //@synthesize style=_style - In the implementation block
-(unsigned long long)style;
-(void)setStyle:(unsigned long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(PBBridgeAssetsManager *)assetManager;
-(BPSWatchView *)watch;
-(void)setWatch:(BPSWatchView *)arg1 ;
-(void)setAdvertisingName:(id)arg1 andStyle:(unsigned long long)arg2 ;
-(void)setAdvertisingName:(NSString *)arg1 ;
-(NSString *)advertisingName;
-(void)setAssetManager:(PBBridgeAssetsManager *)arg1 ;
-(UIImageView *)watchScreen;
-(void)setWatchScreen:(UIImageView *)arg1 ;
@end

