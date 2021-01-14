/*
* Generated on Thursday, January 14, 2021 at 2:25:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
*/

@class NSString, NSArray, UIImage, UIView;


@protocol NCNotificationStaticContentAccepting <PLTitled>
@property (nonatomic,copy) NSString * primaryText; 
@property (nonatomic,copy) NSString * primarySubtitleText; 
@property (nonatomic,copy) NSString * secondaryText; 
@property (nonatomic,retain) NSArray * interfaceActions; 
@property (nonatomic,copy) NSString * summaryText; 
@property (nonatomic,retain) UIImage * thumbnail; 
@property (nonatomic,retain) UIView * accessoryView; 
@property (assign,nonatomic) unsigned long long maximumNumberOfPrimaryTextLines; 
@property (assign,nonatomic) unsigned long long maximumNumberOfPrimaryLargeTextLines; 
@property (assign,nonatomic) unsigned long long maximumNumberOfSecondaryTextLines; 
@property (assign,nonatomic) unsigned long long maximumNumberOfSecondaryLargeTextLines; 
@optional
-(UIImage *)thumbnail;
-(UIView *)accessoryView;
-(void)setAccessoryView:(id)arg1;
-(void)setSummaryText:(id)arg1;
-(NSString *)summaryText;
-(void)setThumbnail:(id)arg1;
-(void)setMaximumNumberOfPrimaryTextLines:(unsigned long long)arg1;
-(void)setMaximumNumberOfPrimaryLargeTextLines:(unsigned long long)arg1;
-(void)setMaximumNumberOfSecondaryTextLines:(unsigned long long)arg1;
-(void)setMaximumNumberOfSecondaryLargeTextLines:(unsigned long long)arg1;
-(unsigned long long)maximumNumberOfPrimaryTextLines;
-(unsigned long long)maximumNumberOfPrimaryLargeTextLines;
-(unsigned long long)maximumNumberOfSecondaryTextLines;
-(unsigned long long)maximumNumberOfSecondaryLargeTextLines;

@required
-(void)setInterfaceActions:(id)arg1;
-(NSArray *)interfaceActions;
-(NSString *)primaryText;
-(void)setPrimaryText:(id)arg1;
-(void)setSecondaryText:(id)arg1;
-(NSString *)secondaryText;
-(NSString *)primarySubtitleText;
-(void)setPrimarySubtitleText:(id)arg1;

@end

