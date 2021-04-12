/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@interface SAPhoneAnswer : SABaseClientBoundCommand

@property (assign,nonatomic) BOOL videoAllowed; 
+(id)answer;
+(id)answerWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(BOOL)videoAllowed;
-(void)setVideoAllowed:(BOOL)arg1 ;
@end

