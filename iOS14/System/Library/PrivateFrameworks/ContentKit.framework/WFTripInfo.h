/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)routeName;
-(NSMeasurement *)distance;
-(void)encodeWithCoder:(id)arg1 ;
-(WFTimeInterval *)expectedTravelTime;
-(NSString *)wfName;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithMKRoute:(id)arg1 ;
@end

