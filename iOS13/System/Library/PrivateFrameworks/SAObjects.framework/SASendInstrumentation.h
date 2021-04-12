/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSNumber, NSString, NSArray;

@interface SASendInstrumentation : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSNumber * eventTransmittedRelativeToBootTimeTimestampNs; 
@property (nonatomic,copy) NSString * eventTransmittedTimestampRefId; 
@property (nonatomic,copy) NSArray * instrumentationBatch; 
@property (nonatomic,copy) NSString * payloadVersion; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)sendInstrumentation;
+(id)sendInstrumentationWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)payloadVersion;
-(void)setPayloadVersion:(NSString *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSNumber *)eventTransmittedRelativeToBootTimeTimestampNs;
-(void)setEventTransmittedRelativeToBootTimeTimestampNs:(NSNumber *)arg1 ;
-(NSString *)eventTransmittedTimestampRefId;
-(void)setEventTransmittedTimestampRefId:(NSString *)arg1 ;
-(NSArray *)instrumentationBatch;
-(void)setInstrumentationBatch:(NSArray *)arg1 ;
@end

