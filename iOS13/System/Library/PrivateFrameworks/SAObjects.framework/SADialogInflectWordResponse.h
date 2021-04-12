/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SADialogInflectWordResponse : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * print; 
@property (nonatomic,copy) NSString * speak; 
+(id)inflectWordResponse;
+(id)inflectWordResponseWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)print;
-(NSString *)speak;
-(void)setSpeak:(NSString *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(void)setPrint:(NSString *)arg1 ;
@end

