/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class SASPronunciationContext;

@interface SAUIListenForPronunciation : SABaseClientBoundCommand

@property (nonatomic,retain) SASPronunciationContext * context; 
+(id)listenForPronunciation;
+(id)listenForPronunciationWithDictionary:(id)arg1 context:(id)arg2 ;
-(SASPronunciationContext *)context;
-(id)groupIdentifier;
-(void)setContext:(SASPronunciationContext *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
@end

