/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSURL;

@interface SAUIOpenLink : SABaseClientBoundCommand

@property (nonatomic,copy) NSURL * ref; 
+(id)openLink;
+(id)openLinkWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSURL *)ref;
-(void)setRef:(NSURL *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
@end

