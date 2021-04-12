/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <UIKitCore/UITableViewCell.h>

@class PKFamilyMember, UIImage, PKFamilyMemberRowModel;

@interface PKFamilyMemberTableViewCell : UITableViewCell {

	PKFamilyMember* _familyMember;
	UIImage* _familyMemberImage;
	unsigned long long _state;
	PKFamilyMemberRowModel* _rowModel;

}

@property (nonatomic,retain) PKFamilyMemberRowModel * rowModel;              //@synthesize rowModel=_rowModel - In the implementation block
-(void)setFamilyMemberImage:(id)arg1 ;
-(PKFamilyMemberRowModel *)rowModel;
-(void)prepareForReuse;
-(void)setFamilyMember:(id)arg1 ;
-(void)layoutSubviews;
-(void)setRowModel:(PKFamilyMemberRowModel *)arg1 ;
-(void)setState:(unsigned long long)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

