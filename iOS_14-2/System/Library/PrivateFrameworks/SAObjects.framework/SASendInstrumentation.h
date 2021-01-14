/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sendInstrumentation;
+(id)sendInstrumentationWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)payloadVersion;
-(NSNumber *)eventTransmittedRelativeToBootTimeTimestampNs;
-(void)setEventTransmittedRelativeToBootTimeTimestampNs:(NSNumber *)arg1 ;
-(NSString *)eventTransmittedTimestampRefId;
-(void)setEventTransmittedTimestampRefId:(NSString *)arg1 ;
-(NSArray *)instrumentationBatch;
-(void)setInstrumentationBatch:(NSArray *)arg1 ;
-(void)setPayloadVersion:(NSString *)arg1 ;
@end

