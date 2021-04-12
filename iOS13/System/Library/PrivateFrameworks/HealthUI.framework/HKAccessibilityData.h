/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

