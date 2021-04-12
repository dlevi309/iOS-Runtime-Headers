/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setPrint:(NSString *)arg1 ;
-(void)setSpeak:(NSString *)arg1 ;
-(id)encodedClassName;
-(NSString *)speak;
-(BOOL)requiresResponse;
-(NSString *)print;
@end

