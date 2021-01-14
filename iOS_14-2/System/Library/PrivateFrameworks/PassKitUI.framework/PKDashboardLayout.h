/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/


@protocol PKDashboardLayout <NSObject>
@property (assign,nonatomic) BOOL fade; 
@optional
-(BOOL)fade;
-(void)setFade:(BOOL)arg1;
-(void)hideContent;
-(void)revealContentAnimated:(BOOL)arg1;

@required
-(UIEdgeInsets*)insetsForSection:(long long)arg1;

@end

