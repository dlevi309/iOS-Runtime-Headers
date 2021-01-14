/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAClientBoundCommand.h>

@class NSString, NSArray, NSNumber;

@interface SABaseClientBoundCommand : SABaseCommand <SAClientBoundCommand>

@property (nonatomic,copy) NSString * appId; 
@property (nonatomic,copy) NSArray * callbacks; 
@property (nonatomic,copy) NSString * metricsContext; 
@property (nonatomic,copy) NSNumber * usefulnessScore; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)baseClientBoundCommand;
+(id)baseClientBoundCommandWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)appId;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSArray *)callbacks;
-(NSString *)metricsContext;
-(void)setMetricsContext:(NSString *)arg1 ;
-(void)setCallbacks:(NSArray *)arg1 ;
-(BOOL)mutatingCommand;
-(void)setUsefulnessScore:(NSNumber *)arg1 ;
-(NSNumber *)usefulnessScore;
-(void)setAppId:(NSString *)arg1 ;
@end

