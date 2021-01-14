/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString, NSArray;

@interface SATTSGetUnspeakableRangeOfText : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * locale; 
@property (nonatomic,copy) NSArray * texts; 
+(id)getUnspeakableRangeOfText;
+(id)getUnspeakableRangeOfTextWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)locale;
-(id)groupIdentifier;
-(void)setLocale:(NSString *)arg1 ;
-(NSArray *)texts;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(void)setTexts:(NSArray *)arg1 ;
-(BOOL)mutatingCommand;
@end

