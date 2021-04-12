/*
* Generated on Monday, March 1, 2021 at 2:30:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(long long)type;
-(NSString *)currencyCode;
-(NSDecimalNumber *)value;
-(BOOL)cashOnly;
-(NSArray *)supportedICCardProviders;

@end

