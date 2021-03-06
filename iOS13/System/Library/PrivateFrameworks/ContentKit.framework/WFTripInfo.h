/*
* Generated on Monday, March 1, 2021 at 2:34:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/WFNaming.h>

@class NSString, NSMeasurement, WFTimeInterval;

@interface WFTripInfo : NSObject <NSSecureCoding, WFNaming> {

	NSString* _routeName;
	NSMeasurement* _distance;
	WFTimeInterval* _expectedTravelTime;

}

@property (nonatomic,readonly) NSString * routeName;                             //@synthesize routeName=_routeName - In the implementation block
@property (nonatomic,readonly) NSMeasurement * distance;                         //@synthesize distance=_distance - In the implementation block
@property (nonatomic,readonly) WFTimeInterval * expectedTravelTime;              //@synthesize expectedTravelTime=_expectedTravelTime - In the implementation block
@property (nonatomic,copy,readonly) NSString * wfName; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSMeasurement *)distance;
-(NSString *)routeName;
-(WFTimeInterval *)expectedTravelTime;
-(NSString *)wfName;
-(id)initWithMKRoute:(id)arg1 ;
@end

