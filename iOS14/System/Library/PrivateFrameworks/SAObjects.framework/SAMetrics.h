/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSString, NSDictionary;

@interface SAMetrics : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSString * category; 
@property (nonatomic,copy) NSDictionary * eventInformation; 
@property (nonatomic,copy) NSString * originalCommandId; 
@property (nonatomic,copy) NSDictionary * timings; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)metrics;
+(id)metricsWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSDictionary *)timings;
-(void)setCategory:(NSString *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(void)setTimings:(NSDictionary *)arg1 ;
-(NSString *)originalCommandId;
-(NSString *)category;
-(void)setOriginalCommandId:(NSString *)arg1 ;
-(void)setEventInformation:(NSDictionary *)arg1 ;
-(NSDictionary *)eventInformation;
-(id)_descriptionHint;
@end

