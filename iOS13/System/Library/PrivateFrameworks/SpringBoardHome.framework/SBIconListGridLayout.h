/*
* Generated on Monday, March 1, 2021 at 2:33:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <libobjc.A.dylib/SBIconListLayout.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class SBHIconAccessoryVisualConfiguration, SBHFolderIconVisualConfiguration, SBHClockIconVisualConfiguration, SBHFloatyFolderVisualConfiguration, SBHSidebarVisualConfiguration, NSMutableDictionary, UIFont, SBIconListGridLayoutConfiguration, NSString;

@interface SBIconListGridLayout : NSObject <SBIconListLayout, BSDescriptionProviding> {

	NSMutableDictionary* _labelFonts;
	UIFont* _accessoryFont;
	UIFont* _accessoryBoldFont;
	SBIconListGridLayoutConfiguration* _layoutConfiguration;

}

@property (nonatomic,copy,readonly) SBIconListGridLayoutConfiguration * layoutConfiguration;                             //@synthesize layoutConfiguration=_layoutConfiguration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long maximumIconCount; 
@property (nonatomic,readonly) SBIconImageInfo iconImageInfo; 
@property (nonatomic,copy,readonly) SBHIconAccessoryVisualConfiguration * iconAccessoryVisualConfiguration; 
@property (nonatomic,copy,readonly) SBHFolderIconVisualConfiguration * folderIconVisualConfiguration; 
@property (nonatomic,copy,readonly) SBHClockIconVisualConfiguration * clockIconVisualConfiguration; 
@property (nonatomic,copy,readonly) SBHFloatyFolderVisualConfiguration * floatyFolderVisualConfiguration; 
@property (nonatomic,copy,readonly) SBHSidebarVisualConfiguration * sidebarVisualConfiguration; 
@property (nonatomic,readonly) BOOL usesAlternateLayout; 
-(id)init;
-(NSString *)description;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(SBIconImageInfo)iconImageInfo;
-(SBHIconAccessoryVisualConfiguration *)iconAccessoryVisualConfiguration;
-(SBHFolderIconVisualConfiguration *)folderIconVisualConfiguration;
-(SBHFloatyFolderVisualConfiguration *)floatyFolderVisualConfiguration;
-(SBHClockIconVisualConfiguration *)clockIconVisualConfiguration;
-(SBHSidebarVisualConfiguration *)sidebarVisualConfiguration;
-(id)initWithLayoutConfiguration:(id)arg1 ;
-(id)labelVisualConfigurationForContentSizeCategory:(id)arg1 options:(unsigned long long)arg2 ;
-(id)labelFontForContentSizeCategory:(id)arg1 options:(unsigned long long)arg2 ;
-(unsigned long long)maximumIconCount;
-(unsigned long long)numberOfColumnsForOrientation:(long long)arg1 ;
-(unsigned long long)numberOfRowsForOrientation:(long long)arg1 ;
-(UIEdgeInsets)layoutInsetsForOrientation:(long long)arg1 ;
-(BOOL)usesAlternateLayout;
-(void)noteIcons:(id)arg1 didDropAtCoordinate:(SBIconCoordinate)arg2 inList:(id)arg3 ;
-(SBIconCoordinate)iconCoordinateForIndex:(unsigned long long)arg1 forOrientation:(long long)arg2 inList:(id)arg3 ;
-(id)accessoryFontForContentSizeCategory:(id)arg1 options:(unsigned long long)arg2 ;
-(id)accessoryBoldFont;
-(id)accessoryFont;
-(SBIconListGridLayoutConfiguration *)layoutConfiguration;
@end

