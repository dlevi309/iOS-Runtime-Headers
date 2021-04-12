/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

