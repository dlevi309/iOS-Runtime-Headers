/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)toggleButtonWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)toggleButton;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)onTitle;
-(SABaseCommand *)commandToToggleToOffMode;
-(void)setCommandToToggleToOffMode:(SABaseCommand *)arg1 ;
-(SABaseCommand *)commandToToggleToOnMode;
-(void)setCommandToToggleToOnMode:(SABaseCommand *)arg1 ;
-(NSDictionary *)offIconDynamicImage;
-(void)setOffIconDynamicImage:(NSDictionary *)arg1 ;
-(void)setOffTitle:(NSString *)arg1 ;
-(NSDictionary *)onIconDynamicImage;
-(void)setOnIconDynamicImage:(NSDictionary *)arg1 ;
-(void)setOnTitle:(NSString *)arg1 ;
-(NSString *)offTitle;
@end

