/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <UIKitCore/UITableViewCell.h>

@protocol HFIconDescriptor;
@class UILabel, NSString;

@interface HURoomListItemCell : UITableViewCell {

	id<HFIconDescriptor> _roomIconDescriptor;
	UILabel* _nameLabel;

}

@property (nonatomic,readonly) UILabel * nameLabel;                                //@synthesize nameLabel=_nameLabel - In the implementation block
@property (nonatomic,copy) NSString * roomName; 
@property (nonatomic,retain) id<HFIconDescriptor> roomIconDescriptor;              //@synthesize roomIconDescriptor=_roomIconDescriptor - In the implementation block
+(BOOL)requiresConstraintBasedLayout;
-(void)setRoomName:(NSString *)arg1 ;
-(void)prepareForReuse;
-(NSString *)roomName;
-(UILabel *)nameLabel;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(id<HFIconDescriptor>)roomIconDescriptor;
-(void)setRoomIconDescriptor:(id<HFIconDescriptor>)arg1 ;
@end

