/*
* Generated on Thursday, January 14, 2021 at 2:28:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

@class NSString, NSDictionary;


@protocol REElementDataSourceProperties <REExportedInterface>
@property (nonatomic,readonly) NSString * name; 
@property (getter=isRunning,nonatomic,readonly) BOOL running; 
@property (nonatomic,readonly) unsigned long long state; 
@property (nonatomic,readonly) NSDictionary * dataSourceProperties; 
@required
-(NSString *)name;
-(BOOL)isRunning;
-(unsigned long long)state;
-(NSDictionary *)dataSourceProperties;

@end

