/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
*/

#import <SpringBoardServices/SpringBoardServices-Structs.h>
#import <SpringBoardServices/SBSUserNotificationButtonDefinition.h>

@class NSString;

@interface SBSMutableUserNotificationButtonDefinition : SBSUserNotificationButtonDefinition

@property (nonatomic,copy) NSString * title; 
@property (assign,nonatomic) int presentationStyle; 
@property (assign,nonatomic) BOOL isPreferredButton; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setPresentationStyle:(int)arg1 ;
-(void)setIsPreferredButton:(BOOL)arg1 ;
@end

