/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SAUIShowHelp : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * speakableText; 
@property (nonatomic,copy) NSString * text; 
+(id)showHelpWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)showHelp;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)speakableText;
-(void)setSpeakableText:(NSString *)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(NSString *)text;
@end

