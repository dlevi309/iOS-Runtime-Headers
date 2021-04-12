/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
*/

#import <RemoteUI/RemoteUI-Structs.h>
#import <RemoteUI/RemoteUITableViewCell.h>

@interface RUIVariableHeightCell : RemoteUITableViewCell {

	BOOL _supportsAccessory;

}

@property (assign,nonatomic) BOOL supportsAccessory;              //@synthesize supportsAccessory=_supportsAccessory - In the implementation block
-(double)height;
-(void)layoutSubviews;
-(CGSize)sizeForTextLabel:(id)arg1 width:(double)arg2 ;
-(BOOL)supportsAccessory;
-(void)setSupportsAccessory:(BOOL)arg1 ;
@end

