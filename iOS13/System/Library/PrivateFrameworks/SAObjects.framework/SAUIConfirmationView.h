/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)style;
-(void)setStyle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(void)setSubtitle:(NSString *)arg1 ;
-(id)encodedClassName;
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
-(NSString *)denyText;
-(void)setDenyText:(NSString *)arg1 ;
@end

