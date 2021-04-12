/*
* Generated on Thursday, January 14, 2021 at 2:25:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

