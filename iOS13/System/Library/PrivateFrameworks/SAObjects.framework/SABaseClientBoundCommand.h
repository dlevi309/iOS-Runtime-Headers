/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)baseClientBoundCommand;
+(id)baseClientBoundCommandWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSArray *)callbacks;
-(NSString *)appId;
-(void)setAppId:(NSString *)arg1 ;
-(id)encodedClassName;
-(NSString *)metricsContext;
-(BOOL)requiresResponse;
-(BOOL)mutatingCommand;
-(void)setUsefulnessScore:(NSNumber *)arg1 ;
-(NSNumber *)usefulnessScore;
-(void)setCallbacks:(NSArray *)arg1 ;
-(void)setMetricsContext:(NSString *)arg1 ;
@end

