/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

@class UITraitCollection;


@protocol SXPresentationEnvironment <NSObject>
@property (nonatomic,readonly) CGSize viewportSize; 
@property (nonatomic,readonly) UIEdgeInsets safeAreaInsets; 
@property (nonatomic,readonly) UITraitCollection * traitCollection; 
@property (nonatomic,readonly) unsigned long long viewingLocation; 
@required
-(UIEdgeInsets)safeAreaInsets;
-(UITraitCollection *)traitCollection;
-(CGSize)viewportSize;
-(unsigned long long)viewingLocation;

@end

