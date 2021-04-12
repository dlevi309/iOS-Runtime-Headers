/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSNumber, NSString;

@interface SASExtractSpeechData : SABaseClientBoundCommand

@property (nonatomic,copy) NSNumber * endTime; 
@property (nonatomic,copy) NSString * speechRequestId; 
@property (nonatomic,copy) NSNumber * startTime; 
+(id)extractSpeechData;
+(id)extractSpeechDataWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSNumber *)startTime;
-(NSNumber *)endTime;
-(void)setEndTime:(NSNumber *)arg1 ;
-(void)setStartTime:(NSNumber *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)speechRequestId;
-(void)setSpeechRequestId:(NSString *)arg1 ;
@end

