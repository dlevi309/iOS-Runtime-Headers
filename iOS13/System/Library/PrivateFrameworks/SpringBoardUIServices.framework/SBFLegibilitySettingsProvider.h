/*
* Generated on Monday, March 1, 2021 at 2:32:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
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

