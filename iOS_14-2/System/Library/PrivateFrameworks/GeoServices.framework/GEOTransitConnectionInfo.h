/*
* Generated on Thursday, January 14, 2021 at 2:21:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

@class NSString, NSArray, NSURL;


@protocol GEOTransitConnectionInfo <NSObject>
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSArray * labelItems; 
@property (nonatomic,readonly) NSURL * urlToOpen; 
@property (nonatomic,readonly) unsigned long long muid; 
@property (nonatomic,readonly) int providerID; 
@required
-(int)providerID;
-(NSString *)name;
-(NSArray *)labelItems;
-(unsigned long long)muid;
-(NSURL *)urlToOpen;

@end

