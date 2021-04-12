/*
* Generated on Monday, March 1, 2021 at 2:35:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaBridgeUI.framework/NanoMediaBridgeUI
*/

#import <libobjc.A.dylib/NMBUIOnboardingDataSource.h>

@class NSArray, NSString;

@interface NMBUIMusicOnboardingDataSource : NSObject <NMBUIOnboardingDataSource> {

	NSArray* _recommendationSpecifiers;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)instructionIconImage;
-(id)instructionTitle;
-(id)instructionDescription;
-(id)instructionConfirmTitle;
-(void)persistConfigurations;
-(void)_setRecommendationSelected:(id)arg1 withSpecifier:(id)arg2 ;
-(id)_recommendationSelected:(id)arg1 ;
-(id)configurationPlaceholderArtworkImage;
-(id)welcomeTitle;
-(id)welcomeDescription;
-(id)welcomeIconImage;
-(id)arrowIconImage;
-(id)welcomeConfirmTitle;
-(id)welcomeCancelTitle;
-(id)configurationTitle;
-(id)configurationHeaderDescription;
-(id)configurationFooterDescription;
-(id)configurationConfirmTitle;
-(id)configurationConfirmSubtitle;
-(long long)numberOfConfigurationOptions;
-(id)optionSpecifierForRow:(long long)arg1 ;
-(id)initWithRecommendations:(id)arg1 ;
@end

