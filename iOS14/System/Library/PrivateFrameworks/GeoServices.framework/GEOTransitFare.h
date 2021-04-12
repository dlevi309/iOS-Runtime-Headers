/*
* Generated on Thursday, January 14, 2021 at 2:20:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

@class NSDecimalNumber, NSString, NSArray;


@protocol GEOTransitFare <NSObject>
@property (nonatomic,readonly) NSDecimalNumber * value; 
@property (nonatomic,copy,readonly) NSString * currencyCode; 
@property (nonatomic,readonly) long long type; 
@property (nonatomic,readonly) NSArray * supportedICCardProviders; 
@property (nonatomic,readonly) BOOL cashOnly; 
@required
-(NSString *)currencyCode;
-(BOOL)cashOnly;
-(long long)type;
-(NSArray *)supportedICCardProviders;
-(NSDecimalNumber *)value;

@end

