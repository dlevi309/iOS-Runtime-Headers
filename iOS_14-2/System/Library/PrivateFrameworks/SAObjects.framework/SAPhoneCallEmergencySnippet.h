/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SAPhoneCallSnippet.h>

@class SAUIColor;

@interface SAPhoneCallEmergencySnippet : SAPhoneCallSnippet

@property (nonatomic,retain) SAUIColor * bodyBackgroundColor; 
@property (nonatomic,retain) SAUIColor * bodyTextColor; 
@property (assign,nonatomic) long long countDownSeconds; 
@property (nonatomic,retain) SAUIColor * headerBackgroundColor; 
@property (nonatomic,retain) SAUIColor * headerTextColor; 
+(id)callEmergencySnippet;
+(id)callEmergencySnippetWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setHeaderTextColor:(SAUIColor *)arg1 ;
-(SAUIColor *)bodyBackgroundColor;
-(void)setBodyBackgroundColor:(SAUIColor *)arg1 ;
-(SAUIColor *)headerTextColor;
-(void)setHeaderBackgroundColor:(SAUIColor *)arg1 ;
-(SAUIColor *)headerBackgroundColor;
-(SAUIColor *)bodyTextColor;
-(void)setBodyTextColor:(SAUIColor *)arg1 ;
-(long long)countDownSeconds;
-(void)setCountDownSeconds:(long long)arg1 ;
@end

