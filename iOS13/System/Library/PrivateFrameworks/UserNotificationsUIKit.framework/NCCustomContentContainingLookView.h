/*
* Generated on Monday, March 1, 2021 at 2:33:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
*/

@class UITapGestureRecognizer;


@protocol NCCustomContentContainingLookView <PLPlatter,PLTitled,PLExpandedPlatter>
@property (assign,nonatomic) unsigned long long customContentLocation; 
@property (assign,nonatomic) BOOL hidesNotificationContent; 
@property (nonatomic,readonly) UITapGestureRecognizer * lookViewTapGestureRecognizer; 
@required
-(unsigned long long)customContentLocation;
-(void)setCustomContentLocation:(unsigned long long)arg1;
-(BOOL)hidesNotificationContent;
-(void)setHidesNotificationContent:(BOOL)arg1;
-(UITapGestureRecognizer *)lookViewTapGestureRecognizer;

@end

