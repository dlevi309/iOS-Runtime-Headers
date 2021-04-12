/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainObject.h>

@class NSString;

@interface SASpeakablePhrase : SADomainObject

@property (nonatomic,copy) NSString * phrase; 
@property (nonatomic,copy) NSString * pronunciation; 
+(id)speakablePhrase;
+(id)speakablePhraseWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)pronunciation;
-(void)setPronunciation:(NSString *)arg1 ;
-(NSString *)phrase;
-(void)setPhrase:(NSString *)arg1 ;
@end

