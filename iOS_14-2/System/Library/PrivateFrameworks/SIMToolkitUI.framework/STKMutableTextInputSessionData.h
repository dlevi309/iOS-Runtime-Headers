/*
* Generated on Thursday, January 14, 2021 at 2:25:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SIMToolkitUI.framework/SIMToolkitUI
*/

#import <SIMToolkitUI/STKTextInputSessionData.h>

@class NSString;

@interface STKMutableTextInputSessionData : STKTextInputSessionData

@property (nonatomic,copy) NSString * defaultText; 
@property (assign,nonatomic) BOOL isSecure; 
@property (assign,nonatomic) BOOL isDigitsOnly; 
@property (assign,nonatomic) unsigned long long minimumInputLength; 
@property (assign,nonatomic) unsigned long long maximumInputLength; 
-(void)setDefaultText:(NSString *)arg1 ;
-(void)setIsSecure:(BOOL)arg1 ;
-(void)setIsDigitsOnly:(BOOL)arg1 ;
-(void)setMinimumInputLength:(unsigned long long)arg1 ;
-(void)setMaximumInputLength:(unsigned long long)arg1 ;
@end

