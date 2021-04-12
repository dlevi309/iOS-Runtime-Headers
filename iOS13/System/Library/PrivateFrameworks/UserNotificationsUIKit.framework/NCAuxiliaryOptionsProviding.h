/*
* Generated on Monday, March 1, 2021 at 2:33:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
*/

@class NSString;


@protocol NCAuxiliaryOptionsProviding <NSObject>
@property (nonatomic,copy,readonly) NSString * optionsSummaryTitle; 
@property (nonatomic,copy,readonly) NSString * optionsSummaryText; 
@property (nonatomic,readonly) unsigned long long numberOfOptionButtons; 
@property (assign,nonatomic) BOOL auxiliaryOptionsVisible; 
@optional
-(NSString *)optionsSummaryText;
-(unsigned long long)numberOfOptionButtons;
-(BOOL)auxiliaryOptionsVisible;
-(void)setAuxiliaryOptionsVisible:(BOOL)arg1;
-(NSString *)optionsSummaryTitle;

@required
-(void)configureOptionButtons:(id)arg1;

@end

