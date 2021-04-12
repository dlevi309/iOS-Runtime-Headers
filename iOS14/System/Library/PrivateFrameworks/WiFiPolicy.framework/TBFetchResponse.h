/*
* Generated on Thursday, January 14, 2021 at 2:26:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
*/

@class NSArray, NSError, NSSet, NSDictionary;


@protocol TBFetchResponse <NSObject>
@property (nonatomic,readonly) NSArray * results; 
@property (nonatomic,copy,readonly) NSError * error; 
@property (nonatomic,readonly) NSSet * tiles; 
@property (nonatomic,readonly) NSDictionary * resultsByBSSID; 
@optional
-(NSDictionary *)resultsByBSSID;

@required
-(NSArray *)results;
-(NSError *)error;
-(NSSet *)tiles;

@end

