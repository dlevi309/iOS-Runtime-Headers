/*
* Generated on Thursday, January 14, 2021 at 2:27:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/

#import <UIKitCore/UITableViewCell.h>

@class WDDisplayTypeDescriptionView, HKDisplayType;

@interface WDDisplayTypeDescriptionTableViewCell : UITableViewCell {

	WDDisplayTypeDescriptionView* _descriptionView;
	BOOL _showAttributionText;
	HKDisplayType* _displayType;

}

@property (assign,nonatomic) BOOL showAttributionText;                 //@synthesize showAttributionText=_showAttributionText - In the implementation block
@property (nonatomic,retain) HKDisplayType * displayType;              //@synthesize displayType=_displayType - In the implementation block
+(double)minimumHeight;
+(id)defaultReuseIdentifier;
-(HKDisplayType *)displayType;
-(void)setDisplayType:(HKDisplayType *)arg1 ;
-(void)setupSubviews;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(id)initWithDisplayType:(id)arg1 showAttributionText:(BOOL)arg2 reuseIdentifier:(id)arg3 ;
-(BOOL)showAttributionText;
-(void)setShowAttributionText:(BOOL)arg1 ;
@end

