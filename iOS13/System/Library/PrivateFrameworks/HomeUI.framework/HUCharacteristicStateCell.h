/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <UIKitCore/UITableViewCell.h>

@class NSString;

@interface HUCharacteristicStateCell : UITableViewCell {

	BOOL _enabled;

}

@property (nonatomic,copy) NSString * titleText; 
@property (nonatomic,copy) NSString * valueText; 
@property (assign,nonatomic) BOOL enabled;                    //@synthesize enabled=_enabled - In the implementation block
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setTitleText:(NSString *)arg1 ;
-(NSString *)titleText;
-(void)setValueText:(NSString *)arg1 ;
-(NSString *)valueText;
@end

