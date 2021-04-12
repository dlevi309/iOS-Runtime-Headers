/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SALogStringEvent : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * eventName; 
@property (nonatomic,copy) NSString * eventValue; 
+(id)logStringEvent;
+(id)logStringEventWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(void)setEventValue:(NSString *)arg1 ;
-(NSString *)eventName;
-(NSString *)eventValue;
-(void)setEventName:(NSString *)arg1 ;
@end

