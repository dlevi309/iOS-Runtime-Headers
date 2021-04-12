/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setHeaderTextColor:(SAUIColor *)arg1 ;
-(SAUIColor *)headerTextColor;
-(SAUIColor *)headerBackgroundColor;
-(void)setHeaderBackgroundColor:(SAUIColor *)arg1 ;
-(id)encodedClassName;
-(SAUIColor *)bodyTextColor;
-(void)setBodyTextColor:(SAUIColor *)arg1 ;
-(SAUIColor *)bodyBackgroundColor;
-(void)setBodyBackgroundColor:(SAUIColor *)arg1 ;
-(long long)countDownSeconds;
-(void)setCountDownSeconds:(long long)arg1 ;
@end

