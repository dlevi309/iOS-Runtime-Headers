/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString, NSNumber;

@interface SASExtractSpeechData : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * audioOutputType; 
@property (nonatomic,copy) NSNumber * endTime; 
@property (nonatomic,copy) NSString * speechRequestId; 
@property (nonatomic,copy) NSNumber * startTime; 
+(id)extractSpeechData;
+(id)extractSpeechDataWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(void)setStartTime:(NSNumber *)arg1 ;
-(void)setEndTime:(NSNumber *)arg1 ;
-(NSNumber *)endTime;
-(NSNumber *)startTime;
-(NSString *)audioOutputType;
-(void)setAudioOutputType:(NSString *)arg1 ;
-(NSString *)speechRequestId;
-(void)setSpeechRequestId:(NSString *)arg1 ;
@end

