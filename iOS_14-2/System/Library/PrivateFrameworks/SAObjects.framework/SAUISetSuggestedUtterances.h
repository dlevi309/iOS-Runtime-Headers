/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString, NSArray;

@interface SAUISetSuggestedUtterances : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * language; 
@property (nonatomic,copy) NSArray * utterances; 
+(id)setSuggestedUtterances;
+(id)setSuggestedUtterancesWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSArray *)utterances;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(void)setLanguage:(NSString *)arg1 ;
-(void)setUtterances:(NSArray *)arg1 ;
-(NSString *)language;
@end

