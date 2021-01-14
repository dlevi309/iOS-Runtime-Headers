/*
* Generated on Thursday, January 14, 2021 at 2:26:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CarPlay.framework/CarPlay
*/

@class CPWindow, UITraitCollection;


@protocol CPWindowProviding <NSObject>
@property (nonatomic,readonly) CPWindow * carWindow; 
@property (nonatomic,readonly) UITraitCollection * carTraitCollection; 
@required
-(long long)activationState;
-(UITraitCollection *)carTraitCollection;
-(void)updateLayoutGuideWithInsets:(UIEdgeInsets)arg1;
-(CPWindow *)carWindow;

@end

