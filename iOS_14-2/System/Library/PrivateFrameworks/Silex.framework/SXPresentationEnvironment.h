/*
* Generated on Thursday, January 14, 2021 at 2:24:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

@class UITraitCollection;


@protocol SXPresentationEnvironment <NSObject>
@property (nonatomic,readonly) CGSize viewportSize; 
@property (nonatomic,readonly) UIEdgeInsets safeAreaInsets; 
@property (nonatomic,readonly) UITraitCollection * presentationTraitCollection; 
@property (nonatomic,readonly) unsigned long long viewingLocation; 
@required
-(UIEdgeInsets)safeAreaInsets;
-(UITraitCollection *)presentationTraitCollection;
-(CGSize)viewportSize;
-(unsigned long long)viewingLocation;

@end

