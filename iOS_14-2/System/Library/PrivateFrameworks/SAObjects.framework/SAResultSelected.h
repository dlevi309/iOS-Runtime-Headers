/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSNumber, NSString;

@interface SAResultSelected : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSNumber * processedAudioDuration; 
@property (nonatomic,copy) NSString * resultId; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)resultSelected;
+(id)resultSelectedWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSNumber *)processedAudioDuration;
-(void)setProcessedAudioDuration:(NSNumber *)arg1 ;
-(void)setResultId:(NSString *)arg1 ;
-(NSString *)resultId;
@end

