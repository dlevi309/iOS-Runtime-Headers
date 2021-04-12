/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SAUIShowFullScreenEffect : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * fullScreenEffectType; 
+(id)showFullScreenEffect;
+(id)showFullScreenEffectWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)fullScreenEffectType;
-(void)setFullScreenEffectType:(NSString *)arg1 ;
@end

