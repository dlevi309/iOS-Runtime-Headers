/*
* Generated on Thursday, January 14, 2021 at 2:20:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableArray, NSArray;

@interface GEOComposedRouteLaneInfo : NSObject <NSSecureCoding> {

	NSMutableArray* _directions;
	BOOL _good;
	BOOL _hov;
	BOOL _preferred;

}

@property (nonatomic,readonly) BOOL hasDirections; 
@property (nonatomic,readonly) NSArray * directions; 
@property (nonatomic,readonly) BOOL isLaneForManeuver; 
@property (nonatomic,readonly) BOOL isHOVLane; 
@property (nonatomic,readonly) BOOL isPreferredLaneForManeuver; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isLaneForManeuver;
-(BOOL)isPreferredLaneForManeuver;
-(id)initWithLaneInfo:(id)arg1 ;
-(BOOL)hasDirections;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isHOVLane;
-(NSArray *)directions;
@end

