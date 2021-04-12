/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainCommand.h>

@interface SAMPSetPlaybackPosition : SADomainCommand

@property (assign,nonatomic) int position; 
+(id)setPlaybackPosition;
+(id)setPlaybackPositionWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(int)position;
-(void)setPosition:(int)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
@end

