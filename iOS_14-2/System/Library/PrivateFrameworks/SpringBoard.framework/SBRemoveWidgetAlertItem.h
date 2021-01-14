/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoardUI/SBAlertItem.h>

@protocol SBLeafIconDataSource;
@class SBWidgetIcon, NSString, SBHIconManager;

@interface SBRemoveWidgetAlertItem : SBAlertItem {

	id<SBLeafIconDataSource> _widget;
	SBWidgetIcon* _icon;
	NSString* _iconLocation;
	SBHIconManager* _iconManager;

}

@property (nonatomic,retain) id<SBLeafIconDataSource> widget;                  //@synthesize widget=_widget - In the implementation block
@property (nonatomic,retain) SBWidgetIcon * icon;                              //@synthesize icon=_icon - In the implementation block
@property (nonatomic,retain) NSString * iconLocation;                          //@synthesize iconLocation=_iconLocation - In the implementation block
@property (assign,nonatomic,__weak) SBHIconManager * iconManager;              //@synthesize iconManager=_iconManager - In the implementation block
-(void)setIconLocation:(NSString *)arg1 ;
-(void)setIconManager:(SBHIconManager *)arg1 ;
-(id<SBLeafIconDataSource>)widget;
-(NSString *)iconLocation;
-(SBWidgetIcon *)icon;
-(SBHIconManager *)iconManager;
-(void)setIcon:(SBWidgetIcon *)arg1 ;
-(void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2 ;
-(BOOL)dismissOnLock;
-(void)setWidget:(id<SBLeafIconDataSource>)arg1 ;
-(BOOL)shouldShowInLockScreen;
-(BOOL)forcesModalAlertAppearance;
-(void)didActivate;
-(id)initWithWidgetIcon:(id)arg1 location:(id)arg2 iconManager:(id)arg3 ;
-(id)initWithWidget:(id)arg1 inIcon:(id)arg2 location:(id)arg3 iconManager:(id)arg4 ;
@end

