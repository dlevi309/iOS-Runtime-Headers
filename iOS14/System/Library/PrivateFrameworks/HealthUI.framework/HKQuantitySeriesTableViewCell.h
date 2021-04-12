/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <UIKitCore/UITableViewCell.h>

@class NSArray;

@interface HKQuantitySeriesTableViewCell : UITableViewCell {

	NSArray* _currentConstraints;

}

@property (nonatomic,retain) NSArray * currentConstraints;              //@synthesize currentConstraints=_currentConstraints - In the implementation block
+(id)reuseIdentifier;
-(NSArray *)currentConstraints;
-(void)setCurrentConstraints:(NSArray *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)_configureLabels;
-(void)_configureLayoutForTraitCollection:(id)arg1 ;
-(id)_makeAccessibilityConstraints;
-(id)_makeConstraints;
@end

