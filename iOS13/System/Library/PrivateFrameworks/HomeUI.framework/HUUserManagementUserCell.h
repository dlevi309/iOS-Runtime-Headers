/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setInvitationStatusString:(NSString *)arg1 ;
-(NSString *)invitationStatusString;
@end

