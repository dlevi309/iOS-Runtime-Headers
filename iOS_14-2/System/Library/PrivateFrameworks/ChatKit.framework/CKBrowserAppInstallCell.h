/*
* Generated on Thursday, January 14, 2021 at 2:21:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setInstallation:(CKAppInstallation *)arg1 ;
-(void)layoutSubviews;
-(id)iconView;
-(CKBrowserIconView *)browserIconView;
-(void)setBrowserIconView:(CKBrowserIconView *)arg1 ;
-(CKAppInstallation *)installation;
@end

