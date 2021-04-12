/*
* Generated on Monday, March 1, 2021 at 2:30:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIStatusBarItem.h>

@class _UIStatusBarVPNDisconnectView, NSTimer;

@interface _UIStatusBarVPNDisconnectItem : _UIStatusBarItem {

	_UIStatusBarVPNDisconnectView* _disconnectView;
	NSTimer* _slashBeginTimer;

}

@property (nonatomic,retain) _UIStatusBarVPNDisconnectView * disconnectView;              //@synthesize disconnectView=_disconnectView - In the implementation block
@property (nonatomic,retain) NSTimer * slashBeginTimer;                                   //@synthesize slashBeginTimer=_slashBeginTimer - In the implementation block
-(id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2 ;
-(id)viewForIdentifier:(id)arg1 ;
-(id)dependentEntryKeys;
-(BOOL)canEnableDisplayItem:(id)arg1 fromData:(id)arg2 ;
-(void)_create_disconnectView;
-(_UIStatusBarVPNDisconnectView *)disconnectView;
-(void)setDisconnectView:(_UIStatusBarVPNDisconnectView *)arg1 ;
-(NSTimer *)slashBeginTimer;
-(void)setSlashBeginTimer:(NSTimer *)arg1 ;
@end

