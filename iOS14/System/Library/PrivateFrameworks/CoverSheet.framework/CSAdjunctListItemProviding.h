/*
* Generated on Thursday, January 14, 2021 at 2:26:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/

@class NSString, SBSLockScreenContentAction, UIView;


@protocol CSAdjunctListItemProviding <NSObject>
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) SBSLockScreenContentAction * action; 
@property (nonatomic,retain) UIView * platterView; 
@property (nonatomic,retain) UIViewController*<CSAdjunctItemHosting> contentHost; 
@required
-(UIView *)platterView;
-(void)setPlatterView:(id)arg1;
-(SBSLockScreenContentAction *)action;
-(NSString *)identifier;
-(void)setContentHost:(id)arg1;
-(UIViewController*<CSAdjunctItemHosting>)contentHost;
-(void)conformsToCSAdjunctListItemProviding;

@end

