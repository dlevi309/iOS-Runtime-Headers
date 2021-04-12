/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SAAceView.h>

@class SABaseCommand, NSDictionary, NSString;

@interface SALCMToggleButton : SAAceView

@property (nonatomic,retain) SABaseCommand * commandToToggleToOffMode; 
@property (nonatomic,retain) SABaseCommand * commandToToggleToOnMode; 
@property (nonatomic,copy) NSDictionary * offIconDynamicImage; 
@property (nonatomic,copy) NSString * offTitle; 
@property (nonatomic,copy) NSDictionary * onIconDynamicImage; 
@property (nonatomic,copy) NSString * onTitle; 
+(id)toggleButton;
+(id)toggleButtonWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(SABaseCommand *)commandToToggleToOffMode;
-(void)setCommandToToggleToOffMode:(SABaseCommand *)arg1 ;
-(SABaseCommand *)commandToToggleToOnMode;
-(void)setCommandToToggleToOnMode:(SABaseCommand *)arg1 ;
-(NSDictionary *)offIconDynamicImage;
-(void)setOffIconDynamicImage:(NSDictionary *)arg1 ;
-(NSString *)offTitle;
-(void)setOffTitle:(NSString *)arg1 ;
-(NSDictionary *)onIconDynamicImage;
-(void)setOnIconDynamicImage:(NSDictionary *)arg1 ;
-(NSString *)onTitle;
-(void)setOnTitle:(NSString *)arg1 ;
@end

