/*
* Generated on Monday, March 1, 2021 at 2:30:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIStatusBarItem.h>

@class _UIStatusBarWifiSignalView, _UIStatusBarImageView, _UIStatusBarStringView;

@interface _UIStatusBarWifiItem : _UIStatusBarItem {

	_UIStatusBarWifiSignalView* _signalView;
	_UIStatusBarImageView* _networkIconView;
	_UIStatusBarStringView* _rawStringView;

}

@property (nonatomic,retain) _UIStatusBarWifiSignalView * signalView;              //@synthesize signalView=_signalView - In the implementation block
@property (nonatomic,retain) _UIStatusBarImageView * networkIconView;              //@synthesize networkIconView=_networkIconView - In the implementation block
@property (nonatomic,retain) _UIStatusBarStringView * rawStringView;               //@synthesize rawStringView=_rawStringView - In the implementation block
+(id)iconDisplayIdentifier;
+(id)signalStrengthDisplayIdentifier;
+(id)rawDisplayIdentifier;
+(id)groupWithPriority:(long long)arg1 ;
-(id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2 ;
-(id)viewForIdentifier:(id)arg1 ;
-(id)dependentEntryKeys;
-(id)_backgroundColorForUpdate:(id)arg1 entry:(id)arg2 ;
-(id)_fillColorForUpdate:(id)arg1 entry:(id)arg2 ;
-(_UIStatusBarWifiSignalView *)signalView;
-(_UIStatusBarStringView *)rawStringView;
-(void)_create_signalView;
-(void)_create_rawStringView;
-(void)setSignalView:(_UIStatusBarWifiSignalView *)arg1 ;
-(void)setRawStringView:(_UIStatusBarStringView *)arg1 ;
-(_UIStatusBarImageView *)networkIconView;
-(void)_create_networkIconView;
-(long long)_barCountForUpdate:(id)arg1 ;
-(double)_barThicknessForUpdate:(id)arg1 ;
-(double)_interspaceForUpdate:(id)arg1 ;
-(double)_totalWidthForUpdate:(id)arg1 ;
-(void)setNetworkIconView:(_UIStatusBarImageView *)arg1 ;
@end

