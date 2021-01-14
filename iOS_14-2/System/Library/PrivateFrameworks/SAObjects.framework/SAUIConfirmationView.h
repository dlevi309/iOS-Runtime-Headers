/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SAAceView.h>

@class NSArray, NSString;

@interface SAUIConfirmationView : SAAceView

@property (nonatomic,copy) NSArray * allConfirmationOptions; 
@property (nonatomic,copy) NSString * cancelTrigger; 
@property (nonatomic,copy) NSArray * confirmCommands; 
@property (nonatomic,copy) NSString * confirmText; 
@property (nonatomic,copy) NSArray * denyCommands; 
@property (nonatomic,copy) NSString * denyText; 
@property (nonatomic,copy) NSString * style; 
@property (nonatomic,copy) NSString * subtitle; 
@property (nonatomic,copy) NSString * title; 
+(id)confirmationView;
+(id)confirmationViewWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)subtitle;
-(void)setTitle:(NSString *)arg1 ;
-(NSArray *)allConfirmationOptions;
-(void)setAllConfirmationOptions:(NSArray *)arg1 ;
-(NSString *)cancelTrigger;
-(void)setCancelTrigger:(NSString *)arg1 ;
-(NSArray *)confirmCommands;
-(void)setConfirmCommands:(NSArray *)arg1 ;
-(NSString *)confirmText;
-(void)setConfirmText:(NSString *)arg1 ;
-(NSArray *)denyCommands;
-(void)setDenyCommands:(NSArray *)arg1 ;
-(void)setDenyText:(NSString *)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)denyText;
-(void)setStyle:(NSString *)arg1 ;
-(NSString *)style;
-(NSString *)title;
@end

