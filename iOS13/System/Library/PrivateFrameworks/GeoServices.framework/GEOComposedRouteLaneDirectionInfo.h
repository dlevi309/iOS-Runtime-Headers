/*
* Generated on Monday, March 1, 2021 at 2:30:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(int)direction;
-(float)angle;
-(id)initWithLaneArrowHead:(id)arg1 ;
@end

