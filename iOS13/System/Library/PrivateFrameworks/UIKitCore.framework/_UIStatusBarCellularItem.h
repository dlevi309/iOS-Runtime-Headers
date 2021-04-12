/*
* Generated on Monday, March 1, 2021 at 2:30:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIStatusBarItem.h>

@protocol _UIStatusBarCellularItemTypeStringProvider;
@class _UIStatusBarStringView, _UIStatusBarCellularSignalView, _UIStatusBarImageView, NSString;

@interface _UIStatusBarCellularItem : _UIStatusBarItem {

	BOOL _showsDisabledSignalBars;
	BOOL _marqueeServiceName;
	id<_UIStatusBarCellularItemTypeStringProvider> _typeStringProvider;
	_UIStatusBarStringView* _serviceNameView;
	_UIStatusBarCellularSignalView* _signalView;
	_UIStatusBarStringView* _networkTypeView;
	_UIStatusBarImageView* _sosView;
	_UIStatusBarImageView* _warningView;
	_UIStatusBarImageView* _callForwardingView;
	_UIStatusBarStringView* _rawStringView;

}

@property (nonatomic,readonly) NSString * cellularDataEntryKey; 
@property (nonatomic,retain) _UIStatusBarStringView * serviceNameView;                                              //@synthesize serviceNameView=_serviceNameView - In the implementation block
@property (nonatomic,retain) _UIStatusBarCellularSignalView * signalView;                                           //@synthesize signalView=_signalView - In the implementation block
@property (nonatomic,retain) _UIStatusBarStringView * networkTypeView;                                              //@synthesize networkTypeView=_networkTypeView - In the implementation block
@property (nonatomic,retain) _UIStatusBarImageView * sosView;                                                       //@synthesize sosView=_sosView - In the implementation block
@property (nonatomic,retain) _UIStatusBarImageView * warningView;                                                   //@synthesize warningView=_warningView - In the implementation block
@property (nonatomic,retain) _UIStatusBarImageView * callForwardingView;                                            //@synthesize callForwardingView=_callForwardingView - In the implementation block
@property (nonatomic,retain) _UIStatusBarStringView * rawStringView;                                                //@synthesize rawStringView=_rawStringView - In the implementation block
@property (assign,nonatomic) BOOL showsDisabledSignalBars;                                                          //@synthesize showsDisabledSignalBars=_showsDisabledSignalBars - In the implementation block
@property (assign,nonatomic) BOOL marqueeServiceName;                                                               //@synthesize marqueeServiceName=_marqueeServiceName - In the implementation block
@property (assign,nonatomic,__weak) id<_UIStatusBarCellularItemTypeStringProvider> typeStringProvider;              //@synthesize typeStringProvider=_typeStringProvider - In the implementation block
+(id)signalStrengthDisplayIdentifier;
+(id)nameDisplayIdentifier;
+(id)typeDisplayIdentifier;
+(id)sosDisplayIdentifier;
+(id)warningDisplayIdentifier;
+(id)callForwardingDisplayIdentifier;
+(id)rawDisplayIdentifier;
+(id)groupWithHighPriority:(long long)arg1 lowPriority:(long long)arg2 typeClass:(Class)arg3 allowDualNetwork:(BOOL)arg4 ;
-(id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2 ;
-(id)viewForIdentifier:(id)arg1 ;
-(id)dependentEntryKeys;
-(id)initWithIdentifier:(id)arg1 statusBar:(id)arg2 ;
-(void)setShowsDisabledSignalBars:(BOOL)arg1 ;
-(void)setMarqueeServiceName:(BOOL)arg1 ;
-(NSString *)cellularDataEntryKey;
-(id)_backgroundColorForUpdate:(id)arg1 entry:(id)arg2 ;
-(id)_fillColorForUpdate:(id)arg1 entry:(id)arg2 ;
-(id)entryForDisplayItemWithIdentifier:(id)arg1 ;
-(_UIStatusBarCellularSignalView *)signalView;
-(BOOL)_updateSignalView:(id)arg1 withUpdate:(id)arg2 entry:(id)arg3 forceShowingDisabledSignalBars:(BOOL)arg4 ;
-(_UIStatusBarStringView *)serviceNameView;
-(id)_stringForCellularType:(long long)arg1 ;
-(_UIStatusBarStringView *)networkTypeView;
-(_UIStatusBarImageView *)sosView;
-(_UIStatusBarImageView *)warningView;
-(BOOL)_showCallFowardingForEntry:(id)arg1 ;
-(_UIStatusBarImageView *)callForwardingView;
-(_UIStatusBarStringView *)rawStringView;
-(void)_create_signalView;
-(void)_create_serviceNameView;
-(void)_create_networkTypeView;
-(void)_create_sosView;
-(void)_create_warningView;
-(void)_create_callForwardingView;
-(void)_create_rawStringView;
-(void)prepareAnimation:(id)arg1 forDisplayItem:(id)arg2 ;
-(void)setmarqueeServiceName:(BOOL)arg1 ;
-(BOOL)showsDisabledSignalBars;
-(BOOL)marqueeServiceName;
-(id<_UIStatusBarCellularItemTypeStringProvider>)typeStringProvider;
-(void)setTypeStringProvider:(id<_UIStatusBarCellularItemTypeStringProvider>)arg1 ;
-(void)setServiceNameView:(_UIStatusBarStringView *)arg1 ;
-(void)setSignalView:(_UIStatusBarCellularSignalView *)arg1 ;
-(void)setNetworkTypeView:(_UIStatusBarStringView *)arg1 ;
-(void)setSosView:(_UIStatusBarImageView *)arg1 ;
-(void)setWarningView:(_UIStatusBarImageView *)arg1 ;
-(void)setCallForwardingView:(_UIStatusBarImageView *)arg1 ;
-(void)setRawStringView:(_UIStatusBarStringView *)arg1 ;
@end

