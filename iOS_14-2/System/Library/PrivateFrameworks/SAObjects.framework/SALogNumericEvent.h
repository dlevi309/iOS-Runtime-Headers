/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString, NSNumber;

@interface SALogNumericEvent : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * eventName; 
@property (nonatomic,copy) NSString * eventOperation; 
@property (nonatomic,copy) NSNumber * eventValue; 
+(id)logNumericEvent;
+(id)logNumericEventWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(void)setEventValue:(NSNumber *)arg1 ;
-(NSString *)eventName;
-(NSNumber *)eventValue;
-(void)setEventName:(NSString *)arg1 ;
-(NSString *)eventOperation;
-(void)setEventOperation:(NSString *)arg1 ;
@end

