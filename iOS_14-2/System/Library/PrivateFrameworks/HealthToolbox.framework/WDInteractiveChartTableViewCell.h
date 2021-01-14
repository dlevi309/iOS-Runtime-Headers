/*
* Generated on Thursday, January 14, 2021 at 2:27:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/

#import <HealthUI/HKViewTableViewCell.h>
#import <libobjc.A.dylib/WDDisplayTypeDetailViewControllerChartCellType.h>

@class NSString;

@interface WDInteractiveChartTableViewCell : HKViewTableViewCell <WDDisplayTypeDetailViewControllerChartCellType> {

	unsigned long long _displayMode;
	unsigned long long _marginMode;

}

@property (assign,nonatomic) unsigned long long displayMode;              //@synthesize displayMode=_displayMode - In the implementation block
@property (assign,nonatomic) unsigned long long marginMode;               //@synthesize marginMode=_marginMode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultReuseIdentifier;
-(void)setTimeScope:(long long)arg1 ;
-(unsigned long long)displayMode;
-(void)setDisplayMode:(unsigned long long)arg1 ;
-(void)setMarginMode:(unsigned long long)arg1 ;
-(void)setPrimaryValueSource:(id)arg1 secondaryValueSource:(id)arg2 chartSource:(id)arg3 ;
-(unsigned long long)marginMode;
@end

