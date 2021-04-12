/*
* Generated on Monday, March 1, 2021 at 2:33:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSMutableDictionary, SBHIconAccessoryVisualConfiguration, SBHFolderIconVisualConfiguration, SBHClockIconVisualConfiguration, SBHFloatyFolderVisualConfiguration, SBHSidebarVisualConfiguration, NSString;

@interface SBIconListGridLayoutConfiguration : NSObject <NSCopying, BSDescriptionProviding> {

	NSMutableDictionary* _iconLabelVisualConfigurations;
	unsigned long long _numberOfPortraitColumns;
	unsigned long long _numberOfPortraitRows;
	unsigned long long _numberOfLandscapeColumns;
	unsigned long long _numberOfLandscapeRows;
	SBHIconAccessoryVisualConfiguration* _iconAccessoryVisualConfiguration;
	SBHFolderIconVisualConfiguration* _folderIconVisualConfiguration;
	SBHClockIconVisualConfiguration* _clockIconVisualConfiguration;
	SBHFloatyFolderVisualConfiguration* _floatyFolderVisualConfiguration;
	SBHSidebarVisualConfiguration* _sidebarVisualConfiguration;
	UIEdgeInsets _portraitLayoutInsets;
	UIEdgeInsets _landscapeLayoutInsets;
	SBIconImageInfo _iconImageInfo;

}

@property (assign,nonatomic) unsigned long long numberOfPortraitColumns;                                        //@synthesize numberOfPortraitColumns=_numberOfPortraitColumns - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfPortraitRows;                                           //@synthesize numberOfPortraitRows=_numberOfPortraitRows - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfLandscapeColumns;                                       //@synthesize numberOfLandscapeColumns=_numberOfLandscapeColumns - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfLandscapeRows;                                          //@synthesize numberOfLandscapeRows=_numberOfLandscapeRows - In the implementation block
@property (assign,nonatomic) UIEdgeInsets portraitLayoutInsets;                                                 //@synthesize portraitLayoutInsets=_portraitLayoutInsets - In the implementation block
@property (assign,nonatomic) UIEdgeInsets landscapeLayoutInsets;                                                //@synthesize landscapeLayoutInsets=_landscapeLayoutInsets - In the implementation block
@property (assign,nonatomic) SBIconImageInfo iconImageInfo;                                                     //@synthesize iconImageInfo=_iconImageInfo - In the implementation block
@property (nonatomic,copy) SBHIconAccessoryVisualConfiguration * iconAccessoryVisualConfiguration;              //@synthesize iconAccessoryVisualConfiguration=_iconAccessoryVisualConfiguration - In the implementation block
@property (nonatomic,copy) SBHFolderIconVisualConfiguration * folderIconVisualConfiguration;                    //@synthesize folderIconVisualConfiguration=_folderIconVisualConfiguration - In the implementation block
@property (nonatomic,copy) SBHClockIconVisualConfiguration * clockIconVisualConfiguration;                      //@synthesize clockIconVisualConfiguration=_clockIconVisualConfiguration - In the implementation block
@property (nonatomic,copy) SBHFloatyFolderVisualConfiguration * floatyFolderVisualConfiguration;                //@synthesize floatyFolderVisualConfiguration=_floatyFolderVisualConfiguration - In the implementation block
@property (nonatomic,copy) SBHSidebarVisualConfiguration * sidebarVisualConfiguration;                          //@synthesize sidebarVisualConfiguration=_sidebarVisualConfiguration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(SBIconImageInfo)iconImageInfo;
-(SBHIconAccessoryVisualConfiguration *)iconAccessoryVisualConfiguration;
-(SBHFolderIconVisualConfiguration *)folderIconVisualConfiguration;
-(void)setIconImageInfo:(SBIconImageInfo)arg1 ;
-(SBHFloatyFolderVisualConfiguration *)floatyFolderVisualConfiguration;
-(void)setNumberOfPortraitRows:(unsigned long long)arg1 ;
-(void)setNumberOfPortraitColumns:(unsigned long long)arg1 ;
-(void)setNumberOfLandscapeRows:(unsigned long long)arg1 ;
-(void)setNumberOfLandscapeColumns:(unsigned long long)arg1 ;
-(void)setPortraitLayoutInsets:(UIEdgeInsets)arg1 ;
-(void)setLandscapeLayoutInsets:(UIEdgeInsets)arg1 ;
-(SBHClockIconVisualConfiguration *)clockIconVisualConfiguration;
-(SBHSidebarVisualConfiguration *)sidebarVisualConfiguration;
-(void)setIconLabelVisualConfiguration:(id)arg1 forContentSizeCategory:(id)arg2 ;
-(void)setSidebarVisualConfiguration:(SBHSidebarVisualConfiguration *)arg1 ;
-(id)iconLabelVisualConfigurationForContentSizeCategory:(id)arg1 ;
-(unsigned long long)numberOfPortraitColumns;
-(unsigned long long)numberOfPortraitRows;
-(unsigned long long)numberOfLandscapeColumns;
-(unsigned long long)numberOfLandscapeRows;
-(UIEdgeInsets)portraitLayoutInsets;
-(UIEdgeInsets)landscapeLayoutInsets;
-(void)setIconAccessoryVisualConfiguration:(SBHIconAccessoryVisualConfiguration *)arg1 ;
-(void)setFolderIconVisualConfiguration:(SBHFolderIconVisualConfiguration *)arg1 ;
-(void)setClockIconVisualConfiguration:(SBHClockIconVisualConfiguration *)arg1 ;
-(void)setFloatyFolderVisualConfiguration:(SBHFloatyFolderVisualConfiguration *)arg1 ;
@end

