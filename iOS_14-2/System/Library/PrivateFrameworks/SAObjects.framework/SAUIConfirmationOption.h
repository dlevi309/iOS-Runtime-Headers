/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)active;
-(id)groupIdentifier;
-(void)setActive:(BOOL)arg1 ;
-(id)encodedClassName;
-(void)setIconLabel:(NSString *)arg1 ;
-(void)setSpeechDuration:(NSNumber *)arg1 ;
-(void)setIconType:(NSString *)arg1 ;
-(void)setType:(NSString *)arg1 ;
-(NSArray *)commands;
-(NSNumber *)speechDuration;
-(void)setCommands:(NSArray *)arg1 ;
-(NSString *)iconType;
-(NSString *)type;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(NSString *)iconLabel;
@end

