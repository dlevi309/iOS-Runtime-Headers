/*
* Generated on Thursday, January 14, 2021 at 2:20:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GEOComposedEnrouteNotice.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class GEOTrafficCamera, NSString;

@interface GEOComposedTrafficCamera : GEOComposedEnrouteNotice <NSSecureCoding> {

	GEOTrafficCamera* _trafficCamera;

}

@property (nonatomic,readonly) int type; 
@property (nonatomic,readonly) unsigned highlightDistance; 
@property (nonatomic,readonly) BOOL hasSpeedLimitText; 
@property (nonatomic,readonly) NSString * speedLimitText; 
@property (nonatomic,readonly) BOOL hasSpeedThreshold; 
@property (nonatomic,readonly) double speedThreshold; 
@property (nonatomic,readonly) BOOL hasCameraPriority; 
@property (nonatomic,readonly) unsigned cameraPriority; 
+(BOOL)supportsSecureCoding;
-(id)position;
-(BOOL)hasSpeedLimitText;
-(BOOL)hasSpeedThreshold;
-(BOOL)hasCameraPriority;
-(unsigned)cameraPriority;
-(id)initWithEnrouteNotice:(id)arg1 enrouteNoticeIndex:(unsigned long long)arg2 legIndex:(unsigned long long)arg3 trafficCamera:(id)arg4 onRoute:(id)arg5 ;
-(double)speedThreshold;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)speedLimitText;
-(id)description;
-(int)type;
-(id)initWithCoder:(id)arg1 ;
-(unsigned)highlightDistance;
-(id)titleFormatForLocation:(id)arg1 ;
-(id)detailFormatForLocation:(id)arg1 ;
@end

