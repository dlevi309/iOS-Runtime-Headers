/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSNumber;

@interface SASSetMultilingualDictationConfig : SABaseClientBoundCommand

@property (assign,nonatomic) BOOL multilingualDisabled; 
@property (nonatomic,copy) NSNumber * multilingualTimeoutInMillis; 
+(id)setMultilingualDictationConfig;
+(id)setMultilingualDictationConfigWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(BOOL)multilingualDisabled;
-(void)setMultilingualDisabled:(BOOL)arg1 ;
-(NSNumber *)multilingualTimeoutInMillis;
-(void)setMultilingualTimeoutInMillis:(NSNumber *)arg1 ;
@end

