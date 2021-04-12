/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainCommand.h>

@class NSURL;

@interface SASmsDraftShow : SADomainCommand

@property (nonatomic,copy) NSURL * smsIdentifier; 
+(id)draftShow;
+(id)draftShowWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSURL *)smsIdentifier;
-(void)setSmsIdentifier:(NSURL *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
@end

