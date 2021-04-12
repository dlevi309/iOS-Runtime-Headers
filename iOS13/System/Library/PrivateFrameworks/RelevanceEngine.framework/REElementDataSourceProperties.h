/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(unsigned long long)state;
-(BOOL)isRunning;
-(NSDictionary *)dataSourceProperties;

@end

