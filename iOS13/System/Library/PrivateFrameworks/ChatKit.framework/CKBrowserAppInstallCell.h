/*
* Generated on Monday, March 1, 2021 at 2:31:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/CKBrowserCell.h>

@class CKAppInstallation, CKBrowserIconView;

@interface CKBrowserAppInstallCell : CKBrowserCell {

	CKAppInstallation* _installation;
	CKBrowserIconView* _browserIconView;

}

@property (nonatomic,retain) CKBrowserIconView * browserIconView;              //@synthesize browserIconView=_browserIconView - In the implementation block
@property (nonatomic,retain) CKAppInstallation * installation;                 //@synthesize installation=_installation - In the implementation block
+(id)reuseIdentifier;
-(void)layoutSubviews;
-(id)iconView;
-(void)setInstallation:(CKAppInstallation *)arg1 ;
-(CKBrowserIconView *)browserIconView;
-(void)setBrowserIconView:(CKBrowserIconView *)arg1 ;
-(CKAppInstallation *)installation;
@end

