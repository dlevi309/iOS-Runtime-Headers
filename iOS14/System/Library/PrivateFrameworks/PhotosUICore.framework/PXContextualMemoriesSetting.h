/*
* Generated on Thursday, January 14, 2021 at 2:22:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

@class NSString;


@protocol PXContextualMemoriesSetting <NSObject>
@property (nonatomic,readonly) NSString * headerTitle; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * subtitle; 
@optional
-(NSString *)subtitle;

@required
-(NSString *)headerTitle;
-(void)resetToDefault;
-(NSString *)title;

@end

