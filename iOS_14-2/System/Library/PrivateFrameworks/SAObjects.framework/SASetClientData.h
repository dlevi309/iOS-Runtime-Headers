/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSNumber;

@interface SASetClientData : SABaseClientBoundCommand

@property (nonatomic,copy) NSNumber * holdToTalkThresholdInMilliseconds; 
+(id)setClientData;
+(id)setClientDataWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(void)setHoldToTalkThresholdInMilliseconds:(NSNumber *)arg1 ;
-(NSNumber *)holdToTalkThresholdInMilliseconds;
@end

