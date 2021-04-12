/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <UIKitCore/UITableViewCell.h>

@class NSArray;

@interface HKQuantitySeriesTableViewCell : UITableViewCell {

	NSArray* _currentConstraints;

}

@property (nonatomic,retain) NSArray * currentConstraints;              //@synthesize currentConstraints=_currentConstraints - In the implementation block
+(id)reuseIdentifier;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(NSArray *)currentConstraints;
-(void)setCurrentConstraints:(NSArray *)arg1 ;
-(id)_makeConstraints;
-(void)_configureLabels;
-(void)_configureLayoutForTraitCollection:(id)arg1 ;
-(id)_makeAccessibilityConstraints;
@end

