/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BridgePreferences.framework/BridgePreferences
*/

#import <BridgePreferences/BridgePreferences-Structs.h>
#import <UIKitCore/UIView.h>

@class NSString, PBBridgeAssetsManager, BPSWatchView;

@interface BPSRemoveMigrationWatchView : UIView {

	NSString* _advertisingName;
	PBBridgeAssetsManager* _assetManager;
	BPSWatchView* _watch;

}

@property (nonatomic,copy) NSString * advertisingName;                          //@synthesize advertisingName=_advertisingName - In the implementation block
@property (nonatomic,retain) PBBridgeAssetsManager * assetManager;              //@synthesize assetManager=_assetManager - In the implementation block
@property (nonatomic,retain) BPSWatchView * watch;                              //@synthesize watch=_watch - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(PBBridgeAssetsManager *)assetManager;
-(BPSWatchView *)watch;
-(void)setWatch:(BPSWatchView *)arg1 ;
-(void)setAdvertisingName:(NSString *)arg1 ;
-(NSString *)advertisingName;
-(void)setAssetManager:(PBBridgeAssetsManager *)arg1 ;
@end

