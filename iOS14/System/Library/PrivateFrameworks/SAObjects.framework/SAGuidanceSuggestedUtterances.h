/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainObject.h>

@class NSArray;

@interface SAGuidanceSuggestedUtterances : SADomainObject

@property (nonatomic,copy) NSArray * utterances; 
+(id)suggestedUtterancesWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)suggestedUtterances;
-(id)groupIdentifier;
-(NSArray *)utterances;
-(id)encodedClassName;
-(void)setUtterances:(NSArray *)arg1 ;
@end

