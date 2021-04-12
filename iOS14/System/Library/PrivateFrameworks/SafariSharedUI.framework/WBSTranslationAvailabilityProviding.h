/*
* Generated on Thursday, January 14, 2021 at 2:24:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/

@class NSArray;


@protocol WBSTranslationAvailabilityProviding <NSObject>
@property (nonatomic,readonly) NSArray * userPreferredTargetLocales; 
@required
-(NSArray *)userPreferredTargetLocales;
-(void)isTranslationSupportedForCurrentRegionWithCompletionHandler:(/*^block*/id)arg1;
-(void)supportedLocalePairsWithCompletionHandler:(/*^block*/id)arg1;

@end

