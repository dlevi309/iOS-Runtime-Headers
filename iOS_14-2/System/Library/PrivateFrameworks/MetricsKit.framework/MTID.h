/*
* Generated on Thursday, January 14, 2021 at 2:27:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
*/

@class NSString, NSDate, NSDictionary;


@protocol MTID <NSObject>
@property (nonatomic,copy,readonly) NSString * idNamespace; 
@property (nonatomic,readonly) long long idType; 
@property (nonatomic,copy,readonly) NSString * idString; 
@property (nonatomic,readonly) double lifespan; 
@property (nonatomic,copy,readonly) NSDate * effectiveDate; 
@property (nonatomic,copy,readonly) NSDate * expirationDate; 
@property (nonatomic,readonly) BOOL isSynchronized; 
@property (nonatomic,copy,readonly) NSDictionary * metricsFields; 
@required
-(long long)idType;
-(NSString *)idString;
-(NSDate *)expirationDate;
-(NSDate *)effectiveDate;
-(BOOL)isSynchronized;
-(NSString *)idNamespace;
-(double)lifespan;
-(NSDictionary *)metricsFields;

@end

