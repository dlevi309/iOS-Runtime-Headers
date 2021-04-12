/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <UIKitCore/UITableViewCell.h>

@class NSString;

@interface HUUserManagementUserCell : UITableViewCell {

	NSString* _displayName;
	NSString* _invitationStatusString;

}

@property (nonatomic,retain) NSString * displayName;                         //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) NSString * invitationStatusString;              //@synthesize invitationStatusString=_invitationStatusString - In the implementation block
-(void)layoutSubviews;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSString *)displayName;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setInvitationStatusString:(NSString *)arg1 ;
-(NSString *)invitationStatusString;
@end

