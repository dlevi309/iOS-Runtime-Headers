/*
* Generated on Thursday, January 14, 2021 at 2:20:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface GEOComposedRouteLaneDirectionInfo : NSObject <NSSecureCoding> {

	int _direction;
	float _angle;

}

@property (nonatomic,readonly) int direction; 
@property (nonatomic,readonly) float angle; 
+(BOOL)supportsSecureCoding;
-(int)direction;
-(float)angle;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithLaneArrowHead:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

