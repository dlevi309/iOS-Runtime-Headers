/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)eventName;
-(void)setEventName:(NSString *)arg1 ;
-(void)setEventValue:(NSNumber *)arg1 ;
-(NSNumber *)eventValue;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)eventOperation;
-(void)setEventOperation:(NSString *)arg1 ;
@end

