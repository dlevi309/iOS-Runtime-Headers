/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/


@class NSArray, NSDictionary;

@interface HKAccessibilityData : NSObject {

	NSArray* _accessibilityPointData;
	NSDictionary* _accessibilitySpans;

}

@property (nonatomic,readonly) NSArray * accessibilityPointData;               //@synthesize accessibilityPointData=_accessibilityPointData - In the implementation block
@property (nonatomic,readonly) NSDictionary * accessibilitySpans;              //@synthesize accessibilitySpans=_accessibilitySpans - In the implementation block
-(id)description;
-(NSDictionary *)accessibilitySpans;
-(NSArray *)accessibilityPointData;
-(id)initWithPointData:(id)arg1 accessibilitySpans:(id)arg2 ;
@end

