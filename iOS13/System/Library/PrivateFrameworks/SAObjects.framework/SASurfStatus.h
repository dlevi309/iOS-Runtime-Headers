/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainObject.h>

@class NSString;

@interface SASurfStatus : SADomainObject

@property (nonatomic,copy) NSString * currentState; 
+(id)surfStatus;
+(id)surfStatusWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)currentState;
-(void)setCurrentState:(NSString *)arg1 ;
-(id)encodedClassName;
@end

