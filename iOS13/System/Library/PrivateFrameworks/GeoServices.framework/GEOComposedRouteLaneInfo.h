/*
* Generated on Monday, March 1, 2021 at 2:30:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)directions;
-(BOOL)isLaneForManeuver;
-(BOOL)isHOVLane;
-(BOOL)isPreferredLaneForManeuver;
-(id)initWithLaneInfo:(id)arg1 ;
-(BOOL)hasDirections;
@end

