/*
* Generated on Monday, March 1, 2021 at 2:33:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
*/

@class NSString, NSArray;


@protocol NCAuxiliaryOptionsSupporting <NSObject>
@property (nonatomic,copy) NSString * optionsSummaryText; 
@property (assign,nonatomic) unsigned long long numberOfOptionButtons; 
@property (nonatomic,readonly) NSArray * optionButtons; 
@property (assign,nonatomic) BOOL auxiliaryOptionsVisible; 
@required
-(NSString *)optionsSummaryText;
-(unsigned long long)numberOfOptionButtons;
-(void)setOptionsSummaryText:(id)arg1;
-(void)setNumberOfOptionButtons:(unsigned long long)arg1;
-(NSArray *)optionButtons;
-(BOOL)auxiliaryOptionsVisible;
-(void)setAuxiliaryOptionsVisible:(BOOL)arg1;

@end

