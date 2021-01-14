/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SAScreenActionActivateUIElement : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * elementId; 
+(id)activateUIElement;
+(id)activateUIElementWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)elementId;
-(void)setElementId:(NSString *)arg1 ;
@end

