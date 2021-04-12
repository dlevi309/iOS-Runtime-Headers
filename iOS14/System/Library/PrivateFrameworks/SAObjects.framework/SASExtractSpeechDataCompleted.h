/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setSpeechDataUrl:(NSString *)arg1 ;
-(NSString *)speechDataUrl;
@end

