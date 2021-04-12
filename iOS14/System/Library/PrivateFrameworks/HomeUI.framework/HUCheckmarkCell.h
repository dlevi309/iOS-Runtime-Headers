/*
* Generated on Thursday, January 14, 2021 at 2:24:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUActivityIndicatorCell.h>

@interface HUCheckmarkCell : HUActivityIndicatorCell {

	BOOL _checked;

}

@property (assign,nonatomic) BOOL checked;              //@synthesize checked=_checked - In the implementation block
-(BOOL)checked;
-(void)prepareForReuse;
-(id)description;
-(void)setChecked:(BOOL)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

