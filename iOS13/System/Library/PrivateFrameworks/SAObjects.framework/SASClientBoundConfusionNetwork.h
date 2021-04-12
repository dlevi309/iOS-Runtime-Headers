/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class SASRecognition, NSString;

@interface SASClientBoundConfusionNetwork : SABaseClientBoundCommand

@property (nonatomic,retain) SASRecognition * rawRecognition; 
@property (nonatomic,copy) NSString * sessionId; 
+(id)clientBoundConfusionNetwork;
+(id)clientBoundConfusionNetworkWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)sessionId;
-(void)setSessionId:(NSString *)arg1 ;
-(id)encodedClassName;
-(SASRecognition *)rawRecognition;
-(BOOL)requiresResponse;
-(void)setRawRecognition:(SASRecognition *)arg1 ;
@end

