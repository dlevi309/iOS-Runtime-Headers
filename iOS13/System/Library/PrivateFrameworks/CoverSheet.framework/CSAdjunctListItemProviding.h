/*
* Generated on Monday, March 1, 2021 at 2:33:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/

@class NSString, SBSLockScreenContentAction, UIView;


@protocol CSAdjunctListItemProviding <NSObject>
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) SBSLockScreenContentAction * action; 
@property (nonatomic,retain) UIView * platterView; 
@property (nonatomic,retain) UIViewController*<CSAdjunctItemHosting> contentHost; 
@required
-(NSString *)identifier;
-(SBSLockScreenContentAction *)action;
-(void)setPlatterView:(id)arg1;
-(UIView *)platterView;
-(void)setContentHost:(id)arg1;
-(UIViewController*<CSAdjunctItemHosting>)contentHost;

@end

