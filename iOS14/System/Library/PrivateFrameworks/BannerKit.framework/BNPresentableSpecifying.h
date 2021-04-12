/*
* Generated on Thursday, January 14, 2021 at 2:26:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BannerKit.framework/BannerKit
*/


@protocol BNPresentableSpecifying <BNPresentableUniquelyIdentifying>
@property (nonatomic,readonly) long long presentableType; 
@property (nonatomic,readonly) CGSize preferredContentSize; 
@property (nonatomic,readonly) UIEdgeInsets contentOutsets; 
@required
-(CGSize)preferredContentSize;
-(long long)presentableType;
-(UIEdgeInsets)contentOutsets;

@end

