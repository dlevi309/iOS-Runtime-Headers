/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
*/

#import <SpringBoardServices/SpringBoardServices-Structs.h>
#import <SpringBoardServices/SBSUserNotificationTextFieldDefinition.h>

@class NSString;

@interface SBSMutableUserNotificationTextFieldDefinition : SBSUserNotificationTextFieldDefinition

@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * value; 
@property (assign,getter=isSecure,nonatomic) BOOL secure; 
@property (assign,nonatomic) unsigned long long maxLength; 
@property (assign,nonatomic) long long keyboardType; 
@property (assign,nonatomic) long long autocapitalizationType; 
@property (assign,nonatomic) long long autocorrectionType; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setValue:(NSString *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setAutocorrectionType:(long long)arg1 ;
-(void)setAutocapitalizationType:(long long)arg1 ;
-(void)setKeyboardType:(long long)arg1 ;
-(void)setMaxLength:(unsigned long long)arg1 ;
-(void)setSecure:(BOOL)arg1 ;
@end

