/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainCommand.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString;

@interface SASExtractSpeechDataCompleted : SADomainCommand <SAAceSerializable>

@property (nonatomic,copy) NSString * speechDataUrl; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)extractSpeechDataCompleted;
+(id)extractSpeechDataCompletedWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)speechDataUrl;
-(void)setSpeechDataUrl:(NSString *)arg1 ;
@end

