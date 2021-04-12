/*
* Generated on Thursday, January 14, 2021 at 2:27:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setAssetManager:(PBBridgeAssetsManager *)arg1 ;
-(BPSWatchView *)watch;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(PBBridgeAssetsManager *)assetManager;
-(void)setWatch:(BPSWatchView *)arg1 ;
-(void)setAdvertisingName:(NSString *)arg1 ;
-(NSString *)advertisingName;
@end

