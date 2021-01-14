/*
* Generated on Thursday, January 14, 2021 at 2:24:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <UIKitCore/UIView.h>

@class NSNumber, UILabel;

@interface HUSetupCodeFieldItem : UIView {

	BOOL _active;
	unsigned long long _itemNumber;
	NSNumber* _value;
	UILabel* _digitLabel;

}

@property (assign,getter=isActive,nonatomic) BOOL active;                //@synthesize active=_active - In the implementation block
@property (nonatomic,retain) UILabel * digitLabel;                       //@synthesize digitLabel=_digitLabel - In the implementation block
@property (assign,nonatomic) unsigned long long itemNumber;              //@synthesize itemNumber=_itemNumber - In the implementation block
@property (nonatomic,retain) NSNumber * value;                           //@synthesize value=_value - In the implementation block
-(void)clear;
-(void)setActive:(BOOL)arg1 ;
-(id)init;
-(BOOL)isActive;
-(void)deactivate;
-(void)activate;
-(void)setValue:(NSNumber *)arg1 ;
-(NSNumber *)value;
-(UILabel *)digitLabel;
-(unsigned long long)itemNumber;
-(void)setItemNumber:(unsigned long long)arg1 ;
-(void)setDigitLabel:(UILabel *)arg1 ;
@end

