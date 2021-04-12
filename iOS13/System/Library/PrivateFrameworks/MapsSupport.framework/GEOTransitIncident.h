/*
* Generated on Monday, March 1, 2021 at 2:32:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

@class NSString, NSDate, NSArray;


@protocol GEOTransitIncident <NSObject>
@property (nonatomic,readonly) unsigned long long muid; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * summary; 
@property (nonatomic,readonly) NSString * fullDescription; 
@property (nonatomic,readonly) NSString * messageForRoutePlanning; 
@property (nonatomic,readonly) NSString * messageForRouteStepping; 
@property (nonatomic,readonly) NSString * messageForNonRoutable; 
@property (nonatomic,readonly) NSDate * startDate; 
@property (nonatomic,readonly) NSDate * endDate; 
@property (nonatomic,readonly) int iconType; 
@property (nonatomic,readonly) NSDate * creationDate; 
@property (nonatomic,readonly) NSDate * lastUpdated; 
@property (getter=isBlockingIncident,nonatomic,readonly) BOOL blockingIncident; 
@property (nonatomic,readonly) NSArray * affectedEntities; 
@required
-(NSDate *)startDate;
-(NSDate *)endDate;
-(NSString *)title;
-(NSDate *)creationDate;
-(NSString *)fullDescription;
-(unsigned long long)muid;
-(int)iconType;
-(NSString *)summary;
-(NSString *)messageForRoutePlanning;
-(NSString *)messageForRouteStepping;
-(NSString *)messageForNonRoutable;
-(NSDate *)lastUpdated;
-(BOOL)isBlockingIncident;
-(NSArray *)affectedEntities;

@end

