/*
* Generated on Thursday, January 14, 2021 at 2:25:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoardUI/SBAlertItem.h>

@class SBIcon, NSString;

@interface SBDeleteNonAppIconAlertItem : SBAlertItem {

	SBIcon* _icon;
	NSString* _iconLocation;

}

@property (nonatomic,readonly) SBIcon * icon;                             //@synthesize icon=_icon - In the implementation block
@property (nonatomic,copy,readonly) NSString * iconLocation;              //@synthesize iconLocation=_iconLocation - In the implementation block
-(NSString *)iconLocation;
-(SBIcon *)icon;
-(void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2 ;
-(BOOL)dismissOnLock;
-(BOOL)shouldShowInLockScreen;
-(BOOL)forcesModalAlertAppearance;
-(void)didActivate;
-(id)initWithIcon:(id)arg1 location:(id)arg2 ;
@end

