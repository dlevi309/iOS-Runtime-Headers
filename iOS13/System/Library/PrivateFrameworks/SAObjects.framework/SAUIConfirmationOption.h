/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSArray, NSString, NSNumber;

@interface SAUIConfirmationOption : AceObject <SAAceSerializable>

@property (assign,nonatomic) BOOL active; 
@property (nonatomic,copy) NSArray * commands; 
@property (nonatomic,copy) NSString * iconLabel; 
@property (nonatomic,copy) NSString * iconType; 
@property (nonatomic,copy) NSString * label; 
@property (nonatomic,copy) NSNumber * speechDuration; 
@property (nonatomic,copy) NSString * type; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)confirmationOption;
+(id)confirmationOptionWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
-(void)setActive:(BOOL)arg1 ;
-(id)groupIdentifier;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(BOOL)active;
-(NSString *)iconType;
-(void)setIconType:(NSString *)arg1 ;
-(NSArray *)commands;
-(void)setCommands:(NSArray *)arg1 ;
-(id)encodedClassName;
-(NSString *)iconLabel;
-(void)setIconLabel:(NSString *)arg1 ;
-(NSNumber *)speechDuration;
-(void)setSpeechDuration:(NSNumber *)arg1 ;
@end

