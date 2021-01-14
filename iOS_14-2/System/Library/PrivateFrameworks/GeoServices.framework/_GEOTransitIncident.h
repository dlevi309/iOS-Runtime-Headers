/*
* Generated on Thursday, January 14, 2021 at 2:21:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <libobjc.A.dylib/GEOTransitIncident.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate, NSArray, GEOPBTransitIncident;

@interface _GEOTransitIncident : NSObject <GEOTransitIncident, NSSecureCoding> {

	GEOPBTransitIncident* _incident;

}

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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSDate *)lastUpdated;
-(NSDate *)endDate;
-(NSDate *)startDate;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)debugDescription;
-(NSString *)fullDescription;
-(NSDate *)creationDate;
-(NSString *)summary;
-(int)iconType;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)muid;
-(id)initWithIncident:(id)arg1 ;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)messageForNonRoutable;
-(NSString *)messageForRoutePlanning;
-(NSString *)messageForRouteStepping;
-(BOOL)isBlockingIncident;
-(NSArray *)affectedEntities;
@end

