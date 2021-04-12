/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainCommand.h>

@class SAClockObject;

@interface SAClockAdd : SADomainCommand

@property (nonatomic,retain) SAClockObject * clockToAdd; 
+(id)add;
+(id)addWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(SAClockObject *)clockToAdd;
-(void)setClockToAdd:(SAClockObject *)arg1 ;
@end

