/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray;

@interface SAIntentGroupGetIntentDefinitions : SABaseClientBoundCommand

@property (nonatomic,copy) NSArray * queries; 
+(id)getIntentDefinitions;
+(id)getIntentDefinitionsWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(void)setQueries:(NSArray *)arg1 ;
-(BOOL)mutatingCommand;
-(NSArray *)queries;
@end

