/*
* Generated on Thursday, January 14, 2021 at 2:20:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/

#import <UIKitCore/UITableViewCell.h>

@class AlphanumericPINTextField;

@interface AlphanumericPINTableViewCell : UITableViewCell {

	AlphanumericPINTextField* _pinTextField;

}

@property (nonatomic,retain) AlphanumericPINTextField * pinTextField;              //@synthesize pinTextField=_pinTextField - In the implementation block
-(void)layoutSubviews;
-(AlphanumericPINTextField *)pinTextField;
-(void)setPinTextField:(AlphanumericPINTextField *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

