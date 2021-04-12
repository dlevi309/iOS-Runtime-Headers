/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
*/


@class NSString, NSDictionary;

@interface HLPAnalyticsEvent : NSObject

@property (readonly) NSString * eventName; 
@property (readonly) NSDictionary * caRepresentation; 
+(id)event;
-(void)log;
-(NSString *)eventName;
-(NSDictionary *)caRepresentation;
@end

