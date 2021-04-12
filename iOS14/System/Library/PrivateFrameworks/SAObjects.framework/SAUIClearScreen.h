/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class SAAceView;

@interface SAUIClearScreen : SABaseClientBoundCommand

@property (nonatomic,retain) SAAceView * initialView; 
+(id)clearScreen;
+(id)clearScreenWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(SAAceView *)initialView;
-(void)setInitialView:(SAAceView *)arg1 ;
@end

