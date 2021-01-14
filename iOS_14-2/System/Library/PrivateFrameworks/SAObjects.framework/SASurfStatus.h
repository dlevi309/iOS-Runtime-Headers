/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainObject.h>

@class NSString;

@interface SASurfStatus : SADomainObject

@property (nonatomic,copy) NSString * currentState; 
+(id)surfStatus;
+(id)surfStatusWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setCurrentState:(NSString *)arg1 ;
-(id)groupIdentifier;
-(NSString *)currentState;
-(id)encodedClassName;
@end

