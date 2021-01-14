/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSNumber, NSString, SASPronunciationData;

@interface SASPronunciationRecognized : SABaseClientBoundCommand

@property (nonatomic,copy) NSNumber * errorCode; 
@property (nonatomic,copy) NSString * interactionId; 
@property (nonatomic,retain) SASPronunciationData * pronunciationData; 
+(id)pronunciationRecognized;
+(id)pronunciationRecognizedWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(void)setPronunciationData:(SASPronunciationData *)arg1 ;
-(NSNumber *)errorCode;
-(SASPronunciationData *)pronunciationData;
-(NSString *)interactionId;
-(void)setInteractionId:(NSString *)arg1 ;
-(void)setErrorCode:(NSNumber *)arg1 ;
@end

