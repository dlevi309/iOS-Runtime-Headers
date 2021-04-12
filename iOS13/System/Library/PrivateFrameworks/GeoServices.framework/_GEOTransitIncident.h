/*
* Generated on Monday, March 1, 2021 at 2:30:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <libobjc.A.dylib/GEOTransitIncident.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate, NSArray, GEOPBTransitIncident;

@interface _GEOTransitIncident : NSObject <GEOTransitIncident, NSSecureCoding> {

	GEOPBTransitIncident* _incident;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
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
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)debugDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(NSString *)title;
-(NSDate *)creationDate;
-(NSString *)fullDescription;
-(unsigned long long)muid;
-(int)iconType;
-(id)initWithIncident:(id)arg1 ;
-(NSString *)summary;
-(NSString *)messageForRoutePlanning;
-(NSString *)messageForRouteStepping;
-(NSString *)messageForNonRoutable;
-(NSDate *)lastUpdated;
-(BOOL)isBlockingIncident;
-(NSArray *)affectedEntities;
@end

