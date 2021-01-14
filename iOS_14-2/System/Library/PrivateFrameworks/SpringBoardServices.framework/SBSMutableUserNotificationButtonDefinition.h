/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
*/

#import <SpringBoardServices/SpringBoardServices-Structs.h>
#import <SpringBoardServices/SBSUserNotificationButtonDefinition.h>

@class NSString;

@interface SBSMutableUserNotificationButtonDefinition : SBSUserNotificationButtonDefinition

@property (nonatomic,copy) NSString * title; 
@property (assign,nonatomic) int presentationStyle; 
@property (assign,nonatomic) BOOL isPreferredButton; 
-(void)setPresentationStyle:(int)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setIsPreferredButton:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

