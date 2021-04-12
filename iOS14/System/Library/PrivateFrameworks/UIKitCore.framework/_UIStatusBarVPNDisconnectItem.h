/*
* Generated on Thursday, January 14, 2021 at 2:20:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)dependentEntryKeys;
-(id)viewForIdentifier:(id)arg1 ;
-(_UIStatusBarVPNDisconnectView *)disconnectView;
-(void)setDisconnectView:(_UIStatusBarVPNDisconnectView *)arg1 ;
-(void)_create_disconnectView;
-(NSTimer *)slashBeginTimer;
-(void)setSlashBeginTimer:(NSTimer *)arg1 ;
-(BOOL)canEnableDisplayItem:(id)arg1 fromData:(id)arg2 ;
@end

