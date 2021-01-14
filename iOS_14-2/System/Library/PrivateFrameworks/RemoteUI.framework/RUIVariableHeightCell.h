/*
* Generated on Thursday, January 14, 2021 at 2:28:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
*/

#import <RemoteUI/RemoteUI-Structs.h>
#import <RemoteUI/RemoteUITableViewCell.h>

@interface RUIVariableHeightCell : RemoteUITableViewCell {

	BOOL _supportsAccessory;
	long long _detailTextAlignment;

}

@property (assign,nonatomic) BOOL supportsAccessory;                     //@synthesize supportsAccessory=_supportsAccessory - In the implementation block
@property (assign,nonatomic) long long detailTextAlignment;              //@synthesize detailTextAlignment=_detailTextAlignment - In the implementation block
-(double)height;
-(void)layoutSubviews;
-(CGSize)sizeForTextLabel:(id)arg1 width:(double)arg2 ;
-(BOOL)supportsAccessory;
-(void)setSupportsAccessory:(BOOL)arg1 ;
-(long long)detailTextAlignment;
-(void)setDetailTextAlignment:(long long)arg1 ;
@end

