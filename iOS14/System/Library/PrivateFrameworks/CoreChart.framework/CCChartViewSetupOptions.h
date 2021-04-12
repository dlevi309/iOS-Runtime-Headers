/*
* Generated on Thursday, January 14, 2021 at 2:27:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreChart.framework/CoreChart
*/


@protocol CCChartViewDelegate;
@class NSString, NSObject, NSDictionary;

@interface CCChartViewSetupOptions : NSObject {

	NSString* config;
	NSString* rendererType;
	NSString* baseConfig;
	NSObject*<CCChartViewDelegate> delegate;
	NSDictionary* expressionFunctions;

}

@property (retain) NSString * config; 
@property (retain) NSDictionary * configDictionary; 
@property (retain) NSString * rendererType; 
@property (retain) NSString * baseConfig; 
@property (__weak) NSObject*<CCChartViewDelegate> delegate; 
@property (retain) NSDictionary * expressionFunctions; 
-(NSString *)config;
-(NSObject*<CCChartViewDelegate>)delegate;
-(void)setDelegate:(NSObject*<CCChartViewDelegate>)arg1 ;
-(void)setConfig:(NSString *)arg1 ;
-(NSDictionary *)configDictionary;
-(void)setConfigDictionary:(NSDictionary *)arg1 ;
-(NSString *)rendererType;
-(void)setRendererType:(NSString *)arg1 ;
-(void)setBaseConfig:(NSString *)arg1 ;
-(NSString *)baseConfig;
-(NSDictionary *)expressionFunctions;
-(void)setExpressionFunctions:(NSDictionary *)arg1 ;
@end

