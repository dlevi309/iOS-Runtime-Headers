/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

@class NSString, NSArray, UIColor;


@protocol PXProtoFeature <NSObject>
@property (nonatomic,readonly) long long featureKind; 
@property (nonatomic,readonly) long long featureGroupIndex; 
@property (nonatomic,readonly) NSString * featureLocalizedTitle; 
@property (nonatomic,readonly) NSArray * featurePeople; 
@property (nonatomic,readonly) double featureScore; 
@property (nonatomic,readonly) UIColor * featureTintColor; 
@property (nonatomic,readonly) UIColor * featureSelectedTintColor; 
@optional
-(NSString *)featureLocalizedTitle;
-(NSArray *)featurePeople;
-(double)featureScore;
-(UIColor *)featureTintColor;
-(UIColor *)featureSelectedTintColor;

@required
-(long long)featureKind;
-(long long)featureGroupIndex;

@end

