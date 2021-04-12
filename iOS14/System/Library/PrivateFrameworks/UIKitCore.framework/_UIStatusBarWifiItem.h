/*
* Generated on Thursday, January 14, 2021 at 2:20:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)rawDisplayIdentifier;
+(id)iconDisplayIdentifier;
+(id)signalStrengthDisplayIdentifier;
+(id)groupWithPriority:(long long)arg1 ;
-(id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2 ;
-(id)dependentEntryKeys;
-(void)_create_networkIconView;
-(void)_create_rawStringView;
-(void)setNetworkIconView:(_UIStatusBarImageView *)arg1 ;
-(void)_create_signalView;
-(_UIStatusBarWifiSignalView *)signalView;
-(id)viewForIdentifier:(id)arg1 ;
-(double)_totalWidthForUpdate:(id)arg1 ;
-(double)_barThicknessForUpdate:(id)arg1 ;
-(long long)_barCountForUpdate:(id)arg1 ;
-(double)_interspaceForUpdate:(id)arg1 ;
-(void)setRawStringView:(_UIStatusBarStringView *)arg1 ;
-(_UIStatusBarStringView *)rawStringView;
-(id)_fillColorForUpdate:(id)arg1 entry:(id)arg2 ;
-(id)_backgroundColorForUpdate:(id)arg1 entry:(id)arg2 ;
-(void)setSignalView:(_UIStatusBarWifiSignalView *)arg1 ;
-(_UIStatusBarImageView *)networkIconView;
@end

