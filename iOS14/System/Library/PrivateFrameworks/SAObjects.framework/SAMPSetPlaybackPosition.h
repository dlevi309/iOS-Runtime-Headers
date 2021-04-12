/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainCommand.h>

@interface SAMPSetPlaybackPosition : SADomainCommand

@property (assign,nonatomic) int position; 
+(id)setPlaybackPosition;
+(id)setPlaybackPositionWithDictionary:(id)arg1 context:(id)arg2 ;
-(int)position;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(void)setPosition:(int)arg1 ;
@end

