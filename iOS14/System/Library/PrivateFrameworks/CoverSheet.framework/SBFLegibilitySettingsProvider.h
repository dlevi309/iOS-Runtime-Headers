/*
* Generated on Thursday, January 14, 2021 at 2:26:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/

@class _UILegibilitySettings;


@protocol SBFLegibilitySettingsProvider <NSObject>
@property (nonatomic,readonly) _UILegibilitySettings * legibilitySettings; 
@property (assign,nonatomic,__weak) id<SBFLegibilitySettingsProviderDelegate> delegate; 
@required
-(id<SBFLegibilitySettingsProviderDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(_UILegibilitySettings *)legibilitySettings;

@end

