/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainObject.h>

@class NSNumber, NSString;

@interface SATimerObject : SADomainObject

@property (nonatomic,copy) NSNumber * isFiring; 
@property (nonatomic,copy) NSString * state; 
@property (nonatomic,copy) NSNumber * timerValue; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * type; 
+(id)object;
+(id)objectWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
-(NSString *)state;
-(id)groupIdentifier;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)setState:(NSString *)arg1 ;
-(id)encodedClassName;
-(NSNumber *)isFiring;
-(void)setIsFiring:(NSNumber *)arg1 ;
-(NSNumber *)timerValue;
-(void)setTimerValue:(NSNumber *)arg1 ;
@end

