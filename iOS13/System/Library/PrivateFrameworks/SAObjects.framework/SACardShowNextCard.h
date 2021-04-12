/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class SACardSnippet;

@interface SACardShowNextCard : SABaseClientBoundCommand

@property (nonatomic,retain) SACardSnippet * cardSnippet; 
+(id)showNextCard;
+(id)showNextCardWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(SACardSnippet *)cardSnippet;
-(void)setCardSnippet:(SACardSnippet *)arg1 ;
@end

