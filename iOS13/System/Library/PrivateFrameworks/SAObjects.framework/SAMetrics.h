/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)metrics;
+(id)metricsWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)category;
-(void)setCategory:(NSString *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)originalCommandId;
-(void)setOriginalCommandId:(NSString *)arg1 ;
-(void)setEventInformation:(NSDictionary *)arg1 ;
-(void)setTimings:(NSDictionary *)arg1 ;
-(BOOL)requiresResponse;
-(id)_descriptionHint;
-(NSDictionary *)timings;
-(NSDictionary *)eventInformation;
@end

