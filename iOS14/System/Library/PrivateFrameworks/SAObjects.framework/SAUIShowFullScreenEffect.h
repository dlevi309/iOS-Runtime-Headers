/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

