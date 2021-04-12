/*
* Generated on Thursday, January 14, 2021 at 2:24:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/


#import <HomeUI/HomeUI-Structs.h>
@class NSNumber;

@interface HUQuickControlCollectionViewControllerLayoutOptions : NSObject {

	double _rowSpacing;
	double _interitemSpacingForExtraSmallControlSize;
	double _interitemSpacingForSmallControlSize;
	double _interitemSpacingForRegularControlSize;
	double _interitemSpacingForLargeControlSize;
	double _minimumSectionSpacing;
	double _minimumNavBarToControlsSpacing;
	double _minimumSectionToSensorSectionSpacing;
	double _thermostatSectionSpacingOverride;
	unsigned long long _preferredLayoutStyle;
	unsigned long long _titlePosition;
	NSNumber* _overrideSizeSubclass;
	CGSize _viewSize;

}

@property (nonatomic,retain) NSNumber * overrideSizeSubclass;                              //@synthesize overrideSizeSubclass=_overrideSizeSubclass - In the implementation block
@property (assign,nonatomic) double rowSpacing;                                            //@synthesize rowSpacing=_rowSpacing - In the implementation block
@property (assign,nonatomic) double interitemSpacingForExtraSmallControlSize;              //@synthesize interitemSpacingForExtraSmallControlSize=_interitemSpacingForExtraSmallControlSize - In the implementation block
@property (assign,nonatomic) double interitemSpacingForSmallControlSize;                   //@synthesize interitemSpacingForSmallControlSize=_interitemSpacingForSmallControlSize - In the implementation block
@property (assign,nonatomic) double interitemSpacingForRegularControlSize;                 //@synthesize interitemSpacingForRegularControlSize=_interitemSpacingForRegularControlSize - In the implementation block
@property (assign,nonatomic) double interitemSpacingForLargeControlSize;                   //@synthesize interitemSpacingForLargeControlSize=_interitemSpacingForLargeControlSize - In the implementation block
@property (assign,nonatomic) double minimumSectionSpacing;                                 //@synthesize minimumSectionSpacing=_minimumSectionSpacing - In the implementation block
@property (assign,nonatomic) double minimumNavBarToControlsSpacing;                        //@synthesize minimumNavBarToControlsSpacing=_minimumNavBarToControlsSpacing - In the implementation block
@property (assign,nonatomic) double minimumSectionToSensorSectionSpacing;                  //@synthesize minimumSectionToSensorSectionSpacing=_minimumSectionToSensorSectionSpacing - In the implementation block
@property (assign,nonatomic) double thermostatSectionSpacingOverride;                      //@synthesize thermostatSectionSpacingOverride=_thermostatSectionSpacingOverride - In the implementation block
@property (assign,nonatomic) unsigned long long preferredLayoutStyle;                      //@synthesize preferredLayoutStyle=_preferredLayoutStyle - In the implementation block
@property (assign,nonatomic) unsigned long long titlePosition;                             //@synthesize titlePosition=_titlePosition - In the implementation block
@property (nonatomic,readonly) CGSize viewSize;                                            //@synthesize viewSize=_viewSize - In the implementation block
@property (nonatomic,readonly) long long viewSizeSubclass; 
+(id)defaultOptions;
+(id)defaultOptionsForViewSize:(CGSize)arg1 ;
-(CGSize)viewSize;
-(double)rowSpacing;
-(void)setRowSpacing:(double)arg1 ;
-(unsigned long long)preferredLayoutStyle;
-(long long)viewSizeSubclass;
-(double)minimumSectionToSensorSectionSpacing;
-(void)setTitlePosition:(unsigned long long)arg1 ;
-(void)setPreferredLayoutStyle:(unsigned long long)arg1 ;
-(double)interitemSpacingForExtraSmallControlSize;
-(double)interitemSpacingForSmallControlSize;
-(double)interitemSpacingForRegularControlSize;
-(double)interitemSpacingForLargeControlSize;
-(double)minimumNavBarToControlsSpacing;
-(double)minimumSectionSpacing;
-(double)thermostatSectionSpacingOverride;
-(unsigned long long)titlePosition;
-(id)initWithViewSize:(CGSize)arg1 ;
-(void)setMinimumSectionSpacing:(double)arg1 ;
-(void)setMinimumNavBarToControlsSpacing:(double)arg1 ;
-(void)setMinimumSectionToSensorSectionSpacing:(double)arg1 ;
-(void)setThermostatSectionSpacingOverride:(double)arg1 ;
-(void)setInteritemSpacingForExtraSmallControlSize:(double)arg1 ;
-(void)setInteritemSpacingForSmallControlSize:(double)arg1 ;
-(void)setInteritemSpacingForRegularControlSize:(double)arg1 ;
-(void)setInteritemSpacingForLargeControlSize:(double)arg1 ;
-(NSNumber *)overrideSizeSubclass;
-(void)setOverrideSizeSubclass:(NSNumber *)arg1 ;
@end

