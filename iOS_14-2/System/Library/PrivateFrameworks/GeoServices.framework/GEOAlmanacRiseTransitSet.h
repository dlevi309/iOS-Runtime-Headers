/*
* Generated on Thursday, January 14, 2021 at 2:21:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


#import <GeoServices/GeoServices-Structs.h>
@class NSDate;

@interface GEOAlmanacRiseTransitSet : NSObject {

	CAARiseTransitSetDetails2 _rise;
	CAARiseTransitSetDetails2 _transit;
	CAARiseTransitSetDetails2 _set;

}

@property (nonatomic,readonly) NSDate * rise; 
@property (nonatomic,readonly) NSDate * transit; 
@property (nonatomic,readonly) NSDate * set; 
@property (nonatomic,readonly) BOOL transitIsAboveHorizon; 
@property (nonatomic,readonly) BOOL isIdeal; 
@property (nonatomic,readonly) CAARiseTransitSetDetails2 firstItem; 
@property (nonatomic,readonly) CAARiseTransitSetDetails2 lastItem; 
-(NSDate *)transit;
-(CAARiseTransitSetDetails2)firstItem;
-(CAARiseTransitSetDetails2)lastItem;
-(BOOL)transitIsAboveHorizon;
-(id)description;
-(id)initWithRise:(const CAARiseTransitSetDetails2*)arg1 transit:(const CAARiseTransitSetDetails2*)arg2 set:(const CAARiseTransitSetDetails2*)arg3 ;
-(BOOL)isIdeal;
-(NSDate *)set;
-(NSDate *)rise;
@end

